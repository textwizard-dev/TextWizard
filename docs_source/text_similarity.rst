================
Text similarity
================

Compute a similarity score between two strings using one of three measures **Cosine ,Jaccard, Levenshtein**.  
Returns a single **float in [0.0, 1.0]** (``1.0`` ≡ identical).

Parameters
==========

- ``a`` (``str``): First text.
- ``b`` (``str``): Second text.
- ``method`` (``"cosine" | "jaccard" | "levenshtein"``; default ``"cosine"``)

Returns
=======

- ``float`` – similarity score in the range **0.0 – 1.0**.

Methods
=======

- **cosine**  
  Cosine similarity on **unigram + bigram** TF vectors built from lowercase word tokens.  
  If either vector is all zeros (no tokens), the score is ``0.0``.

- **jaccard**  
  Jaccard index on **sets** of lowercase word tokens:  
  ``J(A, B) = |A ∩ B| / |A ∪ B|`` (``0`` if both sets are empty).

- **levenshtein**  
  Normalised edit-distance similarity:  
  ``sim = 1 − dist(a, b) / max(len(a), len(b))``  
  Exact match → ``1.0``; completely different strings → closer to ``0.0``.  
  Uses a memory-efficient dynamic programming routine.

Examples
========

Basic usage
-----------

.. code-block:: python

   import textwizard as tw

   s1 = tw.text_similarity("kitten", "sitting", method="levenshtein")
   s2 = tw.text_similarity("hello world", "hello brave world", method="jaccard")
   s3 = tw.text_similarity("abc def", "abc xyz", method="cosine")
   print(s1, s2, s3)

**Output (placeholder)**

.. code-block:: text

   0.5714285714285714
   0.6666666666666666
   0.33333333333333337

More examples
-------------

Cosine with bigrams:

.. code-block:: python

   import textwizard as tw
   print(tw.text_similarity("deep learning", "learning deep nets", method="cosine"))

**Output**

.. code-block:: text

   0.5163977794943222

Jaccard on short phrases:

.. code-block:: python

   import textwizard as tw
   print(tw.text_similarity("the quick brown fox", "the quick red fox", method="jaccard"))

**Output**

.. code-block:: text

   0.6

Levenshtein identical / empty:
------------------------------

.. code-block:: python

   import textwizard as tw
   print(tw.text_similarity("same", "same", method="levenshtein"))  # 1.0
   print(tw.text_similarity("", "nonempty", method="levenshtein"))  # 0.0

**Output**

.. code-block:: text

   1.0
   0.0

Edge cases & notes
==================

- Mixed scripts and punctuation: tokens are extracted with ``\w+``; punctuation is ignored for cosine/jaccard.
- Very short texts can yield low cosine/jaccard scores due to sparse tokens; Levenshtein may be more stable.
- Complexity:  
  • Cosine/Jaccard – linear in token count.  
  • Levenshtein – ``O(len(a)·len(b))`` time, memory-optimised; suitable for short/medium strings.
