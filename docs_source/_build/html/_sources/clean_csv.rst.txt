=========
Clean CSV
=========

Deterministic CSV cleanup with full dialect control and structural fixes.  
Removes columns or rows, blanks values by exact match or wildcard, trims whitespace, deduplicates, and drops empty rows/columns. Always returns a CSV ``str`` serialized with the chosen dialect.


Parameters
====================

.. list-table::
   :header-rows: 1
   :widths: 26 74

   * - **Parameter**
     - **Description**
   * - ``text``
     - (*str*) Raw CSV input.
   * - ``delimiter``
     - (*str*) Field separator. Default: ``,``
   * - ``quotechar``
     - (*str*) Quote character. Default: ``"``.
   * - ``escapechar``
     - (*str | None*) Escape prefix for quotechar. Default: ``None``.
   * - ``doublequote``
     - (*bool*) Double the quotechar to escape inside fields. Default: ``True``.
   * - ``skipinitialspace``
     - (*bool*) Skip spaces right after delimiter. Default: ``False``.
   * - ``lineterminator``
     - (*str*) Line terminator for output. Default: ``"\n"``.
   * - ``quoting``
     - (*int*) One of ``csv.QUOTE_MINIMAL | QUOTE_ALL | QUOTE_NONE | QUOTE_NONNUMERIC``.
   * - ``remove_columns``
     - (*str | int | list*) Columns to drop by **name** (requires header) or **0-based index**.
   * - ``remove_row_index``
     - (*int | list*) Row indices to drop (0-based over the parsed rows).
   * - ``remove_values``
     - (*str | int | list*) Values to blank out. Supports wildcards ``*`` and ``?``.
   * - ``remove_duplicates_rows``
     - (*bool*) Remove duplicate records (exact row match). Default: ``False``.
   * - ``trim_whitespace``
     - (*bool*) Strip leading/trailing whitespace inside fields. Default: ``False``.
   * - ``remove_empty_columns``
     - (*bool*) Drop columns that are empty after cleaning. Default: ``False``.
   * - ``remove_empty_rows``
     - (*bool*) Drop rows with all-empty fields after cleaning. Default: ``False``.

.. note::
   **Row indexing** is 0-based over the physical row order as parsed.  
   If your CSV has a header, the header is row index ``0``.

Examples
========

Basic cleanup: drop columns, redact values, trim, dedupe
--------------------------------------------------------

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

Drop by index vs by name
------------------------

.. code-block:: python

   import textwizard as tw

   csv_data = "A,B,C\n1,2,3\n4,5,6\n"
   by_name  = tw.clean_csv(csv_data, remove_columns=["B"])
   by_index = tw.clean_csv(csv_data, remove_columns=[1])  # same column
   print(by_name); print(by_index)

**Output**

   .. code-block:: text

    A,C
    1,3
    4,6
    
    A,C
    1,3
    4,6

Remove specific rows
------------------------------

.. code-block:: python

   import textwizard as tw

   csv_data = "h1,h2\nx1,y1\nx2,y2\nx3,y3\n"
   out = tw.clean_csv(csv_data, remove_row_index=[2])  # drops "x2,y2"
   print(out)

**Output**

   .. code-block:: text

    h1,h2
    x1,y1
    x3,y3

Normalize dialect: semicolon → comma, quote all
-----------------------------------------------

.. code-block:: python

   import textwizard as tw, csv

   csv_data = "id;name;note\n1;Alice;\"a; b\""
   out = tw.clean_csv(
       csv_data,
       delimiter=";",             
       quoting=csv.QUOTE_ALL,   
       lineterminator="\n",
   )
   print(out)

**Output** 

   .. code-block:: text

    id;name;note
    1;Alice;"a; b"

Wildcard Examples
---------------------------------

.. code-block:: python

   import textwizard as tw

   csv_data = "name,email\nJohn,john.doe@example.com\nJane,jane@corp.com\n"
   out = tw.clean_csv(
       csv_data,
       remove_values=["*@example.com", "Jane"],  # blanks fields matching these patterns
   )
   print(out)

**Output**

   .. code-block:: text

    name,email
    John,
    ,jane@corp.com

Headerless CSV: drop by index and trim
--------------------------------------

.. code-block:: python

   import textwizard as tw

   csv_data = "  a , 1 , x \n  b , 2 , y \n"
   out = tw.clean_csv(
       csv_data,
       delimiter=",",
       trim_whitespace=True,
       remove_columns=[2],       # drop third column
   )
   print(out)

**Output** 

   .. code-block:: text

      a,1
      b,2

Deduplicate only
----------------

.. code-block:: python

   import textwizard as tw

   csv_data = "k,v\nA,1\nA,1\nB,2\n"
   out = tw.clean_csv(csv_data, remove_duplicates_rows=True)
   print(out)

**Output**

   .. code-block:: text

      k,v
      A,1
      B,2

Returns
=======

``str`` — cleaned CSV serialized with the specified dialect.

Operational notes
=================

- Column name matching requires a header row. Otherwise use indices.  
- ``remove_values`` blanks matching cells (does not drop rows). Supports wildcards ``*`` and ``?``.  
- ``remove_empty_columns``/``remove_empty_rows`` run **after** other operations.  
- Deduplication compares full serialized rows with dialect normalization.

Errors
======

- Invalid dialect or malformed CSV may raise parsing errors.  
- Unknown quoting constant → ``ValueError``.

See also
========

- :doc:`clean_html` — HTML cleanup
- :doc:`clean_xml` — XML cleanup
