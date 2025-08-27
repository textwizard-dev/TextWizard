================
Beutifull HTML
================

Pretty-print raw HTML **without changing semantics**. The formatter parses *html*,
serializes a normalized DOM, and indents nodes by a configurable amount. It never
reflows RCData content (``<script>``, ``<style>``, ``<textarea>``) and avoids
introducing visible whitespace unless explicitly requested.

Parameters
==========

- ``html`` (str): Raw HTML input.
- ``indent`` (int, default ``2``): Spaces per indentation level.
- ``quote_attr_values`` ({``"always"``, ``"spec"``, ``"legacy"``}, default ``"spec"``):
  Quoting policy for attribute values.
  - ``"always"`` → always quote.
  - ``"spec"``  → quote only when required by the HTML5 spec (space, quotes, ``=``, ``<``, ``>``, backtick).
  - ``"legacy"`` → legacy behavior; quote only for whitespace or quotes.
- ``quote_char`` ({``'"'``, ``"'"``}, default ``'"'``): Preferred quote character when quoting.
- ``use_best_quote_char`` (bool, default ``True``): Choose the quote character that minimizes escaping per attribute.
- ``minimize_boolean_attributes`` (bool, default ``False``): Render compact boolean attributes (e.g., ``disabled`` instead of ``disabled="disabled"``).
- ``use_trailing_solidus`` (bool, default ``False``): Emit a trailing solidus on void elements (``<br />``). Cosmetic in HTML5.
- ``space_before_trailing_solidus`` (bool, default ``True``): Insert a space before the trailing solidus if it is used.
- ``escape_lt_in_attrs`` (bool, default ``False``): Escape ``<``/``>`` inside attribute values.
- ``escape_rcdata`` (bool, default ``False``): Escape characters inside RCData elements (usually keep ``False``).
- ``resolve_entities`` (bool, default ``True``): Prefer named entities where available during serialization.
- ``alphabetical_attributes`` (bool, default ``True``): Sort attributes alphabetically (useful for diff-friendly output).
- ``strip_whitespace`` (bool, default ``False``): Trim leading/trailing whitespace in text nodes and collapse runs of spaces.
- ``include_doctype`` (bool, default ``True``): Prepend ``<!DOCTYPE html>`` if missing.
- ``expand_mixed_content`` (bool, default ``True``): For elements that contain both text and child elements, place each child on its own indented line (may introduce visible whitespace in inline contexts).
- ``expand_empty_elements`` (bool, default ``True``): Render empty non-void elements on two lines (open/close on separate lines).

Return value
============

- ``str``: The formatted HTML.

Examples
========

Basic pretty-print
------------------

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

   pretty = tw.beutifull_html(
       html=html,
       indent=4,
       alphabetical_attributes=True,
       minimize_boolean_attributes=True,
       quote_attr_values="always",
       strip_whitespace=True,
       include_doctype=True,
       expand_mixed_content=True,
       expand_empty_elements=True,
   )

   print(pretty)

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

Quote policies & best quote char
--------------------------------

.. code-block:: python

   import textwizard as tw

   html = '<a data-title=\'He said "hi"\'>x</a>'
   out = tw.beutifull_html(
       html,
       quote_attr_values="always",
       quote_char='"',
       use_best_quote_char=True,  # picks ' to avoid escaping internal "
   )
   print(out)
   
**Output**

.. code-block:: html

    <!DOCTYPE html>
    <html>
      <head>
      </head>
      <body>
        <a data-title='He said &quot;hi&quot;'>
          x
        </a>
      </body>
    </html>

Void elements and trailing solidus
----------------------------------

.. code-block:: python

   import textwizard as tw

   html = "<br><img src=x>"
   out = tw.beutifull_html(
       html,
       use_trailing_solidus=True,
       space_before_trailing_solidus=False,
   )
   print(out)
   
**Output**

.. code-block:: html

    <!DOCTYPE html>
    <html>
      <head>
      </head>
      <body>
        <br/>
        <img src=x/>
      </body>
    </html>


Whitespace & mixed content
--------------------------

.. code-block:: python

   import textwizard as tw

   html = "<p>Hello <b>world</b>!</p>"
   out = tw.beutifull_html(
       html,
       expand_mixed_content=True,   # puts <b> on its own line
       strip_whitespace=False,
   )
   print(out)
   
**Output**

.. code-block:: html

    <!DOCTYPE html>
    <html>
      <head>
      </head>
      <body>
        <p>
          Hello
          <b>
            world
          </b>
          !
        </p>
      </body>
    </html>

Notes
=====

- RCData elements (``<script>``, ``<style>``, ``<textarea>``) are not reflowed unless ``escape_rcdata=True``.
- Void elements never receive closing tags; they may receive a trailing solidus purely for aesthetics.
- The formatter affects whitespace, quoting, attribute ordering, and serialization cosmetics—**not** DOM structure.
