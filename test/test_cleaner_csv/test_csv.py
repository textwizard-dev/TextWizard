import os
import json
import re
import unittest
import csv as _csv
import textwizard as tw
from pathlib import Path

try:
    from textwizard.utils.errors.errors import (
        CSVValidationError,
        InvalidCSVDelimiterError,
        ValidationError,
        InvalidInputError,
    )
except ImportError:
    from textwizard.utils.errors import (
        CSVValidationError,
        InvalidCSVDelimiterError,
        ValidationError,
        InvalidInputError,
    )


DIR_TEST = Path(__file__).resolve().parent / "test" 


EXC_MAP = {
    "CSVValidationError": CSVValidationError,
    "InvalidCSVDelimiterError": InvalidCSVDelimiterError,
    "ValidationError": ValidationError,
    "InvalidInputError": InvalidInputError,
}


def load_test_cases(filepath: str):
    cases = []
    cur = {}
    section = None
    with open(filepath, encoding="utf-8") as fh:
        for line in fh:
            line = line.rstrip("\n")
            if not line.strip():
                continue
            if line.startswith("#test:"):
                if cur:
                    cases.append(cur)
                cur = {"params": ""}
                section = None
                cur["name"] = line[len("#test:"):].strip()
            elif line.startswith("#data"):
                section = "data"; cur[section] = ""
            elif line.startswith("#params"):
                section = "params"
            elif line.startswith("#expected"):
                section = "expected"; cur[section] = ""
            elif line.startswith("#error"):
                section = "error"; cur["error"] = ""
            else:
                if section == "params":
                    cur["params"] += ("" if cur["params"] == "" else "\n") + line.strip()
                elif section in ("data", "expected", "error"):
                    text = line.replace(r"\t", "\t")
                    cur[section] += text + ("\n" if section != "error" else "")
    if cur:
        cases.append(cur)
    return cases


def parse_params(params_str: str) -> dict:
    out = {}
    if not params_str.strip():
        return out
    for ln in params_str.splitlines():
        if "=" not in ln:
            continue
        k, v = map(str.strip, ln.split("=", 1))
        if v == r"\t":
            out[k] = "\t"; continue
        low = v.lower()
        if low == "true":
            out[k] = True; continue
        if low == "false":
            out[k] = False; continue
        if v.startswith("[") or v.startswith("{"):
            try:
                out[k] = json.loads(v)
            except json.JSONDecodeError:
                out[k] = v
            continue
        if v.lstrip("-").isdigit():
            out[k] = int(v); continue
        out[k] = v
    return out


def params_to_public_api(params: dict) -> dict:
    out = {}
    for k, v in params.items():
        key = k[4:] if k.startswith("csv.") else k  

        if key == "quoting" and isinstance(v, str):
            name = v.replace("csv.", "").strip()
            if hasattr(_csv, name):
                v = getattr(_csv, name)

        out[key] = v
    return out


class TestCSVCleanerPublicAPI(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not os.path.isdir(DIR_TEST):
            raise FileNotFoundError(f"Test folder not found: {DIR_TEST}")
        cls.test_cases = []
        for fname in os.listdir(DIR_TEST):
            if not fname.endswith(".dat"):
                continue
            for c in load_test_cases(os.path.join(DIR_TEST, fname)):
                c["file"] = fname
                cls.test_cases.append(c)

    def test_csv_cleaner_via_public_api(self):
        for tc in self.test_cases:
            with self.subTest(test=tc["name"], file=tc["file"]):
                raw_csv  = tc.get("data", "")
                params   = parse_params(tc.get("params", ""))
                expected = tc.get("expected", "")
                error    = tc.get("error", "").strip()

                pub = params_to_public_api(params)
                delimiter = pub.pop("delimiter", ",")

                argv = {
                    "text": raw_csv,
                    "delimiter": delimiter,
                    **pub,
                }

                if error:
                    m = re.match(r"^(\w+)\((['\"].*['\"])\)$", error)
                    if m:
                        exc_name, exc_msg = m.group(1), m.group(2).strip("'\"")
                        exc_type = EXC_MAP.get(exc_name)
                        self.assertIsNotNone(exc_type, f"Unknown exception {exc_name}")
                        with self.assertRaises(exc_type) as cm:
                            tw.clean_csv(**argv)
                        self.assertEqual(str(cm.exception), exc_msg)
                    else:
                        exc_type = EXC_MAP.get(error)
                        self.assertIsNotNone(exc_type, f"Unknown exception {error}")
                        with self.assertRaises(exc_type):
                            tw.clean_csv(**argv)
                else:
                    try:
                        output = tw.clean_csv(**argv)
                    except Exception as exc:
                        self.fail(f"{tc['name']} in {tc['file']}: unexpected exception {exc!r}")

                    exp_lines = expected.rstrip("\n").splitlines()
                    out_lines = output.rstrip("\n").splitlines()
                    self.assertEqual(
                        exp_lines, out_lines,
                        msg=(
                            f"Test '{tc['name']}' in {tc['file']}' fail:\n"
                            f"  Input:\n{raw_csv}\n"
                            f"  Params: {json.dumps(argv, ensure_ascii=False)}\n"
                            f"  Expected:\n{expected}\n"
                            f"  Output:\n{output}\n"
                        )
                    )


if __name__ == "__main__":
    unittest.main()
