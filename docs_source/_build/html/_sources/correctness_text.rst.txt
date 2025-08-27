===============
Spell Checking
===============

Dictionary-based spell checking with Unicode-aware tokenization and light text normalization.  
**Supports 62 languages** via compressed **Marisa-Trie** dictionaries. Returns a compact report with the total number of misspellings and the list of offending tokens.

Behavior
========

- Normalizes common Unicode quirks (e.g., smart quotes, zero-width joiners).
- Ignores numbers and leading/trailing punctuation when deciding correctness.
- Treats ``'``/``’`` variants as equivalent.
- Looks up each token against the selected language dictionary.

Parameters
==========

.. list-table::
   :header-rows: 1
   :widths: 18 82

   * - **Parameter**
     - **Description**
   * - ``text``
     - (*str*) Raw input text.
   * - ``language``
     - (*str*, default ``"en"``) ISO-639 code.
   * - ``dict_dir``
     - (*str | Path | None*) Directory containing one or more ``*.marisa.zst`` (or decompressed ``*.marisa``) dictionaries. If ``None``: uses a per-user cache directory and **auto-downloads** the required dictionary if missing.
   * - ``use_mmap``
     - (*bool*, default ``False``) **True** → memory-map the on-disk ``.marisa`` file (lowest RAM; fastest startup; OS page cache warms on first queries). **False** → load the entire trie into RAM (higher RAM; highest steady-state throughput).

Return value
============

``dict`` with:

- ``errors_count`` – ``int`` total misspellings  
- ``errors`` – ``list[str]`` of misspelled tokens (normalized/case-folded)

Examples
========

Basic
-----

.. code-block:: python

   import textwizard as tw

   res = tw.correctness_text("Thiss sentense has a typo.", language="en")
   print(res)

**Output**

.. code-block:: json

   {"errors_count": 2, "errors": ["thiss", "sentense"]}


.. code-block:: python

    import textwizard as tw
    print(tw.correctness_text("Queso è un tes , di preva.", language="it"))
    
**Output**

.. code-block:: json

   {"errors_count": 3, "errors": ["queso", "tes", "preva."]}



Custom dictionary directory & mmap
----------------------------------

.. code-block:: python

   import textwizard as tw
   from pathlib import Path

   res = tw.correctness_text(
       "Coloar centre thetre",        
       language="en",
       dict_dir=Path("~/textwizard_dicts"),
       use_mmap=True,
   )
   print(res)

**Output**

.. code-block:: json

   {"errors_count": 2, "errors": ["coloar", "thetre"]}

Operational notes
=================

- **Cache location** (when ``dict_dir=None``): a per-user data directory is used. You can override it via the first existing of:
  ``TEXTWIZARD_DATA_DIR`` / ``TEXTWIZARD_DICT_DIR`` / ``TEXTWIZARD_HOME`` (environment variables).
- **Auto-download**: when a dictionary is missing and ``dict_dir`` is not set, TextWizard downloads the compressed ``*.marisa.zst`` once and reuses it subsequently.
- **File formats**:
  - ``*.marisa.zst`` files are decompressed on the fly (into memory) or to an adjacent ``*.marisa`` file when ``use_mmap=True``.
  - If you already have an uncompressed ``*.marisa`` file in ``dict_dir``, it is used directly.
- **Performance**:
  - ``use_mmap=True`` → minimal RAM, fastest startup; excellent for large dictionaries or constrained environments.
  - ``use_mmap=False`` → maximal throughput once loaded; best when RAM is plentiful.
- **Chinese** requires ``jieba``; all other languages work out-of-the-box.
- Output tokens in ``errors`` are **normalized/case-folded**; they may differ in casing from the original text.

Available dictionaries
======================

.. list-table::
   :header-rows: 1
   :widths: 18 82

   * - **Code**
     - **Language**
   * - ``af``
     - Afrikaans
   * - ``an``
     - Aragonese
   * - ``ar``
     - Arabic
   * - ``as``
     - Assamese
   * - ``be``
     - Belarusian
   * - ``bg``
     - Bulgarian
   * - ``bn``
     - Bengali
   * - ``bo``
     - Tibetan
   * - ``br``
     - Breton
   * - ``bs``
     - Bosnian
   * - ``ca``
     - Catalan
   * - ``cs``
     - Czech
   * - ``da``
     - Danish
   * - ``de``
     - German
   * - ``el``
     - Greek
   * - ``en``
     - English
   * - ``eo``
     - Esperanto
   * - ``es``
     - Spanish
   * - ``fa``
     - Persian
   * - ``fr``
     - French
   * - ``gd``
     - Scottish Gaelic
   * - ``gn``
     - Guarani
   * - ``gu``
     - Gujarati (``gu_IN``)
   * - ``he``
     - Hebrew
   * - ``hi``
     - Hindi
   * - ``hr``
     - Croatian
   * - ``id``
     - Indonesian
   * - ``is``
     - Icelandic
   * - ``it``
     - Italian
   * - ``ja``
     - Japanese
   * - ``kmr``
     - Kurmanji Kurdish
   * - ``kn``
     - Kannada
   * - ``ku``
     - Central Kurdish
   * - ``lo``
     - Lao
   * - ``lt``
     - Lithuanian
   * - ``lv``
     - Latvian
   * - ``mr``
     - Marathi
   * - ``nb``
     - Norwegian Bokmål
   * - ``ne``
     - Nepali
   * - ``nl``
     - Dutch
   * - ``nn``
     - Norwegian Nynorsk
   * - ``oc``
     - Occitan
   * - ``or``
     - Odia
   * - ``pa``
     - Punjabi
   * - ``pl``
     - Polish
   * - ``pt``
     - Portuguese (EU)
   * - ``ro``
     - Romanian
   * - ``ru``
     - Russian
   * - ``sa``
     - Sanskrit
   * - ``si``
     - Sinhala
   * - ``sk``
     - Slovak
   * - ``sl``
     - Slovenian
   * - ``sq``
     - Albanian
   * - ``sr``
     - Serbian
   * - ``sv``
     - Swedish
   * - ``sw``
     - Swahili
   * - ``ta``
     - Tamil
   * - ``te``
     - Telugu
   * - ``th``
     - Thai
   * - ``tr``
     - Turkish
   * - ``uk``
     - Ukrainian
   * - ``vi``
     - Vietnamese

See also
========

- :doc:`intro` — Overview and quick start
- :doc:`lang_detect` — Language identification 
