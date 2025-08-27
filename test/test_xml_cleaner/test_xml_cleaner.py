import os
import sys
import unittest
import json
from typing import List, Dict
from pathlib import Path

import textwizard as tw 

DIR_TEST = Path(__file__).resolve().parent / "test" 

def load_test_cases(filepath: str) -> List[Dict[str, str]]:
    test_cases = []
    current = {}
    section = None
    with open(filepath, "r", encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\n")
            if not line.strip():
                continue
            if line.startswith("#test:"):
                if current:
                    test_cases.append(current)
                current = {"params": ""}
                current["name"] = line[len("#test:"):].strip()
                section = None
            elif line.startswith("#data"):
                section = "data"
                current[section] = ""
            elif line.startswith("#params"):
                section = "params"
                current.setdefault("params", "")
            elif line.startswith("#expected"):
                section = "expected"
                current[section] = ""
            else:
                if section:
                    if section == "params":
                        current["params"] += ("" if current["params"] == "" else "\n") + line.strip()
                    else:
                        current[section] += line.strip()
    if current:
        test_cases.append(current)
    return test_cases

def parse_params(params_str: str) -> dict:
    params = {}
    if not params_str.strip():
        return params
    for line in params_str.splitlines():
        if "=" not in line:
            continue
        key, value = line.split("=", 1)
        key = key.strip()
        value = value.strip()
        low = value.lower()
        if low == "true":
            params[key] = True
        elif low == "false":
            params[key] = False
        elif value.startswith("[") or value.startswith("{"):
            try:
                params[key] = json.loads(value)
            except json.JSONDecodeError:
                params[key] = value
        else:
            params[key] = value
    return params

class TestXMLCleaner(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        if not os.path.isdir(DIR_TEST):
            raise FileNotFoundError(f"Test folder not found: {DIR_TEST}")
        cls.test_cases = []
        for fname in os.listdir(DIR_TEST):
            if not fname.endswith(".dat"):
                continue
            path = os.path.join(DIR_TEST, fname)
            try:
                cases = load_test_cases(path)
                for c in cases:
                    c["file"] = fname
                cls.test_cases.extend(cases)
            except Exception as e:
                print(f"Error {fname}: {e}", file=sys.stderr)

    def test_cleaning_xml(self):
        for tc in self.test_cases:
            with self.subTest(test=tc["name"], file=tc["file"]):
                data = tc.get("data", "")
                params = parse_params(tc.get("params", ""))
                expected = tc.get("expected", "")

                try:
                    output = tw.clean_xml(data, **params)  # ✅ API pubblica
                except Exception as e:
                    self.fail(f"{tc['name']} in {tc['file']}: exception raised  {e!r}")

                out_norm = output.replace("\u00A0", " ").strip()
                exp_norm = expected.replace("\u00A0", " ").strip()

                self.assertEqual(
                    exp_norm, out_norm,
                    msg=(
                        f"Test '{tc['name']}' in {tc['file']}' Fail:\n"
                        f"  Input:    {data}\n"
                        f"  Params:   {params}\n"
                        f"  Expected: {expected}\n"
                        f"  Output:   {output}\n"
                    )
                )

if __name__ == "__main__":
    unittest.main()
