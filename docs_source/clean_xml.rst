=========
Clean XML
=========

XML cleanup with namespace stripping, tag/attribute pruning (with wildcards), whitespace normalization, and duplicate-sibling removal.  
If **no flags** are provided, the function returns the **concatenated text content** of the XML.  
If **any flag** is set, it returns **serialized XML** (no XML declaration).


Parameters 
====================

.. list-table::
   :header-rows: 1
   :widths: 28 72

   * - **Parameter**
     - **Description**
   * - ``text``
     - (*str | bytes*) Raw XML input.
   * - ``remove_comments``
     - (*bool | None*) Remove ``<!-- … -->``. Preserves spacing by inserting one space when needed.
   * - ``remove_processing_instructions``
     - (*bool | None*) Remove ``<? … ?>``. Preserves spacing like above.
   * - ``remove_cdata_sections``
     - (*bool | None*) Unwrap CDATA by decoding entity text content.
   * - ``remove_empty_tags``
     - (*bool | None*) Drop elements with no children and no text (root never dropped).
   * - ``remove_namespaces``
     - (*bool | None*) Strip element and attribute namespace prefixes and ``xmlns`` declarations.
   * - ``remove_duplicate_siblings``
     - (*bool | None*) Keep only the first identical serialized sibling element.
   * - ``collapse_whitespace``
     - (*bool | None*) Collapse runs of whitespace in text nodes to a single space.
   * - ``remove_specific_tags``
     - (*str | list | None*) **Delete** matching elements entirely. Wildcards supported.  
       Patterns can be local names (``"price"``) or qnames (``"ns:price"``); matching uses local-name.
   * - ``remove_content_tags``
     - (*str | list | None*) Keep the element but **remove its children and text**. Wildcards supported.
   * - ``remove_attributes``
     - (*str | list | None*) Delete attributes by name. Supports wildcards and qname matching  
       (e.g. ``"xml:*"``, ``"data-*"``, ``"id"``, ``"xlink:href"``).
   * - ``remove_declaration``
     - (*bool | None*) **No-op** in current implementation (output never includes XML declaration).
   * - ``normalize_entities``
     - (*bool | None*) **No-op** in current implementation (entity normalization occurs only with ``remove_cdata_sections``).

- **No flags provided** → returns **plain text** joined from all text nodes (whitespace collapsed between nodes).
- **At least one flag provided** → applies transformations and returns **XML string** without XML declaration.
- **Booleans**: ``True`` → apply operation. ``False``/``None`` → skip.
- **Lists/values** (tags, attributes): ``None`` → skip. Non-empty value/list → apply for each pattern.
- **Text-only mode**: when **all** parameters are ``None`` the function returns plain text.


Examples
========

Text-only mode (no flags)
-------------------------

.. code-block:: python

   import textwizard as tw
   xml = "<root><a>One</a><!-- c --><b>Two</b></root>"
   txt = tw.clean_xml(xml)  # no flags
   print(txt)

**Output** 

   .. code-block:: text

      One Two

Remove namespaces + comments + empties
--------------------------------------

.. code-block:: python

   import textwizard as tw

   xml = "<root xmlns='ns'><a/><b>ok</b><!-- x --></root>"
   fixed = tw.clean_xml(
       xml,
       remove_namespaces=True,
       remove_empty_tags=True,
       remove_comments=True,
   )
   print(fixed)

**Output**  

   .. code-block:: xml

      <root><b>ok</b></root>

Delete specific tags vs keep-tag-drop-content
---------------------------------------------

.. code-block:: python

   import textwizard as tw

   xml = "<doc><meta>m</meta><sec><title>T</title><p>Body</p></sec></doc>"
   test1 = tw.clean_xml(xml, remove_specific_tags=["meta","title"])
   test2 = tw.clean_xml(xml, remove_content_tags=["sec"])
   print(test1)
   print(test2)

**Output** 

   .. code-block:: xml

    <doc><sec><p>Body</p></sec></doc>
    <doc><meta>m</meta><sec/></doc>

Wildcard attribute removal (qname and local)
--------------------------------------------

.. code-block:: python

   import textwizard as tw

   xml = '<svg:svg xmlns:svg="http://www.w3.org/2000/svg" width="10" height="10"><svg:g id="g1"/></svg:svg>'
   out = tw.clean_xml(
       xml,
       remove_attributes=["id", "svg:*"],   # drop local 'id' and any svg-qualified attributes
       remove_namespaces=True,
   )
   print(out)

**Output**  

   .. code-block:: xml

      <svg width="10" height="10"><g/></svg>

Collapse whitespace and deduplicate siblings
--------------------------------------------

.. code-block:: python

   import textwizard as tw

   xml = "<r><x> a   b </x><x> a   b </x><x>c</x></r>"
   out = tw.clean_xml(xml, collapse_whitespace=True, remove_duplicate_siblings=True)
   print(out)

**Output**  

   .. code-block:: xml

      <r><x>a b</x><x>c</x></r>

Remove empty tags safely
------------------------

.. code-block:: python

   import textwizard as tw

   xml = "<r><k></k><v>1</v><z/></r>"
   out = tw.clean_xml(xml, remove_empty_tags=True)
   print(out)

**Output**  

   .. code-block:: xml

      <r><v>1</v></r>

Returns
=======

- **No flags**: ``str`` plain text (concatenated from text nodes).  
- **Any flag**: ``str`` XML without declaration.

Operational notes
=================

- Tag patterns match by **local name**; a ``"ns:tag"`` pattern is accepted but matched on local-name.
- Attribute patterns can be given as **local** (``"href"``) or **qname** (``"xlink:href"``); wildcards ``*`` and ``?`` supported.
- Comments/PI removal preserves word boundaries by inserting a single space when two text nodes would otherwise touch.
- If the root becomes empty and ``remove_empty_tags=True``, returns an empty string ``""``.

Errors
======

- Invalid XML → recovered when possible; otherwise may raise a parser error.  

See also
========

- :doc:`clean_html` — HTML cleanup
- :doc:`clean_csv` — CSV cleanup
