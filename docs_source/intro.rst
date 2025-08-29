==========
TextWizard
==========

.. figure:: _static/img/TextWizardBanner.png
   :alt: TextWizard Banner
   :width: 800
   :height: 300
   :align: center

.. image:: https://img.shields.io/pypi/v/textwizard.svg
   :target: https://pypi.org/project/textwizard/
   :alt: PyPI - Version

.. image:: https://img.shields.io/pypi/dm/textwizard.svg?label=PyPI%20downloads
   :target: https://pypistats.org/packages/textwizard
   :alt: PyPI - Downloads/month

.. image:: https://img.shields.io/pypi/l/textwizard.svg
   :target: https://github.com/textwizard-dev/textwizard/blob/main/LICENSE
   :alt: License


**TextWizard** is a Python library to **extract**, **clean**, and **analyze** text from PDFs, DOCX, images, CSV, HTML/XML, and more. It includes local OCR (Tesseract), cloud OCR with Azure Document Intelligence, multi-backend NER, language detection, lexical statistics, and HTML utilities.


Installation
============

Requires Python 3.9+.

.. code-block:: bash

   pip install textwizard

Optional extras:

.. code-block:: bash

   # Azure OCR
   pip install "textwizard[azure]"

   # NER engines
   pip install "textwizard[ner]"

   # Everything
   pip install "textwizard[all]"

.. note::
   For OCR, install `Tesseract <https://github.com/tesseract-ocr/tesseract>`_.  
   For spaCy models, e.g. ``python -m spacy download en_core_web_sm``.

Quick start
===========

.. code-block:: python

   import textwizard as tw

   text = tw.extract_text("example.pdf")
   print(text)


API overview
============

.. list-table::
   :header-rows: 1
   :widths: 32 68

   * - Method
     - Purpose
   * - ``extract_text``
     - Local text extraction with optional Tesseract OCR
   * - ``extract_text_azure``
     - Cloud extraction via Azure (text, tables, key-value)
   * - ``clean_html``
     - High-level HTML cleaning with semantic flags
   * - ``clean_xml``
     - XML cleanup and normalization
   * - ``clean_csv``
     - CSV cleanup with configurable dialect
   * - ``extract_entities``
     - NER via spaCy / Stanza / spaCy-Stanza
   * - ``correctness_text``
     - Spell checking
   * - ``lang_detect``
     - Language detection
   * - ``analyze_text_statistics``
     - Lexical metrics (entropy, Zipf, Gini, …)
   * - ``text_similarity``
     - Similarity: ``cosine``, ``jaccard``, ``levenshtein``
   * - ``beautiful_html``
     - Pretty-print HTML
   * - ``html_to_markdown``
     - Convert HTML → Markdown

Text extraction
===============

Parameters
----------

- ``input_data``: ``str | bytes | Path``
- ``extension``: Required only if ``input_data`` is ``bytes``.
- ``pages``: Page/sheet selection.
  
  - Paged (PDF, DOCX, TIFF): ``1``, ``"1-3"``, ``[1, 3, "5-8"]``
  - Excel (XLSX/XLS): sheet index (``int``), name (``str``), or mixed list

- ``ocr``: Enable Tesseract OCR for images and scanned PDFs/DOCX.
- ``language_ocr``: OCR language, default ``"eng"``.

Examples
--------

Basic:

.. code-block:: python

   import textwizard as tw
   txt = tw.extract_text("docs/report.pdf")
   print(txt)


From bytes:

.. code-block:: python

   from pathlib import Path
   import textwizard as tw

   raw = Path("img.png").read_bytes()
   txt_img = tw.extract_text(raw, extension="png")
   print(txt_img)


.. code-block:: python

   import textwizard as tw

   sel = tw.extract_text("docs/big.pdf", pages=[1, 3, "5-7"])
   ocr_txt = tw.extract_text("scan.tiff", ocr=True, language_ocr="ita")
   print(sel); print(ocr_txt)


Supported Formats
-----------------

+---------+----------+
| Format  | OCR      |
+=========+==========+
| PDF     | Optional |
+---------+----------+
| DOC     | No       |
+---------+----------+
| DOCX    | Optional |
+---------+----------+
| XLSX    | No       |
+---------+----------+
| XLS     | No       |
+---------+----------+
| TXT     | No       |
+---------+----------+
| CSV     | No       |
+---------+----------+
| JSON    | No       |
+---------+----------+
| HTML    | No       |
+---------+----------+
| HTM     | No       |
+---------+----------+
| TIF     | Default  |
+---------+----------+
| TIFF    | Default  |
+---------+----------+
| JPG     | Default  |
+---------+----------+
| JPEG    | Default  |
+---------+----------+
| PNG     | Default  |
+---------+----------+
| GIF     | Default  |
+---------+----------+

Azure OCR
=========

Parameters
----------

- ``input_data``: ``str | bytes | Path``
- ``extension``: File extension when ``bytes`` are passed.
- ``language_ocr``: OCR language code (ISO-639).
- ``pages``: Page selection (``int``, ``"1,3,5-7"``, or list).
- ``azure_endpoint``: Azure Document Intelligence endpoint URL.
- ``azure_key``: Azure API key.
- ``azure_model_id``: ``"prebuilt-read"`` (text only) or ``"prebuilt-layout"`` (text + tables + key-value).
- ``hybrid``: If ``True``, for PDFs: native text for text pages and OCR for raster pages.

Example
-------

.. code-block:: python

   import textwizard as tw

   res = tw.extract_text_azure(
       "invoice.pdf",
       language_ocr="ita",
       azure_endpoint="https://<resource>.cognitiveservices.azure.com/",
       azure_key="<KEY>",
       azure_model_id="prebuilt-layout",
       hybrid=True,
   )

   print(res.text)
   print(res.pretty_tables)
   print(res.key_value)

**Output**

.. code-block:: text

   Fattura n. 2025-031 — Cliente: ACME S.p.A. — Data: 14/03/2025 — Totale: €1.234,56 …
   [{'rows': 3, 'cols': 3, 'preview': [['Item', 'Qty', 'Total'], ['Widget A', '2', '€200'], ['Widget B', '1', '€150']]}]
   {'InvoiceNumber': '2025-031', 'InvoiceDate': '2025-03-14', 'Customer': 'ACME S.p.A.', 'Total': '€1.234,56'}

HTML cleaning
=============

See :doc:`clean_html` for **A/B/C modes** (text-only, structural clean, text+preserve), wildcard tag/attribute handling, and examples.

**A) Text-only (no params)**

.. code-block:: python

   import textwizard as tw
   txt = tw.clean_html("<div><p>Hello</p><script>x()</script></div>")
   print(txt)

**Output**

.. code-block:: text

   Hello

**B) Structural clean (HTML out)**

.. code-block:: python

   import textwizard as tw

   html = """
   <html><head><title>x</title><script>evil()</script></head>
   <body>
     <article><h1>Title</h1><img src="a.png"><p id="k" onclick="x()">hello</p></article><!-- comment -->
   </body></html>
   """
   out = tw.clean_html(
       html,
       remove_script=True,
       remove_metadata_tags=True,
       remove_embedded_tags=True,
       remove_specific_attributes=["id", "on*"],
       remove_empty_tags=True,
       remove_comments=True,
       remove_doctype=True,
   )
   print(out)

**Output**

.. code-block:: html

   <html>
   <body>
     <article><h1>Title</h1><p>hello</p></article>
   </body></html>

**C) Text with preservation (False flags)**

.. code-block:: python

   import textwizard as tw

   html = "<html><body><article><h1>T</h1><p>Body</p><!-- c --></article></body></html>"
   txt = tw.clean_html(
       html,
       remove_sectioning_tags=False,   # keep <article> in output
       remove_heading_tags=False,      # keep <h1> in output
       remove_comments=False,          # keep comments
   )
   print(txt)

**Output**

.. code-block:: html

   <article><h1>T</h1>Body<!-- c --></article>

**Wildcard selectors**

.. code-block:: python

   import textwizard as tw
   html = '<div id="hero" data-track="x" onclick="h()"><img src="a.png"></div>'
   out = tw.clean_html(
       html,
       remove_specific_attributes=["id", "data-*", "on*"],
       remove_specific_tags=["im_"],
   )
   print(out)

**Output**

.. code-block:: html

   <html><head></head><body><div></div></body></html>

XML cleaning
============

.. code-block:: python

   import textwizard as tw

   xml = "<root xmlns='ns'><a/><b>ok</b><!-- x --></root>"
   fixed = tw.clean_xml(
       xml,
       remove_namespaces=True,
       remove_empty_tags=True,
       remove_comments=True,
       normalize_entities=True,
   )
   print(fixed)

**Output**

.. code-block:: xml

   <root><b>ok</b></root>

CSV cleaning
============

.. code-block:: python

   import textwizard as tw

   csv_data = """id,name,age,city,salary
   1,John,30,New York,50000
   2,Jane,25,,40000
   3,,35,Los Angeles,60000
   4,Mark,45,,70000
   5,Sarah,40,New York,
   1,John,30,New York,50000
   """
   out = tw.clean_csv(
       csv_data,
       delimiter=",",
       remove_columns=["id", "salary"],
       remove_values=["John", "50000"],
       trim_whitespace=True,
       remove_empty_columns=True,
       remove_empty_rows=True,
       remove_duplicates_rows=True,
   )
   print(out)

**Output**

.. code-block:: text

   name,age,city
   ,30,New York
   Jane,25,
   ,35,Los Angeles
   Mark,45,
   Sarah,40,New York

Named-Entity Recognition (NER)
==============================

.. code-block:: python

   import textwizard as tw

   sample = (
       "Alex Rivera traveled to Springfield to meet the research team at Northstar Analytics on 14 March 2025. "
       "The next day, he signed a pilot agreement with Horizon Bank and gave a talk at the University of Westland at 10:30 AM."
   )
   res = tw.extract_entities(sample)
   print([e.text for e in res.entities["PERSON"]])
   print([e.text for e in res.entities["GPE"]])
   print([e.text for e in res.entities["ORG"]])

**Output**

.. code-block:: text

   ['Alex Rivera']
   ['Springfield']
   ['Northstar Analytics', 'Horizon Bank', 'the University of Westland']

Spell checking
==============

.. code-block:: python

   import textwizard as tw

   check = tw.correctness_text("Thiss sentense has a typo.", language="en")
   print(check)

**Output**

.. code-block:: text

   {"errors_count": 2, "errors": ["thiss", "sentense"]}

Language detection
==================

Character n-gram detector with smart gating, priors, and linguistic hints.  
**Supports 161 ISO-639-1 languages.** Returns either a single top-1 code or a ranked list with probabilities.

.. code-block:: python

   import textwizard as tw
   print("LANGS:", tw.lang_detect("Ciao, come stai oggi?", return_top1=True))
   print("LANGS:", tw.lang_detect("The quick brown fox jumps over the lazy dog.", return_top1=True))
   print("LANGS:", tw.lang_detect("これは日本語のテスト文です。", return_top1=True))

**Output**

.. code-block:: text

   LANGS: it
   LANGS: en
   LANGS: ja

Text statistics
===============

.. code-block:: python

   import textwizard as tw
   stats = tw.analyze_text_statistics("a a a b b c d e f g")
   print(stats)

**Output**

.. code-block:: text

   {"entropy": 2.646, "zipf": {"slope": -0.605, "r2": 0.838}, "vocab_gini": 0.229, "type_token_ratio": 0.7, "hapax_ratio": 0.5, "simpson_index": 0.82, "yule_k": 800.0, "avg_word_length": 1.0}

Text similarity
===============

.. code-block:: python

   import textwizard as tw
   print(
       tw.text_similarity("kitten", "sitting", method="levenshtein"),
       tw.text_similarity("hello world", "hello brave world", method="jaccard"),
       tw.text_similarity("abc def", "abc xyz", method="cosine"),
   )

**Output**

.. code-block:: text

   0.5714285714285714 0.6666666666666666 0.33333333333333337

HTML tools
==========

Pretty-print HTML
-----------------

.. code-block:: python

   import textwizard as tw
   html = """
   <body>
     <button id='btn1' class="primary" disabled="disabled">
       Click   <b>me</b>
     </button>
     <img alt="Logo" src="/static/logo.png">
   </body>
   """
   print(tw.beautiful_html(
       html=html,
       indent=4,
       alphabetical_attributes=True,
       minimize_boolean_attributes=True,
       quote_attr_values="always",
       strip_whitespace=True,
       include_doctype=True,
       expand_mixed_content=True,
       expand_empty_elements=True,
   ))

**Output**

.. code-block:: html

   <!DOCTYPE html>
   <html>
       <head>
       </head>
       <body>
           <button class="primary" disabled id="btn1">
               Click
               <b>
                   me
               </b>
           </button>
           <img alt="Logo" src="/static/logo.png">
       </body>
   </html>

HTML → Markdown
---------------

.. code-block:: python

   import textwizard as tw
   print(tw.html_to_markdown("<h1>Hello</h1><p>World</p>"))

**Output**

.. code-block:: text

   # Hello

   World

License
=======

`AGPL-3.0-or-later <_static/LICENSE>`_.

Resources
=========

- `PyPI Package <https://pypi.org/project/textwizard/>`_
- `Documentation <https://textwizard.readthedocs.io/en/latest/>`_
- `GitHub Repository <https://github.com/textwizard-dev/TextWizard>`_

.. _contact_author:

Contact & Author
================

:Author: Mattia Rubino
:Email: `textwizard.dev@gmail.com <mailto:textwizard.dev@gmail.com>`_