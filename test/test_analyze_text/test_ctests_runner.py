# test_ctests_runner.py
# Run *.ctests in ./test with unittest, grouped by file

from __future__ import annotations
import os
import re
import unittest
from dataclasses import dataclass, field
from pathlib import Path
from typing import List, Optional

from textwizard.wizard_analyze_text.wizard_correctness.correctness import CorrectnessAnalyzer

HERE = Path(__file__).resolve().parent
CTESTS_DIR = HERE / "test"

# Default root; sovrascrivibile con TW_DICT_DIR
DICT_ROOT = Path(r"D:\WORK\TextWizard\corpus\dictionaries")

_SAFE_RE = re.compile(r"\W+")
def _safe(s: str) -> str:
    return _SAFE_RE.sub("_", s)

_APOS_MAP = str.maketrans({
    "\u2019": "'",  # RIGHT SINGLE QUOTATION MARK -> '
    "\u02BC": "'",  # MODIFIER LETTER APOSTROPHE   -> '
    "’": "'",
    "ʼ": "'",
})
def _unify_apostrophes(s: str) -> str:
    return s.translate(_APOS_MAP)


@dataclass(frozen=True)
class Case:
    name: str
    lang: str
    text: str
    expected_errors_count: Optional[int] = None
    must_contain: List[str] = field(default_factory=list)
    must_not_contain: List[str] = field(default_factory=list)

_KEY_RE = re.compile(r"^#(?P<k>[A-Za-z_]+)\s*:\s*(?P<v>.*)$")

def _lang_base(s: str) -> str:
    s = s.split("_", 1)[0]
    s = s.split("-", 1)[0]
    s = s.split(".", 1)[0]
    return s

def _unescape(s: str) -> str:
    import re
    s = re.sub(r"\\u([0-9a-fA-F]{4})",
               lambda m: chr(int(m.group(1), 16)),
               s)
    s = re.sub(r"\\U([0-9a-fA-F]{8})",
               lambda m: chr(int(m.group(1), 16)),
               s)
    s = (s
         .replace(r"\n", "\n")
         .replace(r"\r", "\r")
         .replace(r"\t", "\t")
         .replace(r"\\", "\\"))
    return s

def _dict_root() -> Path:
    env = os.getenv("TW_DICT_DIR")
    if env:
        p = Path(env).expanduser().resolve()
        if p.is_dir():
            return p
    return DICT_ROOT

def _first_existing(patterns: List[str], root: Path) -> Optional[Path]:
    for pat in patterns:
        for p in root.glob(pat):
            if p.is_file():
                return p
    return None

def _find_dict(lang: str) -> Optional[Path]:
    root = _dict_root()
    base = _lang_base(lang)

    # 1) esatto (zst o .marisa)
    p = _first_existing([f"{base}.marisa.zst", f"{base}.marisa"], root)
    if p: return p

    # 2) preferenze per serbo
    if base == "sr":
        for pats in (
            [f"{base}*cyrl*.marisa.zst", f"{base}*cyrl*.marisa"],
            [f"{base}*cyr*.marisa.zst",  f"{base}*cyr*.marisa"],
            [f"{base}*latn*.marisa.zst", f"{base}*latn*.marisa"],
            [f"{base}*.marisa.zst",      f"{base}*.marisa"],
        ):
            p = _first_existing(pats, root)
            if p: return p
        return None

    # 3) fallback generico
    return _first_existing([f"{base}*.marisa.zst", f"{base}*.marisa"], root)

def _demojibake_bytes(b: bytes) -> str:
    """Decoder robusto per .ctests senza crash su encode latin-1."""

    def _try(fn):
        try:
            return fn()
        except (UnicodeDecodeError, UnicodeEncodeError):
            return None

    # --- helper per scoring ---
    RANGES = [
        (0x0900, 0x097F),  # Devanagari
        (0x0980, 0x09FF),  # Bengali/Assamese
        (0x0A00, 0x0A7F),  # Gurmukhi
        (0x0A80, 0x0AFF),  # Gujarati
        (0x0B00, 0x0B7F),  # Odia
        (0x0B80, 0x0BFF),  # Tamil
        (0x0C00, 0x0C7F),  # Telugu
        (0x0C80, 0x0CFF),  # Kannada
        (0x0D80, 0x0DFF),  # Sinhala
    ]
    def count_indic(s: str) -> int:
        cnt = 0
        for ch in s:
            cp = ord(ch)
            for a, b_ in RANGES:
                if a <= cp <= b_:
                    cnt += 1
                    break
        return cnt

    SUSPICIOUS_CH = "ÃÂÐÑà"
    SUSPICIOUS_PAIRS = ("à¤", "à¥", "à§", "à©", "à«", "à¯", "à±", "à³", "à·", "à­")
    def score(s: str) -> int:
        good = count_indic(s)
        bad = sum(s.count(ch) for ch in SUSPICIOUS_CH)
        bad += sum(s.count(p) for p in SUSPICIOUS_PAIRS) * 3
        bad += s.count("\uFFFD") * 5
        return good * 10 - bad

    cands = []

    # A) UTF-8 (accetta BOM)
    s_utf8 = _try(lambda: b.decode("utf-8-sig"))
    if s_utf8 is not None:
        cands.append(s_utf8)
        # A2) round-trip SOLO se ci sono marker di mojibake e zero Indic reali
        if any(p in s_utf8 for p in SUSPICIOUS_PAIRS) and count_indic(s_utf8) == 0:
            rt = _try(lambda: s_utf8.encode("latin-1").decode("utf-8"))
            if rt and rt != s_utf8:
                cands.append(rt)

    # B) latin-1 → UTF-8
    s_l1 = _try(lambda: b.decode("latin-1"))
    if s_l1 is not None:
        s_l1u = _try(lambda: s_l1.encode("latin-1").decode("utf-8"))
        if s_l1u is not None:
            cands.append(s_l1u)

    # C) cp1252 → UTF-8
    s_1252 = _try(lambda: b.decode("cp1252"))
    if s_1252 is not None:
        s_1252u = _try(lambda: s_1252.encode("cp1252").decode("utf-8"))
        if s_1252u is not None:
            cands.append(s_1252u)

    if not cands:
        return b.decode("latin-1", errors="strict")

    return max(cands, key=score)


def parse_ctests(path: Path) -> List[Case]:
    cases: List[Case] = []
    text = _demojibake_bytes(path.read_bytes())
    lines = text.splitlines()

    cur: dict = {}
    section: Optional[str] = None
    buf: List[str] = []

    def flush_section():
        nonlocal section, buf, cur
        if section in ("text", "must_contain", "must_not_contain"):
            content = "\n".join(buf)
            if section == "text":
                cur["text"] = _unescape(content.strip())
            else:
                items = [_unescape(x.strip()) for x in content.splitlines() if x.strip()]
                cur.setdefault(section, []).extend(items)
        section, buf = None, []

    def emit_case():
        nonlocal cur
        if not cur:
            return
        name = cur.get("test")
        lang = cur.get("lang")
        if not name or not lang:
            raise ValueError(f"Malformed case in {path.name}: missing #test: or #lang:")
        exp = cur.get("expected_errors_count")
        expected = int(exp) if exp not in (None, "") else None
        text = cur.get("text", "")
        cases.append(
            Case(
                name=name,
                lang=lang,
                text=text,
                expected_errors_count=expected,
                must_contain=cur.get("must_contain", []),
                must_not_contain=cur.get("must_not_contain", []),
            )
        )
        cur = {}

    for line in lines:
        if line.startswith("#end"):
            flush_section(); emit_case(); continue
        m = _KEY_RE.match(line)
        if m:
            flush_section()
            k = m.group("k").lower()
            v = m.group("v").strip()
            cur[k] = v
            continue
        if line.startswith("#text"):
            flush_section(); section = "text"; buf = []; continue
        if line.startswith("#must_contain"):
            flush_section(); section = "must_contain"; buf = []; continue
        if line.startswith("#must_not_contain"):
            flush_section(); section = "must_not_contain"; buf = []; continue
        if section:
            buf.append(line)

    flush_section()
    emit_case()
    return cases

def discover_ctest_files(root: Path) -> List[Path]:
    if not root.is_dir():
        return []
    files = list(root.rglob("*.ctests")) + list(root.rglob("*.txt"))
    return sorted(files)

def run_case(c: Case) -> None:
    dict_path = _find_dict(c.lang)
    if dict_path is None:
        raise unittest.SkipTest(f"Dictionary not found for lang '{c.lang}'. Set TW_DICT_DIR or adjust DICT_ROOT.")
    analyzer = CorrectnessAnalyzer(language=c.lang, _dict_path=dict_path)
    report = analyzer.run(c.text)
    errs = report["errors"]

    if c.expected_errors_count is not None and report["errors_count"] != c.expected_errors_count:
        raise AssertionError(
            f"{c.name}: expected {c.expected_errors_count} errors, got {report['errors_count']}\n"
            f"errors: {list(errs)!r}\ntext: {c.text!r}"
        )
    if c.must_contain:
        # FIX: match esatto sulla superficie originale (niente lowercase)
        missing = [w for w in c.must_contain if w not in errs]
        if missing:
            raise AssertionError(
                f"{c.name}: missing in errors: {missing}\nerrors: {list(errs)!r}\ntext: {c.text!r}"
            )
    if c.must_not_contain:
        forbidden = [w for w in c.must_not_contain if w in errs]
        if forbidden:
            raise AssertionError(
                f"{c.name}: unexpected in errors: {forbidden}\nerrors: {list(errs)!r}\ntext: {c.text!r}"
            )

def _mk_test(file: Path, case_name: str):
    def _t(self):
        cases = [c for c in parse_ctests(file) if c.name == case_name]
        assert cases, f"Case '{case_name}' not found in {file}"
        run_case(cases[0])
    _t.__name__ = f"test_{_safe(case_name)}"
    return _t

# One TestCase per .ctests file
_files = discover_ctest_files(CTESTS_DIR)
for f in _files:
    cases = parse_ctests(f)
    if not cases:
        continue
    cls_name = f"Test_{_safe(f.stem)}"
    if re.match(r"^\d", cls_name):
        cls_name = "T_" + cls_name
    cls_dict = {"__doc__": f"Auto-generated cases from {f.name}"}
    new_cls = type(cls_name, (unittest.TestCase,), cls_dict)
    for c in cases:
        setattr(new_cls, f"test_{_safe(c.name)}", _mk_test(f, c.name))
    globals()[cls_name] = new_cls

class TestStressLongInput(unittest.TestCase):
    @staticmethod
    def _find_en_dict() -> Optional[Path]:
        root = _dict_root()
        for name in ("en.marisa.zst", "en.marisa"):
            p = root / name
            if p.is_file():
                return p
        cand = next((q for q in root.glob("en*.marisa.zst") if q.is_file()), None)
        if cand:
            return cand
        return next((q for q in root.glob("en*.marisa") if q.is_file()), None)

    def test_long_mixed_text_single_run(self):
        dict_path = self._find_en_dict()
        if not dict_path:
            raise unittest.SkipTest("English dictionary not found.")
        chunk = (
            "Hello world It's fine 1,234 12\u00A0345 3.14159 "
            "😀 🤖 🧪 "
            "https://example.com test@example.com "
            "東京 Москва العربية हिन्दी ไทย "
        )
        repeats = max(1, (200_000 // len(chunk)) + 5)
        parts = [chunk] * repeats
        parts.insert(len(parts) // 2, "INTENTIONAL_ERROR_ABCxyz ")
        text = "".join(parts)

        analyzer = CorrectnessAnalyzer(language="en", _dict_path=dict_path)
        report = analyzer.run(text)

        self.assertIsInstance(report, dict)
        self.assertIn("errors_count", report)
        self.assertIn("errors", report)
        self.assertEqual(report["errors_count"], len(report["errors"]))

        # Regola: gli errori riportano la superficie originale (niente lowercase)
        self.assertIn("INTENTIONAL_ERROR_ABCxyz", report["errors"])

        # Numeri OK
        for num in ("1,234", "12\u00A0345", "3.14159"):
            self.assertNotIn(num, report["errors"])

        # URL & email OK
        for ok in ("https://example.com", "test@example.com"):
            self.assertNotIn(ok, report["errors"])

if __name__ == "__main__":
    unittest.main(verbosity=2, buffer=False)
