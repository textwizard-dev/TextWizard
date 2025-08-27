from pathlib import Path
import difflib
from textwizard.utils.tw_html_parser.dom import  Element, Comment, NodeType

def parse_html5lib_dat(path_to_dat_file):
    """
    Legge un file .dat in stile html5lib-tests e produce una lista di test case:
    [
      {
        "input_html": "...",
        "document_dump": ["| <html>", "|   <head>", ...],
        "container": "div"  # opzionale, se il test è un frammento
      },
      ...
    ]
    Si concentra su #data, #document e, se presente, #document-fragment,
    ignorando la sezione degli errori.
    """
    with open(path_to_dat_file, "r", encoding="utf-8") as f:
        lines = f.read().splitlines()

    tests = []
    idx = 0
    n = len(lines)

    while idx < n:
        while idx < n and not lines[idx].strip():
            idx += 1
        if idx >= n:
            break

        if not lines[idx].startswith("#data"):
            idx += 1
            continue
        idx += 1  

        input_lines = []
        while idx < n:
            line = lines[idx]
            if (line.startswith("#errors") or
                line.startswith("#document") or
                line.startswith("#document-fragment")):
                break
            input_lines.append(line)
            idx += 1
        input_html = "\n".join(input_lines)

        if idx < n and lines[idx].startswith("#errors"):
            idx += 1  
            while idx < n and not (lines[idx].startswith("#document-fragment") or lines[idx].startswith("#document")):
                idx += 1

        container = None
        if idx < n and lines[idx].startswith("#document-fragment"):
            idx += 1  
            if idx < n:
                container = lines[idx].strip()
                idx += 1

        while idx < n and (lines[idx].startswith("#errors") or lines[idx].startswith("#new-errors")):
            idx += 1

        if idx < n and lines[idx].startswith("#document"):
            idx += 1  
        else:
            break

        doc_lines = []
        while idx < n:
            if not lines[idx].strip():
                idx += 1
                break
            if lines[idx].startswith("#data"):
                break
            doc_lines.append(lines[idx])
            idx += 1

        tests.append({
            "input_html": input_html,
            "document_dump": doc_lines,
            "container": container 
        })

    return tests


def dom_to_html5lib_tree_dump(node, depth=0, lines=None):
    if lines is None:
        lines = []

    prefix = "| " + ("  " * depth)

    if node.node_type == NodeType.DOCUMENT_NODE:
        for child in node.child_nodes:
            dom_to_html5lib_tree_dump(child, depth, lines)

    elif node.node_type == NodeType.DOCUMENT_TYPE_NODE:
        docTypeNode = node  # type: DocumentType
        s = f"<!DOCTYPE {docTypeNode.name}"
        if docTypeNode.public_id.strip() or docTypeNode.system_id.strip():
            s += f" \"{docTypeNode.public_id.strip()}\" \"{docTypeNode.system_id.strip()}\""
        s += ">"
        lines.append(prefix + s)

    elif node.node_type == NodeType.ELEMENT_NODE:
        elem = node  # type: Element
        ns = elem.namespace
        local_name = elem.tag_name

        if ns == "http://www.w3.org/2000/svg":
            local_name = f"svg {local_name}"
        elif ns == "http://www.w3.org/1998/Math/MathML":
            local_name = f"math {local_name}"

        lines.append(prefix + f"<{local_name}>")

        attrs = list(elem.get_attributes().items())
        attrs.sort(key=lambda x: x[0])  # sort by name
        for (attr_name, attr_value) in attrs:
            lines.append(prefix + "  " + f'{attr_name}="{attr_value}"')

        if elem.tag_name.lower() == "template":
            content_prefix = "| " + ("  " * (depth + 1))
            lines.append(content_prefix + "content")
            for child in elem.child_nodes:
                dom_to_html5lib_tree_dump(child, depth + 2, lines)
        else:
            for child in elem.child_nodes:
                dom_to_html5lib_tree_dump(child, depth + 1, lines)


    elif node.node_type == NodeType.TEXT_NODE:
        text_data_lines = node.data.splitlines()
        if not text_data_lines:
            lines.append(prefix + "\"\"")
        else:
            lines.append(prefix + f"\"{text_data_lines[0]}")

            for mid_line in text_data_lines[1:-1]:
                lines.append(mid_line)

            if len(text_data_lines) > 1:
                lines.append(text_data_lines[-1] + "\"")
            else:
                lines[-1] += "\""

    elif node.node_type == NodeType.COMMENT_NODE:
        comment = node  # type: Comment
        comment_data_lines = comment.data.splitlines()

        if comment_data_lines:
            lines.append(prefix + f"<!-- {comment_data_lines[0]}")
            for line in comment_data_lines[1:]:
                lines.append(line)
            lines[-1] = lines[-1] + " -->"
        else:
            lines.append(prefix + "<!--  -->")
    return lines



def highlight_differences(expected_dump, got_lines):
    diff_lines = list(difflib.unified_diff(
        expected_dump,
        got_lines,
        fromfile="Atteso",
        tofile="Ottenuto",
        lineterm=""
    ))
    for line in diff_lines:
        if line.startswith('-'):
            print("\033[91m" + line + "\033[0m")  # Rosso
        elif line.startswith('+'):
            print("\033[92m" + line + "\033[0m")  # Verde
        else:
            print(line)

def _run_single_dat(parser_class, dat_file: Path):

    print(f"\n===> Run tests on files: {dat_file.name} <===")
    tests = parse_html5lib_dat(dat_file)
    if not tests:
        print(f" No tests found in {dat_file}")
        return 0, 0

    print(f"  Found {len(tests)} test.")

    total = 0
    failed = 0

    for i, testdata in enumerate(tests):
        total += 1
        input_html = testdata["input_html"]
        expected_dump = testdata["document_dump"]
        container = testdata.get("container")

        parser = parser_class(input_html)
        if container:
            doc_fragment = parser.parse_fragment(container=container)
            got_lines = dom_to_html5lib_tree_dump(doc_fragment)
            for child in parser.context_element.child_nodes:
                dom_to_html5lib_tree_dump(child, 0, got_lines)
        else:
            doc = parser.parse()
            got_lines = dom_to_html5lib_tree_dump(doc)

        if got_lines != expected_dump:
            failed += 1
            print(f"\nTest {i} FAILED:")
            print("Input:")
            print(repr(input_html))
            print("\nAtteso:")
            print("\n".join(expected_dump))
            print("\nOttenuto:")
            print("\n".join(got_lines))
            print("\nDifferenze:")
            highlight_differences(expected_dump, got_lines)
            print("-----\n")

    print(f"  Risultati: {total} test, {failed} falliti.")
    return total, failed


def run_html5lib_tests_on_parser(parser_class, path):
    p = Path(path)
    if p.is_dir():
        dat_files = sorted(p.glob("*.dat"))
        if not dat_files:
            print(f"Nessun file .dat trovato nella cartella: {path}")
            return

        total_overall = 0
        failed_overall = 0
        file_results = [] 

        for dat_file in dat_files:
            total, failed = _run_single_dat(parser_class, dat_file)
            total_overall += total
            failed_overall += failed
            file_results.append((dat_file.name, total - failed, failed))

        # Report per file
        print("\n=== Report per file ===")
        for file_name, ok, failed in file_results:
            print(f"File: {file_name}")
            print(f"  Test OK: {ok}")
            print(f"  Test falliti: {failed}\n")

        # Report totale
        print("=== Report Totale ===")
        print(f"  Totale test eseguiti: {total_overall}")
        print(f"  Totale test falliti: {failed_overall}")

    else:
        if not p.exists():
            print(f"Il file {p} non esiste.")
            return
        if p.suffix.lower() != ".dat":
            print(f"Il file {p} non è un .dat. Procedo comunque...")
        _run_single_dat(parser_class, p)



if __name__ == "__main__":
    from textwizard.utils.tw_html_parser.parser import TWHTMLParser

    path="test_tree_construction"

    run_html5lib_tests_on_parser(TWHTMLParser, path)
