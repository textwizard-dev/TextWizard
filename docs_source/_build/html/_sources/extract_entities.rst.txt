==============================
Named-Entity Recognition (NER)
==============================

Extract entities such as persons, organizations, locations, dates, and more from raw text.
Backends: **spaCy**, **Stanza**, and **spaCy-Stanza**. Returns a structured
:class:`EntitiesResult` object with convenient accessors.

.. note::
   Install NER extras first:

   .. code-block:: bash

      pip install "textwizard[ner]"
      # Example spaCy model:
      python -m spacy download en_core_web_sm

Overview
========

- **Engines**
  - ``"spacy"`` – fastest startup and inference; uses spaCy pipelines.
  - ``"stanza"`` – often stronger accuracy for some languages; slower init.
  - ``"spacy_stanza"`` – spaCy tokenizer + Stanza NER.
- **Device selection**
  - ``device="auto"`` uses GPU if available, else CPU.
  - ``"gpu"`` requires CUDA; raises if unavailable.
  - ``"cpu"`` forces CPU.
- **Models**
  - spaCy: pass a model name (e.g., ``en_core_web_sm``) or an absolute path.
  - Stanza: pass ISO language code (e.g., ``"en"``, ``"it"``).
- **Auto-download**
  - Missing models are downloaded automatically.

Parameters
==========

.. list-table::
   :header-rows: 1
   :widths: 26 74

   * - **Parameter**
     - **Description**
   * - ``text``
     - ``str``. Non-empty Unicode string to analyze.
   * - ``engine``
     - ``'spacy' | 'stanza' | 'spacy_stanza'``. Default ``"spacy"``.
   * - ``model``
     - spaCy model name or absolute path. Used only when ``engine="spacy"``. Default ``"en_core_web_sm"``.
   * - ``language``
     - ISO code for Stanza / spaCy-Stanza (e.g., ``"en"``, ``"it"``). Default ``"en"``.
   * - ``device``
     - ``"auto" | "cpu" | "gpu"``. Default ``"auto"``.

Return value
============

``EntitiesResult`` with:

- ``entities``: ``Dict[str, List[Entity]]`` grouped by label. Example keys:
  ``"PERSON"``, ``"ORG"``, ``"GPE"``, ``"DATE"``, … (depends on the model).
- ``full_analysis``: ``Dict[int, TokenAnalysis]`` per token (lemma, POS, dep, offsets, ent type).
- Helper methods:
  - ``labels`` → ``List[str]``
  - ``counts`` → ``Dict[str, int]``
  - ``get(label)`` → ``List[Entity]``
  - ``to_dicts()`` → ``List[dict]``
  - ``most_common(n=5)`` → ``List[Entity]``


Examples
========

Basic usage (spaCy, English)
----------------------------

.. code-block:: python

   import textwizard as tw

   sample = (
       "Alex Rivera traveled to Springfield to meet the team at Northstar Analytics "
       "on 14 March 2025. The next day he met Horizon Bank."
   )
   res = tw.extract_entities(sample)

   # Access groups
   persons = [e.text for e in res.entities.get("PERSON", [])]
   orgs    = [e.text for e in res.entities.get("ORG", [])]
   gpe     = [e.text for e in res.entities.get("GPE", [])]

   print(res.labels)     # e.g. ['PERSON', 'GPE', 'ORG', 'DATE']
   print(res.counts)     # e.g. {'PERSON': 1, 'GPE': 1, 'ORG': 2, 'DATE': 1}
   print(persons, orgs, gpe)


**Output**  

   .. code-block:: text

    ['PERSON', 'GPE', 'ORG', 'DATE']
    {'PERSON': 1, 'GPE': 1, 'ORG': 2, 'DATE': 2}
    ['Alex Rivera'] ['Northstar Analytics', 'Horizon Bank'] ['Springfield']


Switch engine / model
---------------------

.. code-block:: python

   import textwizard as tw

   # Stanza (Italian), CPU
   ita = tw.extract_entities(
       "Mario Rossi è nato a Milano nel 1980.",
       engine="stanza", language="it", device="cpu"
   )

   # spaCy with a larger English model
   res_lg = tw.extract_entities(
       "Mario Rossi visited Paris.",
       engine="spacy", model="en_core_web_trf", device="gpu"   # transformer on GPU if available
   )

   # spaCy-Stanza hybrid on GPU (English)
   hybrid = tw.extract_entities(
       "OpenAI is based in San Francisco.",
       engine="spacy_stanza", language="en", device="cpu"
   )

Use absolute path to a spaCy model
----------------------------------

.. code-block:: python

   import textwizard as tw
   from pathlib import Path

   custom_model = Path("/models/en_core_web_sm")
   res = tw.extract_entities("Custom pipeline run.", engine="spacy", model=str(custom_model))

Consume EntitiesResult
----------------------

.. code-block:: python

  
 import textwizard as tw

   text = "Tim Cook met Satya Nadella in Seattle on 2024-05-18."
   res = tw.extract_entities(text)

   # Flatten to list[dict] for JSON export
   payload = res.to_dicts()
   # Most common surface forms
   top = [e.text for e in res.most_common(3)]
   # Iterate labels
   for label, ents in res:
       print(label, [e.text for e in ents])
       
       

**Output**  

   .. code-block:: text

    PERSON ['Tim Cook', 'Satya Nadella']
    GPE ['Seattle']
    DATE ['2024-05-18']


Labels and coverage
===================

Entity labels depend on the chosen model. Common labels include:
``PERSON``, ``ORG``, ``GPE``, ``LOC``, ``DATE``, ``TIME``, ``NORP``, ``LAW``, ``MONEY``,
``PERCENT``, ``EVENT``, ``WORK_OF_ART``, ``FAC``, ``PRODUCT``. Availability varies per language/model.

Errors
======

- Empty or non-string ``text`` → validation error.
- Unsupported ``engine`` or ``device`` → ``ValueError``.
- Missing libraries/models → ``RuntimeError`` with installation hint.

See also
========

- :doc:`lang_detect` — Language detection for routing to the right model
- :doc:`intro` — Overview and quick start
