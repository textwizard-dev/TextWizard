import zstandard as zstd
import marisa_trie
import unicodedata as u
import regex as _re
from pathlib import Path
from typing import Iterator


#$ cd /mnt/d/WORK/TextWizard/textwizard/wizard_analyze_text/wizard_correctness/input_dictionaries
#$ hunspell-reader words kn_IN.dic --sort --unique --lower_case -o kn.txt
SRC_DIR  = Path(r"D:\WORK\TextWizard\corpus\dictionaries\xx")
DEST_DIR = Path(r"D:\WORK\TextWizard\corpus\dictionaries")
DEST_DIR.mkdir(parents=True, exist_ok=True)

def compress(raw: bytes, level: int = 19) -> bytes:
    return zstd.ZstdCompressor(level=level).compress(raw)


def normalize_word(w: str) -> str:
    w = w.rstrip("\n")
    w = u.normalize("NFKC", w)
    w = _re.sub(r'(?:^/[^|]+\||/[^|]+\|)$', '', w)
    w = w.replace("\u200d", "\u200c")
    w = _re.sub(r"\u200c+", "\u200c", w)
    w = w.replace("’", "'")
    w = _re.sub(r"[\u200b\u2060]", "", w)
    w = w.replace("\u200c", "").replace("\u200d", "")
    return w.casefold()


def uniquify(words: Iterator[str]) -> list[str]:
    seen: set[str] = set()
    out: list[str] = []
    for w in words:
        if w not in seen:
            seen.add(w)
            out.append(w)
    return out

def build_one(txt: Path) -> None:
    lang = txt.stem
    raw_lines = txt.read_text("utf8").splitlines()
    normalized = (normalize_word(line) for line in raw_lines)
    words = uniquify(normalized)

    trie = marisa_trie.Trie(words)
    raw = trie.tobytes()
    blob = compress(raw)
    out_path = DEST_DIR / f"{lang}.marisa.zst"
    out_path.write_bytes(blob)

    print(f"✓ {lang:8} {len(words):,} parole → {len(raw)/1e6:.1f}MB → zstd={len(blob)/1e6:.1f}MB")

if __name__ == "__main__":
    for txt in sorted(SRC_DIR.glob("*.txt")):
        build_one(txt)
