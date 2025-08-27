==================
Language Detection
==================

Character n-gram detector with smart gating, priors, and linguistic hints.  
**Supports 161 languages.** Returns either a single top-1 **ISO code** or a **ranked list** with probabilities.

Parameters
==========

- ``text``: Input string (Unicode).
- ``top_k``: How many candidates to return (default ``3``).
- ``profiles_dir``: Optional path overriding the bundled language profiles.
- ``use_mmap``: If ``True``, memory-map the profile tries (lower RAM; slightly slower first access).
- ``return_top1``: If ``True``, return only the best language code; otherwise a list of ``(lang, prob)``.

Return value
============

- ``str`` when ``return_top1=True`` (e.g., ``"it"``).  
- ``list[tuple[str, float]]`` when ``return_top1=False`` (sorted by probability).

Examples
========

Top-1 (single code)
-------------------

.. code-block:: python

   import textwizard as tw

   text = "Ciao, come stai oggi?"
   lang = tw.lang_detect(text, return_top1=True)
   print(lang) 
   
**Output**  

   .. code-block:: text

      it

Top-k distribution
------------------

.. code-block:: python

   import textwizard as tw

   text = "The quick brown fox jumps over the lazy dog."
   langs = tw.lang_detect(text, top_k=5, return_top1=False)
   print(langs)  
   
**Output**  

   .. code-block:: text

      [('en', 0.9999376335362183), ('mg', 4.719212057614953e-05), ('fy', 1.4727973350205069e-05), ('rm', 2.8718519851832537e-07), ('la', 1.5918465665694727e-07)]

Batch examples
--------------

.. code-block:: python

   import textwizard as tw

   for s in [
       "これは日本語のテスト文です。",
       "Alex parle un peu français, aber nicht so viel.",
       "¿Dónde está la estación de tren?",
   ]:
       print("TOP1:", tw.lang_detect(s, return_top1=True))
        
**Output**  

   .. code-block:: text

    TOP1: ja
    TOP1: fr
    TOP1: es

Profiles directory & mmap
-------------------------

.. code-block:: python

   from pathlib import Path
   import textwizard as tw

   langs = tw.lang_detect(
       "Buongiorno a tutti!",
       profiles_dir=Path("/opt/textwizard/profiles"),  # custom profiles
       use_mmap=True,                                   # lower RAM
       top_k=3,
   )
   print(langs)

Operational notes
=================

- **Lazy loading**: the model loads on first call and is cached for reuse.  
- **Short/ASCII texts**: ambiguity is common; provide longer samples for better confidence.  
- **Profiles**: if you keep profiles outside the package, pass ``profiles_dir``.  
- **Probabilities** are softmax-normalised over candidates returned by the gate.

Supported languages (161)
=========================

.. csv-table::
   :header-rows: 0
   :widths: 33,33,34

   "aa — Afar","ab — Abkhazian","af — Afrikaans"
   "am — Amharic","an — Aragonese","ar — Arabic"
   "as — Assamese","av — Avaric","ay — Aymara"
   "az — Azerbaijani","ba — Bashkir","be — Belarusian"
   "bg — Bulgarian","bm — Bambara","bn — Bengali"
   "bo — Tibetan","br — Breton","bs — Bosnian"
   "ca — Catalan","ce — Chechen","ch — Chamorro"
   "cs — Czech","cv — Chuvash","cy — Welsh"
   "da — Danish","de — German","dz — Dzongkha"
   "ee — Ewe","el — Greek","en — English"
   "eo — Esperanto","es — Spanish","et — Estonian"
   "eu — Basque","fa — Persian","ff — Fula"
   "fi — Finnish","fj — Fijian","fo — Faroese"
   "fr — French","fy — Western Frisian","ga — Irish"
   "gd — Scottish Gaelic","gl — Galician","gn — Guarani"
   "gu — Gujarati","gv — Manx","ha — Hausa"
   "he — Hebrew","hi — Hindi","hr — Croatian"
   "ht — Haitian Creole","hu — Hungarian","hy — Armenian"
   "id — Indonesian","ig — Igbo","io — Ido"
   "is — Icelandic","it — Italian","iu — Inuktitut"
   "ja — Japanese","jv — Javanese","ka — Georgian"
   "kg — Kongo","ki — Kikuyu","kk — Kazakh"
   "kl — Kalaallisut","km — Khmer","kn — Kannada"
   "ko — Korean","kr — Kanuri","ks — Kashmiri"
   "ku — Kurdish","kv — Komi","kw — Cornish"
   "ky — Kyrgyz","la — Latin","lb — Luxembourgish"
   "lg — Ganda","li — Limburgan","ln — Lingala"
   "lo — Lao","lt — Lithuanian","lu — Luba-Kasai"
   "lv — Latvian","mg — Malagasy","mh — Marshallese"
   "mi — Māori","mk — Macedonian","ml — Malayalam"
   "mn — Mongolian","mr — Marathi","ms — Malay"
   "mt — Maltese","my — Burmese","ne — Nepali"
   "nl — Dutch","nn — Norwegian Nynorsk","no — Norwegian"
   "nv — Navajo","ny — Chichewa / Nyanja","oc — Occitan"
   "om — Oromo","or — Odia","os — Ossetian"
   "pa — Punjabi","pl — Polish","ps — Pashto"
   "pt — Portuguese","qu — Quechua","rm — Romansh"
   "rn — Kirundi","ro — Romanian","ru — Russian"
   "rw — Kinyarwanda","sa — Sanskrit","sc — Sardinian"
   "sd — Sindhi","se — Northern Sami","sg — Sango"
   "si — Sinhala","sk — Slovak","sl — Slovenian"
   "sm — Samoan","sn — Shona","so — Somali"
   "sq — Albanian","sr — Serbian","ss — Swati"
   "st — Sotho","su — Sundanese","sv — Swedish"
   "sw — Swahili","ta — Tamil","te — Telugu"
   "tg — Tajik","th — Thai","ti — Tigrinya"
   "tk — Turkmen","tl — Tagalog","tn — Tswana"
   "to — Tonga","tr — Turkish","ts — Tsonga"
   "tt — Tatar","tw — Twi","ty — Tahitian"
   "ug — Uyghur","uk — Ukrainian","ur — Urdu"
   "uz — Uzbek","ve — Venda","vi — Vietnamese"
   "vo — Volapük","wa — Walloon","wo — Wolof"
   "xh — Xhosa","yi — Yiddish","yo — Yoruba"
   "zh — Chinese","zu — Zulu"
