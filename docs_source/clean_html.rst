==========
Clean HTML
==========

HTML cleanup with granular switches for scripts, metadata, embedded media, interactive elements, headings, phrasing content, and more.  
Supports wildcard-based *tag* and *attribute* removal, selective content stripping, and empty-node pruning. Returns **text** or **HTML** depending on the mode.

Behavior
========

Three explicit modes with different outputs:

+-----------------------------------------------+--------------------------------------------+-------------------------+--------------------------------------------------------------+
| **Mode**                                      | **How to trigger**                         | **Returns**             | **Description**                                              |
+===============================================+============================================+=========================+==============================================================+
| **A) text-only**                              | No parameters provided (all ``None``)      | ``str`` (plain text)    | Extracts text, skips script-supporting tags, inserts spaces. |
+-----------------------------------------------+--------------------------------------------+-------------------------+--------------------------------------------------------------+
| **B) structural clean**                       | At least one flag is ``True``              | ``str`` (HTML)          | Removes/unwraps per flags and serializes sanitized HTML.     |
+-----------------------------------------------+--------------------------------------------+-------------------------+--------------------------------------------------------------+
| **C) text+preserve**                          | Parameters present and all are ``False``   | ``str`` (text+markup)   | Extracts text but **preserves** groups explicitly set False. |
+-----------------------------------------------+--------------------------------------------+-------------------------+--------------------------------------------------------------+

.. note::
   When deleting nodes between adjacent text nodes, the cleaner inserts **one space** to avoid word concatenation.  
   In Mode B the serializer uses ``quote_attr_values="always"`` for stable diffs.

Parameters 
====================

+-------------------------------+--------------------------------------------------------------------------+
| **Parameter**                 | **Description**                                                          |
+===============================+==========================================================================+
| ``text``                      | (*str*) Raw HTML input.                                                  |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_script``             | (*bool | None*) Drop executable tags (``<script>``, ``<template>``).     |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_metadata_tags``      | (*bool | None*) Drop metadata (``<link>``, ``<meta>``, ``<base>``,       |
|                               | ``<noscript>``, ``<style>``, ``<title>``).                               |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_flow_tags``          | (*bool | None*) Drop flow content (layout + phrasing, e.g. ``<div>``,    |
|                               | ``<p>``, ``<span>``, ``<input>``).                                       |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_sectioning_tags``    | (*bool | None*) Drop sectioning (``<article>``, ``<aside>``, ``<nav>``,  |
|                               | ``<section>``).                                                          |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_heading_tags``       | (*bool | None*) Drop headings ``<h1>``–``<h6>``.                         |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_phrasing_tags``      | (*bool | None*) Drop phrasing (inline) elements, e.g. ``<span>``,        |
|                               | ``<strong>``, ``<img>``, ``<code>``, ``<svg>``, ``<textarea>``.          |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_embedded_tags``      | (*bool | None*) Drop embedded content (``<img>``, ``<video>``,           |
|                               | ``<iframe>``, ``<embed>``, ``<object>``, ``<svg>``, ``<math>``).         |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_interactive_tags``   | (*bool | None*) Drop interactive elements (``<button>``, ``<input>``,    |
|                               | ``<select>``, ``<label>``, ``<textarea>``, interactive media).           |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_palpable``           | (*bool | None*) Drop palpable elements (broad set incl. ``<table>``,     |
|                               | ``<section>``, ``<p>``, ``<ul>``, etc.).                                 |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_doctype``            | (*bool | None*) Remove ``<!DOCTYPE html>``.                              |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_comments``           | (*bool | None*) Remove ``<!-- ... -->`` comments.                        |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_specific_attributes``| (*str | list | None*) Remove attributes by name or wildcard              |
|                               | (e.g. ``"id"``, ``"data-*"``, ``"on*"``).                                |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_specific_tags``      | (*str | list | None*) **Unwrap** tags by name or wildcard                |
|                               | (children are lifted into parent).                                       |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_empty_tags``         | (*bool | None*) Prune empty nodes after edits.                           |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_content_tags``       | (*str | list | None*) Keep tag but drop inner content.                   |
+-------------------------------+--------------------------------------------------------------------------+
| ``remove_tags_and_contents``  | (*str | list | None*) Remove tag **and** its entire content.             |
+-------------------------------+--------------------------------------------------------------------------+

Parameter semantics
===================

- **None** → flag **unset**. If all are None ⇒ **Mode A**.  
- **True** → request removal/operation ⇒ **Mode B**.  
- **False** → request preservation ⇒ **Mode C** (text output that preserves those groups; ``remove_comments=False`` and ``remove_doctype=False`` also preserve them).

Tag groups reference
====================

.. list-table::
   :header-rows: 1
   :widths: 22 78

   * - **Flag**
     - **Tags affected**
   * - ``remove_script``
     - ``script``, ``template``
   * - ``remove_metadata_tags``
     - ``base``, ``link``, ``meta``, ``noscript``, ``script``, ``style``, ``title``
   * - ``remove_flow_tags``
     - ``address``, ``article``, ``aside``, ``blockquote``, ``div``, ``dl``, ``fieldset``, ``figcaption``, ``figure``, ``footer``, ``form``, ``h1``, ``h2``, ``h3``, ``h4``, ``h5``, ``h6``, 
       ``header``, ``hgroup``, ``hr``, ``main``, ``nav``, ``ol``, ``p``, ``pre``, ``section``, ``ul``, 
       ``a``, ``abbr``, ``b``, ``bdi``, ``bdo``, ``br``, ``button``, ``cite``, ``code``, ``data``, ``dfn``, ``em``, 
       ``i``, ``img``, ``input``, ``kbd``, ``label``, ``mark``, ``q``, ``ruby``, ``s``, ``samp``, ``small``, ``span``, 
       ``strong``, ``sub``, ``sup``, ``time``, ``u``, ``var``, ``wbr``
   * - ``remove_sectioning_tags``
     - ``article``, ``aside``, ``nav``, ``section``
   * - ``remove_heading_tags``
     - ``h1``, ``h2``, ``h3``, ``h4``, ``h5``, ``h6``
   * - ``remove_phrasing_tags``
     - ``abbr``, ``audio``, ``b``, ``bdi``, ``bdo``, ``br``, ``button``, ``cite``, ``code``, ``data``, ``dfn``, ``em``, 
       ``i``, ``img``, ``input``, ``kbd``, ``label``, ``mark``, ``math``, ``meter``, ``noscript``, ``object``, ``output``, 
       ``progress``, ``q``, ``ruby``, ``s``, ``samp``, ``script``, ``select``, ``small``, ``span``, ``strong``, 
       ``sub``, ``sup``, ``svg``, ``template``, ``textarea``, ``time``, ``u``, ``var``, ``wbr``
   * - ``remove_embedded_tags``
     - ``audio``, ``canvas``, ``embed``, ``iframe``, ``img``, ``map``, ``object``, ``picture``, ``svg``, ``video``, ``math``
   * - ``remove_interactive_tags``
     - ``a``, ``audio``, ``button``, ``details``, ``embed``, ``iframe``, ``img``, ``input``, ``keygen``, ``label``, ``select``, ``textarea``, ``video``
   * - ``remove_palpable``
     - ``a``, ``abbr``, ``address``, ``article``, ``aside``, ``audio``, ``b``, ``bdi``, ``bdo``, ``blockquote``, ``button``, 
       ``canvas``, ``cite``, ``code``, ``data``, ``del``, ``details``, ``dfn``, ``div``, ``dl``, ``em``, ``embed``, 
       ``fieldset``, ``figure``, ``footer``, ``form``, ``h1``, ``h2``, ``h3``, ``h4``, ``h5``, ``h6``, ``header``, ``hgroup``, 
       ``i``, ``iframe``, ``img``, ``input``, ``kbd``, ``label``, ``main``, ``map``, ``mark``, ``math``, ``menu``, ``meter``, 
       ``nav``, ``object``, ``ol``, ``output``, ``p``, ``picture``, ``pre``, ``progress``, ``q``, ``ruby``, ``s``, ``samp``, 
       ``search``, ``section``, ``select``, ``small``, ``span``, ``strong``, ``sub``, ``sup``, ``svg``, ``table``, 
       ``textarea``, ``time``, ``u``, ``ul``, ``var``, ``video``


Examples
=================

Mode A — text only
------------------

.. code-block:: python

   import textwizard as tw
   txt = tw.clean_html("<div><p>Hello</p><script>x()</script></div>")
   print(txt)

**Output**  

   .. code-block:: text

      Hello

Mode B — structural clean (HTML out)
------------------------------------

**Drop scripts, metadata, embeds; strip attributes; prune empties**

.. code-block:: python

   import textwizard as tw

   html = """
   <html><head>
     <title>x</title><meta charset="utf-8">
     <link rel="preload" href="x.css"><script>evil()</script>
   </head>
   <body>
     <article><h1>Title</h1><img src="a.png"><p id="k" onclick="x()">hello</p></article>
     <!-- comment -->
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

**Wildcards and unwrap vs hard remove**

.. code-block:: python

    import textwizard as tw
    
    html = """
    <div id="hero" data-track="x">
      <svg viewBox="0 0 10 10"><circle r="5"/></svg>
      <p class="k" onclick="hack()">Hello</p>
      <iframe src="a.html"></iframe>
    </div>
    """
    
    test = tw.clean_html(
        html,
        remove_tags_and_contents=["iframe", "template"],
        remove_specific_attributes=["id", "data-*", "on*"],
        remove_empty_tags=True,
    )
    print(test)

**Output**  

   .. code-block:: html

    <html><body><div>
      
      <p class="k">Hello</p>
      
    </div>
    </body></html>



**Content stripping vs tag deletion**

.. code-block:: python

   import textwizard as tw

   html = """
   <article>
     <script>track()</script>
     <style>p{}</style>
     <pre>code stays</pre>
     <noscript>fallback</noscript>
   </article>
   """
   keep_tags_drop_content = tw.clean_html(
       html,
       remove_content_tags=["script","style"],     # keep <script>/<style> but empty them
   )

   print(keep_tags_drop_content)

**Output**  

   .. code-block:: html

    <html><head></head><body><article>
      <script></script>
      <style></style>
      <pre>code stays</pre>
      <noscript>fallback</noscript>
    </article>
    </body></html>

**Sectioning, headings, flow**

.. code-block:: python

   import textwizard as tw

   html = "<section><h1>T</h1><div><address>X</address><p>Body</p></div></section>"
   out = tw.clean_html(
       html,
       remove_sectioning_tags=True,  # drop <section>/<article>/<aside>/<nav>
       remove_heading_tags=True,     # drop <h1>-<h6>
   )
   print(out)

**Output**  

   .. code-block:: html

      <html><head></head><body></body></html>


**Interactive and embedded**

.. code-block:: python

   import textwizard as tw

   html = """
   <button id="b" disabled>Click</button>
   <img src="logo.png" alt="Logo">
   <video src="v.mp4"></video>
   """
   out = tw.clean_html(
       html,
       remove_interactive_tags=True,  # button, input, select
       remove_embedded_tags=True,     # img, iframe, embed, video, audio
       remove_specific_attributes=["id"],
       remove_empty_tags=True
   )
   print(out) # "" empty



Mode C — text with preservation
-------------------------------

**Preserve sectioning + headings + comments**

.. code-block:: python

   import textwizard as tw
   html = "<article><h1>T</h1><p>Body</p><!-- c --></article>"
   txt = tw.clean_html(
       html,
       remove_sectioning_tags=False,
       remove_heading_tags=False,
       remove_comments=False,
   )
   print(txt)

**Output**  

   .. code-block:: html

      <article><h1>T</h1>Body<!-- c --></article>

**Preserve images but as-is text elsewhere**

.. code-block:: python

   import textwizard as tw
   html = '<p>A<img src="a.png" alt="A">B</p>'
   txt = tw.clean_html(
       html,
       remove_embedded_tags=False,   # keep <img>
   )
   print(txt)

**Output**  

   .. code-block:: html

      A<img src="a.png" alt="A">B


Returns
=======

- **Mode A**: ``str`` plain text.  
- **Mode B**: ``str`` serialized HTML.  
- **Mode C**: ``str`` text with selected tags/comments/doctype preserved inline.

Operational notes
=================

- Prefer targeted flags to preserve semantics. Use broad switches only for aggressive sanitization.
- Wildcards:
  - Attributes: ``"on*"`` for event handlers, ``"data-*"``, ``"aria-*"``
  - Tags: exact names, lists, or patterns like ``"*ads*"``.
- When the DOM becomes empty after removals, returns ``""``.
- The serializer may add ``<html><body>…`` wrappers to ensure a well-formed tree (Mode B).  

Errors
======

- Invalid input type → ``ValueError``.  
- Malformed markup is normalized rather than rejected when possible.

See also
========

- :doc:`beutifull_html` — Pretty-print and normalize HTML formatting
- :doc:`html_to_markdown` — Convert HTML to Markdown
- :doc:`intro` — Overview and quick start
