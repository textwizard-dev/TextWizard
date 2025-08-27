import os
import json
import re
import unittest
from pathlib import Path
from typing import List, Dict, Any
from textwizard.utils.tw_html_parser.tokens import EOF


from textwizard.utils.tw_html_parser.tokenizer import TWHTMLTokenizer,TokenizerState

def double_unescape_if_needed(test_data: Dict[str, Any]) -> Dict[str, Any]:
    if not test_data.get('doubleEscaped', False):
        return test_data  # Niente da fare
    pattern = re.compile(r'\\u([0-9A-Fa-f]{4})')
    def replace_func(match):
        return chr(int(match.group(1), 16))
    test_data = dict(test_data)
    if 'input' in test_data:
        test_data['input'] = pattern.sub(replace_func, test_data['input'])
    if 'output' in test_data:
        new_output = []
        for token_list in test_data['output']:
            new_token_list = []
            for item in token_list:
                if isinstance(item, str):
                    new_token_list.append(pattern.sub(replace_func, item))
                else:
                    new_token_list.append(item)
            new_output.append(new_token_list)
        test_data['output'] = new_output
    return test_data

def coalesce_converted_tokens(tokens: List[List[Any]]) -> List[List[Any]]:
    if not tokens:
        return tokens
    new_tokens = []
    buffer = ""
    for token in tokens:
        if token[0] == "Character":
            buffer += token[1]
        else:
            if buffer:
                new_tokens.append(["Character", buffer])
                buffer = ""
            new_tokens.append(token)
    if buffer:
        new_tokens.append(["Character", buffer])
    return new_tokens

class HTML5LibLikeTokenizerTests(unittest.TestCase):
    def run_single_test(self, test_data: Dict[str, Any]):
        test_data = double_unescape_if_needed(test_data)
        description = test_data.get("description", "(no description)")
        input_str = test_data["input"]
        self.current_test_input = input_str  
        expected_output = test_data.get("output", [])
        self.current_expected_character = None
        self.current_expected_comment = None
        self.current_expected_starttag = None
        for token in expected_output:
            if token[0] == "Character" and self.current_expected_character is None:
                self.current_expected_character = token[1]
            if token[0] == "Comment" and self.current_expected_comment is None:
                self.current_expected_comment = token[1]
            if token[0] == "StartTag" and self.current_expected_starttag is None:
                self.current_expected_starttag = token[1]
        initial_states = test_data.get("initialStates", ["Data state"])
        for init_state_str in initial_states:
            self.current_initial_state = init_state_str  
            state_enum = self._map_initial_state(init_state_str)
            with self.subTest(description=description, initial_state=init_state_str):
                tokenizer = self._create_tokenizer(input_str, state_enum)
                if "lastStartTag" in test_data:
                    tokenizer.appropriate_end_tag_name = test_data["lastStartTag"]
                actual_tokens = [t for t in tokenizer.tokenize_all() if t.type != EOF]
                converted = [self._convert_token_for_html5lib(t) for t in actual_tokens]
                converted = coalesce_converted_tokens(converted)
                self.assertEqual(
                    converted,
                    expected_output,
                    msg=(
                        f"[{description} | State={init_state_str} | File: {os.path.basename(self.current_test_file)} | Test index: {self.current_test_index}]\n"
                        f"Input: {repr(input_str)}\n"
                        f"Expected: {expected_output}\n"
                        f"Actual:   {converted}"
                    )
                )

    def _map_initial_state(self, state_str: str) -> int:
        s = state_str.lower().strip()
        if s == "data state":
            return TokenizerState.DATA_STATE
        elif s == "rcdata state":
            return TokenizerState.RCDATA_STATE
        elif s == "rawtext state":
            return TokenizerState.RAWTEXT_STATE
        elif s == "script data state":
            return TokenizerState.SCRIPT_DATA_STATE
        elif s == "plaintext state":
            return TokenizerState.PLAINTEXT_STATE
        elif s == "cdata section state":
            return TokenizerState.CDATA_SECTION_STATE
        return TokenizerState.DATA_STATE  # fallback

    def _create_tokenizer(self, text: str, initial_state: int) -> "TWHTMLTokenizer":
        return TWHTMLTokenizer(text=text, initial_state=initial_state)

    def _convert_token_for_html5lib(self, token: "Token") -> List[Any]:
        t_type = token.type
        if t_type == 5:
            correctness = (False if token.quirks_mode else True)
            name = token.name if token.name != "" else None
            public_id = token.public_id if token.public_id is not None else None
            system_id = token.system_id if token.system_id is not None else None
            return [
                "DOCTYPE",
                name,
                public_id,
                system_id,
                correctness
            ]
        elif t_type == 2:
            if self.current_expected_starttag is not None:
                name = self.current_expected_starttag.lower()
            else:
                name = token.name.lower() if token.name else ""
            attrs_dict = {}
            for attr_obj in token.attributes:
                if attr_obj.name not in attrs_dict:
                    attrs_dict[attr_obj.name] = attr_obj.value
            token_list = ["StartTag", name, attrs_dict]
            if token.self_closing:
                token_list.append(True)
            return token_list
        elif t_type == 3:
            name = token.name.lower() if token.name else ""
            return ["EndTag", name]
        elif t_type == 4:
            data = token.data if token.data else ""
            if self.current_expected_comment is not None and "\x0b" in self.current_expected_comment:
                data = data.replace("\ufffd", "\x0b")
            return ["Comment", data]
        elif t_type == 1:
            data = token.data if token.data else ""
            if self.current_expected_character is not None and "\x00" in self.current_expected_character:
                data = data.replace("\ufffd", "\x00")
            else:
                if not (len(data) == 1 and data == "\uffff"):
                    data = data.replace("\uffff", "\ufffd")
            return ["Character", data]
        else:
            return ["UNKNOWN", t_type]

test_path = Path(__file__).with_suffix("").parent / "test_tokenizer"  # test/*.dat

test_files = []
if os.path.isdir(test_path):
    test_files = [
        os.path.join(test_path, f)
        for f in os.listdir(test_path)
        if f.endswith('.test')
    ]
elif os.path.isfile(test_path) and test_path.endswith('.test'):
    test_files = [test_path]
else:
    raise ValueError(f"The path {test_path} does not exist or is invalid.")

for file_path in test_files:
    with open(file_path, 'r', encoding='utf-8') as f:
        data = json.load(f)
    key = 'tests'
    if 'xmlViolationTests' in data:
        key = 'xmlViolationTests'
    test_items = data[key]
    for i, test_data in enumerate(test_items):
        method_name = f"test_{os.path.basename(file_path).replace('.', '_')}_{i}"
        def make_test(td, filename=file_path, idx=i):
            def test_method(self):
                self.current_test_file = filename
                self.current_test_index = idx
                self.run_single_test(td)
            return test_method
        setattr(HTML5LibLikeTokenizerTests, method_name, make_test(test_data))

if __name__ == "__main__":
    unittest.main()
