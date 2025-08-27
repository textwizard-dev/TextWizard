# test/test_ner/test_ner_unittest.py
import os
import importlib
import unittest
from pathlib import Path

from textwizard import TextWizard
from textwizard.wizard_ner.wizard_ner import Entity, TokenAnalysis, WizardNER
import json
import threading
import time

SAMPLE_TEXT = (
    "Barack Obama was born in Hawaii and served as the 44th President "
    "of the United States. He lives in Washington D.C. with his wife "
    "Michelle Obama and occasionally visits Silicon Valley tech companies "
    "such as Google and Apple."
)

def gpu_available() -> bool:
    spec = importlib.util.find_spec("torch")
    if spec is None:
        return False
    import torch
    return torch.cuda.is_available()


class TestNERCore(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.wizard = TextWizard()          # una sola istanza per tutta la classe

    # ─────────────────────────── API & helper coverage ──────────────
    def test_entities_result_core(self):
        res = self.wizard.extract_entities(SAMPLE_TEXT)
        self.assertIsInstance(res.entities["PERSON"][0], Entity)
        self.assertIn("PERSON", res.labels)
        self.assertEqual(res.entities["PERSON"][0].text, "Barack Obama")
        self.assertTrue(res.to_dicts())

    # ─────────────────────────── engine permutations ────────────────
    def test_extract_spacy(self):
        res = self.wizard.extract_entities(SAMPLE_TEXT, engine="spacy")
        self.assertIn("PERSON", res.entities)

    def test_extract_stanza(self):
        res = self.wizard.extract_entities(SAMPLE_TEXT, engine="stanza", language="en")
        self.assertIn("PERSON", res.entities)

    def test_extract_spacy_stanza(self):
        res = self.wizard.extract_entities(SAMPLE_TEXT, engine="spacy_stanza", language="en")
        self.assertIn("PERSON", res.entities)

    # ─────────────────────────── device selection ───────────────────
    def test_device_cpu(self):
        res = self.wizard.extract_entities(SAMPLE_TEXT, device="cpu")
        self.assertIn("PERSON", res.entities)

    @unittest.skipUnless(gpu_available(), "GPU not present")
    def test_device_gpu_or_fail(self):
        with self.assertRaises(RuntimeError):
            # se arriviamo fin qui SENZA GPU, deve lanciare
            self.wizard.extract_entities(SAMPLE_TEXT, device="gpu")

    # ─────────────────────────── error handling ─────────────────────
    def test_type_error(self):
        with self.assertRaises(ValueError):
            self.wizard.extract_entities(123)           # type: ignore


    def test_invalid_engine(self):
        with self.assertRaises(ValueError):
            self.wizard.extract_entities(SAMPLE_TEXT, engine="foo")

    def test_missing_spacy_model(self):
        os.environ["TW_NO_MODEL_DOWNLOAD"] = "1"
        with self.assertRaises(RuntimeError):
            self.wizard.extract_entities(
                SAMPLE_TEXT, engine="spacy", model="model_does_not_exist"
            )
        os.environ.pop("TW_NO_MODEL_DOWNLOAD", None)

    # ─────────────────────────── model path + caching ───────────────
    def test_custom_spacy_model_path(self):
        import spacy, tempfile
        with tempfile.TemporaryDirectory() as tmpdir:
            model_dir = Path(tmpdir) / "blank_en"
            spacy.blank("en").to_disk(model_dir)

            res = self.wizard.extract_entities(
                SAMPLE_TEXT, engine="spacy", model=str(model_dir)
            )
            self.assertEqual(res.entities, {})

            ner1 = WizardNER("spacy", str(model_dir), "en")
            ner2 = WizardNER("spacy", str(model_dir), "en")
            self.assertIs(ner1._nlp, ner2._nlp)

    # ─────────────────────────── token-level integrity ──────────────
    def test_token_consistency(self):
        res = self.wizard.extract_entities(SAMPLE_TEXT)
        for idx, tok in res.full_analysis.items():
            self.assertIsInstance(tok, TokenAnalysis)
            self.assertEqual(tok.text, SAMPLE_TEXT[tok.start:tok.end])
            self.assertEqual(idx, list(res.full_analysis).index(idx))

    # ─────────────────────────── micro-benchmark (optional) ─────────
    @unittest.skipIf(os.getenv("CI"), "Skip slow benchmark in CI")
    def test_micro_benchmark(self):
        # benchmark base
        res = self.wizard.extract_entities(SAMPLE_TEXT)
        stats = res._wizard_ner.benchmark(SAMPLE_TEXT, n=5)
        self.assertGreater(stats["docs_per_sec"], 0)

        with self.subTest("utf8 offsets"):
            text = "José lives in 北京."
            res = self.wizard.extract_entities(text, engine="spacy")
            for e in res.entities.get("PERSON", []) + res.entities.get("GPE", []):
                self.assertEqual(e.text, text[e.start:e.end])

        with self.subTest("no overlap"):
            res = self.wizard.extract_entities("Barack Obama met Barack Obama.")
            spans = {(e.start, e.end) for e in res.entities.get("PERSON", [])}
            self.assertEqual(len(spans), len(res.entities.get("PERSON", [])))

        with self.subTest("deterministic"):
            out1 = self.wizard.extract_entities("Google", engine="stanza").to_dicts()
            out2 = self.wizard.extract_entities("Google", engine="stanza").to_dicts()
            self.assertEqual(out1, out2)

        with self.subTest("json roundtrip"):
            res = self.wizard.extract_entities("Apple")
            payload = json.dumps(res.to_dicts())
            self.assertIsInstance(json.loads(payload), list)

        with self.subTest("spaCy model cache"):
            ner1 = WizardNER("spacy", "en_core_web_sm", "en")
            ner2 = WizardNER("spacy", "en_core_web_sm", "en")
            self.assertIs(ner1._nlp, ner2._nlp)

        with self.subTest("thread safety"):
            errors = []

            def worker():
                try:
                    self.wizard.extract_entities("Barack Obama met Angela Merkel.")
                except Exception as e:
                    errors.append(e)

            threads = [threading.Thread(target=worker) for _ in range(20)]
            [t.start() for t in threads];
            [t.join() for t in threads]
            self.assertFalse(errors, f"Exceptions in threads: {errors}")

        with self.subTest("quick perf"):
            t0 = time.perf_counter()
            for _ in range(50):
                self.wizard.extract_entities("Google is in Mountain View.")
            dps = 50 / (time.perf_counter() - t0)
            self.assertGreater(dps, 100)


if __name__ == "__main__":
    unittest.main()
