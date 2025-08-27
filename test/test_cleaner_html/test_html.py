import os, unittest, json
from typing import List, Dict
import textwizard as tw
from pathlib import Path

DIR_TEST = Path(__file__).resolve().parent / "test" 


def load_test_cases(filepath: str) -> List[Dict[str, str]]:
    tcs, cur, section = [], {}, None
    with open(filepath, encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\n")
            if not line.strip(): continue
            if line.startswith("#test:"):
                if cur: tcs.append(cur)
                cur, section = {"params": ""}, None
                cur["name"] = line[len("#test:"):].strip()
            elif line.startswith("#data"):
                section = "data"; cur[section] = ""
            elif line.startswith("#params"):
                section = "params"; cur.setdefault("params", "")
            elif line.startswith("#expected"):
                section = "expected"; cur[section] = ""
            else:
                if section == "params":
                    cur["params"] += ("" if cur["params"]=="" else "\n") + line.strip()
                elif section in ("data","expected"):
                    cur[section] += line  
    if cur: tcs.append(cur)
    return tcs

def parse_params(s: str) -> dict:
    params = {}
    if not s.strip(): return params
    for ln in s.splitlines():
        if "=" not in ln: continue
        k, v = map(str.strip, ln.split("=", 1))
        low = v.lower()
        if low == "true":  v = True
        elif low == "false": v = False
        elif v.startswith("[") or v.startswith("{"):
            try: v = json.loads(v)
            except json.JSONDecodeError: pass
        params[k] = v
    return params

def normalize_html_params(p: dict) -> dict:
    out = {}
    for k, v in p.items():
        if k.startswith("html."):
            k = k.split(".", 1)[1]
        out[k] = v
    return out

class TestHTMLCleanerViaPublicAPI(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        if not os.path.isdir(DIR_TEST):
            raise FileNotFoundError(f"Test folder not found: {DIR_TEST}")
        cls.cases = []
        for fname in os.listdir(DIR_TEST):
            if fname.endswith(".dat"):
                path = os.path.join(DIR_TEST, fname)
                for c in load_test_cases(path):
                    c["file"] = fname
                    cls.cases.append(c)

    def test_cleaning_html_via_public_api(self):
        for tc in self.cases:
            with self.subTest(test=tc.get("name","Unnamed"), file=tc.get("file","unknown")):
                data      = tc.get("data","")
                expected  = tc.get("expected","")
                params    = normalize_html_params(parse_params(tc.get("params","")))

                try:
                    out = tw.clean_html(data, **params)
                except Exception as e:
                    self.fail(f"{tc.get('name')} in {tc.get('file')}: raised {e!r}")

                out_norm = out.replace('\u00A0',' ')
                exp_norm = expected.replace('\u00A0',' ')
                self.assertEqual(exp_norm.strip(), out_norm.strip(),
                    msg=(f"Test '{tc.get('name')}' in '{tc.get('file')}' fail:\n"
                         f"  Input:\n{data}\n"
                         f"  Params:\n{json.dumps(params, ensure_ascii=False)}\n"
                         f"  Expected:\n{expected}\n"
                         f"  Output:\n{out}\n"))

if __name__ == "__main__":
    unittest.main()
