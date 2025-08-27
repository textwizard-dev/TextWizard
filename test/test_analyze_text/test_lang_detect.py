import unittest
from dataclasses import dataclass
from functools import lru_cache
from typing import List, Tuple

from test.test_analyze_text.utils_test import SAMPLE_TEXTS
from textwizard.wizard_analyze_text.wizzard_lang_detect.detect_lang import (
    detect_lang
)
from textwizard.wizard_analyze_text.wizzard_lang_detect.model_io import  PROFILES_DIR,load_model
TOP_K = 3  

NOT_SUPPORT_2 = [
    "ae","ak","bi","bh","cr","co","cu","dv","ho","hz",
    "ia","ie","ii","ik","kj","na","nb","nd","ng","nn","nr",
    "oj","pi","za"
]

@dataclass
class Failure:
    gold_lang: str
    kind: str           # "short" | "long"
    predicted: str
    dist: List[Tuple[str, float]]
    text: str
    def __str__(self) -> str:
        txt = (self.text[:160] + "…") if len(self.text) > 160 else self.text
        dist_str = ", ".join(f"{l}:{p:.3f}" for l, p in self.dist)
        return (f"[{self.kind}] gold={self.gold_lang} predicted={self.predicted} "
                f"top{TOP_K}=[{dist_str}]\nTEXT: {txt}\n")

@lru_cache(maxsize=1)
def _get_model():
    return load_model(PROFILES_DIR)

class TestLanguageDetector(unittest.TestCase):
    failures: List[Failure] = []

    @classmethod
    def setUpClass(cls):
        cls.model = _get_model()

    def test_all_languages_short_long(self):
        for lang, samples in SAMPLE_TEXTS.items():
            if lang in NOT_SUPPORT_2:
                continue  # skip lingue non supportate
            for kind in ("short", "long"):
                text = samples.get(kind)
                if not text:
                    continue
                with self.subTest(lang=lang, kind=kind):
                    dist = detect_lang(self.model, text, top_k=TOP_K) or []
                    self.assertTrue(dist, f"Nessuna predizione per {lang} ({kind}). Testo: {text!r}")
                    pred = dist[0][0]
                    if pred != lang:
                        self.__class__.failures.append(Failure(lang, kind, pred, dist, text))
                        self.fail(str(self.__class__.failures[-1]))

    @classmethod
    def tearDownClass(cls):
        if not cls.failures:
            print("\n✓ Tutti i test (lingue supportate) sono PASSATI 🎉")
            return
        print(f"\n✗ Fallimenti: {len(cls.failures)}\n" + "-"*60)
        for i, f in enumerate(cls.failures, 1):
            print(f"{i:03d}) {f}", flush=True)

if __name__ == "__main__":
    unittest.main(verbosity=2)
