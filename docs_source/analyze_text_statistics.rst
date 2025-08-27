=================
Text statistics
=================

Compute a compact suite of lexical diversity and distribution metrics from a string.

.. note::
   All numeric values are rounded to **3 decimals**.  
   If there are fewer than **2 distinct tokens**, ``zipf.slope`` and ``zipf.r2`` are ``NaN``.

What it computes
================

- ``entropy`` – Shannon entropy (bits per token) of the token-frequency distribution.
- ``zipf.slope`` / ``zipf.r2`` – slope and R² of the linear fit on ``log10(rank) → log10(freq)``.
- ``vocab_gini`` – Gini coefficient of type-frequency inequality (0=uniform, 1=max inequality).
- ``type_token_ratio`` – ``|V| / N``, unique types over total tokens.
- ``hapax_ratio`` – share of tokens that occur exactly once.
- ``simpson_index`` – Simpson diversity index: ``1 - Σ (f_w / N)^2``.
- ``yule_k`` – Yule’s K (lexical concentration): ``10^4 · (Σ i^2·V_i − N) / N^2``.
- ``avg_word_length`` – average token length (characters), weighted by frequency.

Parameters
==========

- ``text`` (``str``): Input string to analyze.

Returns
=======

``dict``
    A dictionary with the following keys (all floats unless noted):

    - ``entropy``
    - ``zipf`` (``dict``) → ``{"slope": float, "r2": float}``
    - ``vocab_gini``
    - ``type_token_ratio``
    - ``hapax_ratio``
    - ``simpson_index``
    - ``yule_k``
    - ``avg_word_length``

Metric definitions
==================

- **Shannon entropy**:
  ``H = − Σ_w (f_w / N) · log₂(f_w / N)``

- **Zipf fit**:
  Linear regression of ``x = log10(rank)``, ``y = log10(freq)`` → report ``slope`` and ``R²``.

- **Gini**:
  With frequencies ``v₁ ≤ v₂ ≤ … ≤ v_m``, total tokens ``N``, types ``m``:
  ``G = (2 · Σ_{i=1..m} i·v_i) / (m·N) − (m + 1) / m``

- **Type–Token Ratio**:
  ``TTR = |V| / N``

- **Hapax Ratio**:
  ``(#types with frequency 1) / N``

- **Simpson index**:
  ``1 − Σ_w (f_w / N)²``

- **Yule’s K**:
  ``K = 10⁴ · (Σ_{i=1..M} i²·V_i − N) / N²`` where ``V_i`` = #types with frequency ``i``

- **Average word length**:
  ``(Σ_w |w| · f_w) / N``

Examples
========

Basic usage
-----------

.. code-block:: python

   import textwizard as tw

   stats = tw.analyze_text_statistics("a a a b b c d e f g")
   print(stats)

**Output**

.. code-block:: text

   {'entropy': 2.646, 'zipf': {'slope': -0.605, 'r2': 0.838}, 'vocab_gini': 0.229, 'type_token_ratio': 0.7, 'hapax_ratio': 0.5, 'simpson_index': 0.82, 'yule_k': 800.0, 'avg_word_length': 1.0}


Single repeated token:

.. code-block:: python

   import textwizard as tw
   print(tw.analyze_text_statistics("hello hello hello"))

**Output**

.. code-block:: text

   {'entropy': -0.0, 'zipf': {'slope': nan, 'r2': nan}, 'vocab_gini': 0.0, 'type_token_ratio': 0.333, 'hapax_ratio': 0.0, 'simpson_index': 0.0, 'yule_k': 6666.667, 'avg_word_length': 5.0}

Notes
=====

- Tokenization is deliberately simple (``text.lower().split()``) to keep metrics stable and fast.
- ``NaN`` appears for Zipf metrics when fewer than two distinct tokens are present.
