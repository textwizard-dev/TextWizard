from __future__ import annotations

import json
import os
import unittest
from pathlib import Path
from typing import Any, Dict, List, Sequence

from textwizard.utils.wildcard import process_wildcard_words

DATA_DIR = Path(__file__).with_suffix("").parent / "test" 


def _load_dat_cases(file_path: os.PathLike) -> List[Dict[str, Any]]:
    """Parse a .dat file and return a list of test‑case dicts."""
    cases: List[Dict[str, Any]] = []
    cur: Dict[str, Any] = {}
    section: str | None = None

    with open(file_path, encoding="utf-8") as fh:
        for raw in fh:
            line = raw.rstrip("\n")
            if not line.strip():
                continue

            if line.startswith("#test:"):
                if cur:
                    cases.append(cur)
                cur, section = {"file": Path(file_path).name}, None
                cur["name"] = line.split(":", 1)[1].strip()

            elif line.startswith("#text"):
                section, cur["text"] = "text", ""

            elif line.startswith("#patterns"):
                section = "patterns"

            elif line.startswith("#params"):
                section, cur["params"] = "params", ""

            elif line.startswith("#expected"):
                section, cur["expected"] = "expected", ""

            else:  
                if section == "params":
                    cur["params"] += ("" if cur["params"] == "" else "\n") + line.strip()
                elif section in ("text", "expected"):
                    cur[section] += line + "\n"
                elif section == "patterns":
                    if line.startswith("["):
                        try:
                            cur["patterns"] = json.loads(line)
                        except json.JSONDecodeError:
                            cur["patterns"] = [line]
                    else:
                        cur["patterns"] = [line]

    if cur:
        cases.append(cur)
    return cases


def _parse_params(param_block: str) -> Dict[str, Any]:
    out: Dict[str, Any] = {}
    for row in param_block.splitlines():
        if "=" not in row:
            continue
        k, v = map(str.strip, row.split("=", 1))
        v_low = v.lower()
        if v_low in {"true", "false"}:
            out[k] = v_low == "true"
        elif v.startswith("[") or v.startswith("{"):
            out[k] = json.loads(v)
        else:
            out[k] = v
    return out



class TestWildcardSearch(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        cls.cases: List[Dict[str, Any]] = []
        if not DATA_DIR.is_dir():
            raise FileNotFoundError(f"Test directory {DATA_DIR} not found")
        for dat_file in DATA_DIR.glob("*.dat"):
            cls.cases.extend(_load_dat_cases(dat_file))

    def \
            test_wildcards(self):
        for tc in self.cases:
            with self.subTest(test=tc["name"], file=tc["file"]):
                text: str = tc.get("text", "")
                patterns: Sequence[str] = tc.get("patterns", [])
                expected: List[str] = tc.get("expected", "").rstrip("\n").splitlines()
                params = _parse_params(tc.get("params", ""))

                result = process_wildcard_words(text, patterns, **params)

                self.assertEqual(sorted(expected), sorted(result),
                                 msg=(
                                     f"Mismatch in {tc['name']} ({tc['file']})\n"
                                     f"Patterns : {patterns}\n"
                                     f"Expected : {expected}\n"
                                     f"Got      : {result}\n"
                                 ))


if __name__ == "__main__":  # pragma: no cover
    unittest.main()
