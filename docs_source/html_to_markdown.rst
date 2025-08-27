==================
HTML → Markdown
==================

Best-effort conversion of common HTML structure to Markdown (headings, paragraphs,
inline emphasis/code, lists, links, images, blockquotes, code blocks, horizontal rules).
Attributes and presentational markup are ignored. When the input cannot be converted
safely, the original HTML is returned unchanged.

Parameters
==========

- ``html``: Raw HTML input (``str``).

Return value
============

- ``str`` — Markdown representation of the input HTML (or the original HTML if conversion
  isn’t applicable).

Examples
========

Basic
-----

.. code-block:: python

   import textwizard as tw

   md = tw.html_to_markdown("<h1>Hello</h1><p>World</p>")
   print(md)

**Output**

.. code-block:: markdown

   # Hello

   World

Links, lists, code
------------------

.. code-block:: python

   import textwizard as tw

   html = """
   <h2>Quick links</h2>
   <p>Visit <a href="https://example.com">our site</a>.</p>
   <ul>
     <li><strong>One</strong></li>
     <li>Two</li>
   </ul>
   <pre><code>print("hi")</code></pre>
   <hr>
   """
   print(tw.html_to_markdown(html))

**Output (placeholder)**

.. code-block:: markdown

    ## Quick links
    
    Visit [our site](https://example.com)\.
    
    - **One**
    - Two
    
    ```
    print("hi")
    ```
    
    ---

Notes
=====

- Scripts/styles and non-textual presentational tags are skipped.
- Whitespace is normalized where safe; inline semantics (``<em>``, ``<strong>``, ``<code>``)
  map to ``*``, ``**``, and backticks.
- Images become ``![alt](src)`` when both *alt* and *src* are present; otherwise a text
  placeholder may be emitted.
- Complex tables may be simplified or left as HTML.
- If parsing fails or markup is unsupported, the function falls back gracefully and
  returns the original HTML.
