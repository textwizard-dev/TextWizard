"""
For each <basename>.marisa.zst in DICT_DIR and for each sample size (20, 200, 500):
  1) load trie from file
  2) sample 500 words (AS-IS, no casefold) — fresh per test
  3) assert no errors on clean text
  4) corrupt 10% by appending SUFFIX and assert errors:
     - zh: exact OR split-by-ASCII-chars
     - others (incl. ja): exact OR suffix-only tokens
"""

import atexit
import random
import unittest
from collections import Counter
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
from typing import Dict, List, Tuple

import marisa_trie
import zstandard as zstd

from textwizard.wizard_analyze_text.wizard_correctness.correctness import CorrectnessAnalyzer

# ---- configure ----
DICT_DIR = Path(r"D:\WORK\TextWizard\corpus\dictionaries")
MAX_WORKERS = 5
SAMPLE_SIZES = (20, 200, 500)
SAMPLE_TARGET = 500
SUFFIX = "ccc"
# -------------------

_executor = ThreadPoolExecutor(max_workers=MAX_WORKERS)
atexit.register(_executor.shutdown, wait=True)

_FILES: List[Path] = []
_RESULTS: Dict[Tuple[str, int], "concurrent.futures.Future"] = {}


def _load_trie_from_zst(path: Path) -> marisa_trie.Trie:
    raw = zstd.ZstdDecompressor().decompress(path.read_bytes())
    trie = marisa_trie.Trie()
    trie.frombytes(raw)
    return trie


def _reservoir_sample(trie: marisa_trie.Trie, k: int, rng: random.Random) -> List[str]:
    """Reservoir sampling of lemmas as-is (no casefold, no substitutions)."""
    reservoir: List[str] = []
    for i, word in enumerate(trie):
        if i < k:
            reservoir.append(word)
        else:
            j = rng.randint(0, i)
            if j < k:
                reservoir[j] = word
    return reservoir


def _lang_base(name: str) -> str:
    b = name.split("_", 1)[0]
    b = b.split("-", 1)[0]
    b = b.split(".", 1)[0]
    return b


def _run_case(path: Path, sample_size: int) -> None:
    basename = path.stem
    base = _lang_base(basename)

    trie = _load_trie_from_zst(path)

    rng = random.SystemRandom()

    pool = _reservoir_sample(trie, SAMPLE_TARGET, rng)
    if not pool:
        raise AssertionError(f"Dictionary {basename} appears empty or not loaded")
    if len(pool) < max(SAMPLE_SIZES):
        raise AssertionError(f"{basename}: not enough words for max sample size ({len(pool)} < {max(SAMPLE_SIZES)})")

    subset = rng.sample(pool, sample_size)
    if len(subset) != sample_size:
        raise AssertionError(f"{basename}: unable to extract {sample_size} words (got {len(subset)})")

    analyzer = CorrectnessAnalyzer(language=base, _dict_path=path)

    # --- clean text: zero errors ---
    clean_text = " ".join(subset)
    report = analyzer.run(clean_text)
    if report["errors_count"] != 0:
        raise AssertionError(
            f"{basename} (n={sample_size}): unexpected errors on valid words → {report['errors']}\n"
            f"Test text: {clean_text}"
        )

    # --- corrupt 10% appending SUFFIX (no space) ---
    n_corrupt = max(1, len(subset) // 10)
    corrupt_idx = set(rng.sample(range(len(subset)), n_corrupt))

    corrupted_words: List[str] = []
    tokens: List[str] = []
    for i, w in enumerate(subset):
        if i in corrupt_idx:
            cw = w + SUFFIX
            corrupted_words.append(cw)
            tokens.append(cw)
        else:
            tokens.append(w)

    corrupted_text = " ".join(tokens)
    report2 = analyzer.run(corrupted_text)
    errors2 = report2["errors"]

    if base == "zh":
        # exact OR split-by-ASCII-chars
        counts = Counter(errors2)
        want = Counter({ch: len(corrupted_words) * SUFFIX.count(ch) for ch in set(SUFFIX)})

        exact_ok = (report2["errors_count"] == len(corrupted_words)
                    and all(cw in errors2 for cw in corrupted_words))
        split_ok = (report2["errors_count"] == sum(want.values())
                    and all(counts[ch] == want[ch] for ch in want))

        if not (exact_ok or split_ok):
            raise AssertionError(
                f"{basename} (n={sample_size}): expected exact or split-by-ASCII errors for suffix '{SUFFIX}'\n"
                f"Corrupted text: {corrupted_text!r}\n"
                f"Corrupted words: {corrupted_words!r}\n"
                f"Errors count: {report2['errors_count']}, errors: {list(errors2)!r}"
            )
        return

    # all others (incl. ja): exact OR suffix-only tokens
    exact_ok = (report2["errors_count"] == len(corrupted_words)
                and all(cw in errors2 for cw in corrupted_words))
    suffix_only_ok = (report2["errors_count"] == len(corrupted_words)
                      and all(e == SUFFIX for e in errors2))

    if not (exact_ok or suffix_only_ok):
        raise AssertionError(
            f"{basename} (n={sample_size}): expected exact corrupted tokens OR suffix-only tokens\n"
            f"Corrupted text: {corrupted_text!r}\n"
            f"Corrupted words: {corrupted_words!r}\n"
            f"Errors snapshot: {list(errors2)!r}"
        )


if not DICT_DIR.is_dir():
    raise FileNotFoundError(f"Dictionary directory does not exist: {DICT_DIR}")

_FILES = list(DICT_DIR.glob("*.marisa.zst"))
if not _FILES:
    raise AssertionError(f"No .marisa.zst files found in {DICT_DIR}")

for p in _FILES:
    base = p.stem
    for sz in SAMPLE_SIZES:
        _RESULTS[(base, sz)] = _executor.submit(_run_case, p, sz)


class TestAllDictionaries(unittest.TestCase):
    pass


def _make_test(basename: str, size: int):
    def _test(self):
        _RESULTS[(basename, size)].result()
    _test.__name__ = f"test_{basename}_{size}"
    return _test


for path in _FILES:
    b = path.stem
    for s in SAMPLE_SIZES:
        setattr(TestAllDictionaries, f"test_{b}_{s}", _make_test(b, s))

if __name__ == "__main__":
    unittest.main(verbosity=2, buffer=False)
