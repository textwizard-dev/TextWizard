import sys
import os
from typing import List

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if PROJECT_ROOT not in sys.path:
    sys.path.insert(0, PROJECT_ROOT)

NOT_SUPPORT=["ae","ak","bi","bh","cr","co","cu","dv","ho","hz","ia","ie","ii","ik","kj","na","nb","nd", "ng", "nr","oj","pi", "za"]



ISO_LANGUAGES = [
    {"code": "aa", "english": "Afar",          "native": "Afaraf"},
    {"code": "ab", "english": "Abkhazian",     "native": "аҧсуа"},
    {"code": "ae", "english": "Avestan",       "native": "avesta"},
    {"code": "af", "english": "Afrikaans",     "native": "Afrikaans"},
    {"code": "ak", "english": "Akan",          "native": "Akan"},
    {"code": "am", "english": "Amharic",       "native": "አማርኛ"},
    {"code": "an", "english": "Aragonese",     "native": "aragonés"},
    {"code": "ar", "english": "Arabic",        "native": "العربية"},
    {"code": "as", "english": "Assamese",      "native": "অসমীয়া"},
    {"code": "av", "english": "Avaric",        "native": "авар мацӀ"},
    {"code": "ay", "english": "Aymara",        "native": "aymar aru"},
    {"code": "az", "english": "Azerbaijani",   "native": "azərbaycan dili"},
    {"code": "ba", "english": "Bashkir",       "native": "башҡорт теле"},
    {"code": "be", "english": "Belarusian",    "native": "беларуская"},
    {"code": "bg", "english": "Bulgarian",     "native": "български"},
    {"code": "bh", "english": "Bihari",        "native": "भोजपुरी"},
    {"code": "bi", "english": "Bislama",       "native": "Bislama"},
    {"code": "bm", "english": "Bambara",       "native": "bamanankan"},
    {"code": "bn", "english": "Bengali",       "native": "বাংলা"},
    {"code": "bo", "english": "Tibetan",       "native": "བོད་ཡིག"},
    {"code": "br", "english": "Breton",        "native": "brezhoneg"},
    {"code": "bs", "english": "Bosnian",       "native": "bosanski"},
    {"code": "ca", "english": "Catalan",       "native": "Català"},
    {"code": "ce", "english": "Chechen",       "native": "нохчийн мотт"},
    {"code": "ch", "english": "Chamorro",      "native": "Chamoru"},
    {"code": "co", "english": "Corsican",      "native": "Corsu"},
    {"code": "cr", "english": "Cree",          "native": "ᓀᐦᐃᔭᐍᐏᐣ"},
    {"code": "cs", "english": "Czech",         "native": "čeština"},
    {"code": "cu", "english": "Church Slavic", "native": "ѩзыкъ словѣньскъ"},
    {"code": "cv", "english": "Chuvash",       "native": "чӑваш чӗлхи"},
    {"code": "cy", "english": "Welsh",         "native": "Cymraeg"},
    {"code": "da", "english": "Danish",        "native": "dansk"},
    {"code": "de", "english": "German",        "native": "Deutsch"},
    {"code": "dv", "english": "Divehi",        "native": "ދިވެހި"},
    {"code": "dz", "english": "Dzongkha",      "native": "རྫོང་ཁ"},
    {"code": "ee", "english": "Ewe",           "native": "Eʋegbe"},
    {"code": "el", "english": "Greek",         "native": "Ελληνικά"},
    {"code": "en", "english": "English",       "native": "English"},
    {"code": "eo", "english": "Esperanto",     "native": "Esperanto"},
    {"code": "es", "english": "Spanish",       "native": "Español"},
    {"code": "et", "english": "Estonian",      "native": "eesti"},
    {"code": "eu", "english": "Basque",        "native": "euskara"},
    {"code": "fa", "english": "Persian",       "native": "فارسی"},
    {"code": "ff", "english": "Fula",          "native": "Fulfulde"},
    {"code": "fi", "english": "Finnish",       "native": "suomi"},
    {"code": "fj", "english": "Fijian",        "native": "Vosa Vakaviti"},
    {"code": "fo", "english": "Faroese",       "native": "føroyskt"},
    {"code": "fr", "english": "French",        "native": "français"},
    {"code": "fy", "english": "Western Frisian","native": "Frysk"},
    {"code": "ga", "english": "Irish",         "native": "Gaeilge"},
    {"code": "gd", "english": "Scottish Gaelic","native": "Gàidhlig"},
    {"code": "gl", "english": "Galician",      "native": "Galego"},
    {"code": "gn", "english": "Guarani",       "native": "Avañe’ẽ"},
    {"code": "gu", "english": "Gujarati",      "native": "ગુજરાતી"},
    {"code": "gv", "english": "Manx",          "native": "Gaelg"},
    {"code": "ha", "english": "Hausa",         "native": "Hausa"},
    {"code": "he", "english": "Hebrew",        "native": "עברית"},
    {"code": "hi", "english": "Hindi",         "native": "हिन्दी"},
    {"code": "ho", "english": "Hiri Motu",      "native": "Hiri Motu"},
    {"code": "hr", "english": "Croatian",      "native": "Hrvatski"},
    {"code": "ht", "english": "Haitian Creole", "native": "Kreyòl ayisyen"},
    {"code": "hu", "english": "Hungarian",     "native": "magyar"},
    {"code": "hy", "english": "Armenian",      "native": "Հայերեն"},
    {"code": "hz", "english": "Herero",        "native": "Otjiherero"},
    {"code": "ia", "english": "Interlingua",   "native": "Interlingua"},
    {"code": "id", "english": "Indonesian",    "native": "Bahasa Indonesia"},
    {"code": "ie", "english": "Interlingue",   "native": "Interlingue"},
    {"code": "ig", "english": "Igbo",          "native": "Igbo"},
    {"code": "ii", "english": "Sichuan Yi",    "native": "ꆈꌠ꒿"},
    {"code": "ik", "english": "Inupiaq",       "native": "Iñupiaq"},
    {"code": "io", "english": "Ido",           "native": "Ido"},
    {"code": "is", "english": "Icelandic",     "native": "Íslenska"},
    {"code": "it", "english": "Italian",       "native": "Italiano"},
    {"code": "iu", "english": "Inuktitut",     "native": "ᐃᓄᒃᑎᑐᑦ"},
    {"code": "ja", "english": "Japanese",      "native": "日本語"},
    {"code": "jv", "english": "Javanese",      "native": "Basa Jawa"},
    {"code": "ka", "english": "Georgian",      "native": "ქართული"},
    {"code": "kg", "english": "Kongo",         "native": "KiKongo"},
    {"code": "ki", "english": "Kikuyu",        "native": "Gĩkũyũ"},
    {"code": "kj", "english": "Kuanyama",      "native": "Kuanyama"},
    {"code": "kk", "english": "Kazakh",        "native": "Қазақ тілі"},
    {"code": "kl", "english": "Kalaallisut",   "native": "kalaallisut"},
    {"code": "km", "english": "Khmer",         "native": "ភាសាខ្មែរ"},
    {"code": "kn", "english": "Kannada",       "native": "ಕನ್ನಡ"},
    {"code": "ko", "english": "Korean",        "native": "한국어"},
    {"code": "kr", "english": "Kanuri",        "native": "Kanuri"},
    {"code": "ks", "english": "Kashmiri",      "native": "کٲشُر ژٔٔہب"},
    {"code": "ku", "english": "Kurdish",       "native": "Kurdî"},
    {"code": "kv", "english": "Komi",          "native": "коми кыв"},
    {"code": "kw", "english": "Cornish",       "native": "Kernewek"},
    {"code": "ky", "english": "Kyrgyz",        "native": "Кыргызча"},
    {"code": "la", "english": "Latin",         "native": "Latine"},
    {"code": "lb", "english": "Luxembourgish", "native": "Lëtzebuergesch"},
    {"code": "lg", "english": "Ganda",         "native": "Luganda"},
    {"code": "li", "english": "Limburgan",     "native": "Limburgs"},
    {"code": "ln", "english": "Lingala",       "native": "Lingála"},
    {"code": "lo", "english": "Lao",           "native": "ພາສາລາວ"},
    {"code": "lt", "english": "Lithuanian",    "native": "lietuvių"},
    {"code": "lu", "english": "Luba-Kasai",    "native": "Tshiluba"},
    {"code": "lv", "english": "Latvian",       "native": "latviešu"},
    {"code": "mg", "english": "Malagasy",      "native": "Malagasy"},
    {"code": "mh", "english": "Marshallese",   "native": "Kajin Majel"},
    {"code": "mi", "english": "Māori",         "native": "te reo Māori"},
    {"code": "mk", "english": "Macedonian",    "native": "македонски"},
    {"code": "ml", "english": "Malayalam",     "native": "മലയാളം"},
    {"code": "mn", "english": "Mongolian",     "native": "Монгол"},
    {"code": "mr", "english": "Marathi",       "native": "मराठी"},
    {"code": "ms", "english": "Malay",         "native": "Bahasa Melayu"},
    {"code": "mt", "english": "Maltese",       "native": "Malti"},
    {"code": "my", "english": "Burmese",       "native": "မြန်မာစာ"},
    {"code": "na", "english": "Nauru",         "native": "Dorerin Naoero"},
    {"code": "nb", "english": "Norwegian Bokmål","native": "Norsk bokmål"},
    {"code": "nd", "english": "Northern Ndebele","native": "isiNdebele"},
    {"code": "ne", "english": "Nepali",        "native": "नेपाली"},
    {"code": "ng", "english": "Ndonga",        "native": "Ndonga"},
    {"code": "nl", "english": "Dutch",         "native": "Nederlands"},
    {"code": "nn", "english": "Norwegian Nynorsk","native": "Norsk nynorsk"},
    {"code": "no", "english": "Norwegian",     "native": "Norsk"},
    {"code": "nr", "english": "Southern Ndebele","native": "isiNdebele seSewula"},
    {"code": "nv", "english": "Navajo",        "native": "Diné bizaad"},
    {"code": "ny", "english": "Chichewa; Nyanja","native": "ChiCheŵa"},
    {"code": "oc", "english": "Occitan",       "native": "occitan"},
    {"code": "oj", "english": "Ojibwe",        "native": "Ojibwe"},
    {"code": "om", "english": "Oromo",         "native": "Afaan Oromoo"},
    {"code": "or", "english": "Odia",          "native": "ଓଡ଼ିଆ"},
    {"code": "os", "english": "Ossetian",      "native": "ирон æвзаг"},
    {"code": "pa", "english": "Punjabi",       "native": "ਪੰਜਾਬੀ"},
    {"code": "pi", "english": "Pali",          "native": "पालि"},
    {"code": "pl", "english": "Polish",        "native": "polski"},
    {"code": "ps", "english": "Pashto",        "native": "پښتو"},
    {"code": "pt", "english": "Portuguese",    "native": "Português"},
    {"code": "qu", "english": "Quechua",       "native": "Runa Simi"},
    {"code": "rm", "english": "Romansh",       "native": "rumantsch grischun"},
    {"code": "rn", "english": "Kirundi",       "native": "Ikirundi"},
    {"code": "ro", "english": "Romanian",      "native": "Română"},
    {"code": "ru", "english": "Russian",       "native": "русский"},
    {"code": "rw", "english": "Kinyarwanda",   "native": "Ikinyarwanda"},
    {"code": "sa", "english": "Sanskrit",      "native": "संस्कृतम्"},
    {"code": "sc", "english": "Sardinian",     "native": "sardu"},
    {"code": "sd", "english": "Sindhi",        "native": "سنڌي"},
    {"code": "se", "english": "Northern Sami", "native": "davvisámegiella"},
    {"code": "sg", "english": "Sango",         "native": "yângâ tî sängö"},
    {"code": "si", "english": "Sinhala",       "native": "සිංහල"},
    {"code": "sk", "english": "Slovak",        "native": "slovenčina"},
    {"code": "sl", "english": "Slovenian",     "native": "slovenščina"},
    {"code": "sm", "english": "Samoan",        "native": "gagana fa'a Samoa"},
    {"code": "sn", "english": "Shona",         "native": "chiShona"},
    {"code": "so", "english": "Somali",        "native": "Soomaaliga"},
    {"code": "sq", "english": "Albanian",      "native": "Shqip"},
    {"code": "sr", "english": "Serbian",       "native": "српски језик"},
    {"code": "ss", "english": "Swati",         "native": "siSwati"},
    {"code": "st", "english": "Sotho",         "native": "Sesotho"},
    {"code": "su", "english": "Sundanese",     "native": "Basa Sunda"},
    {"code": "sv", "english": "Swedish",       "native": "svenska"},
    {"code": "sw", "english": "Swahili",       "native": "Kiswahili"},
    {"code": "ta", "english": "Tamil",         "native": "தமிழ்"},
    {"code": "te", "english": "Telugu",        "native": "తెలుగు"},
    {"code": "tg", "english": "Tajik",         "native": "тоҷикӣ"},
    {"code": "th", "english": "Thai",          "native": "ไทย"},
    {"code": "ti", "english": "Tigrinya",      "native": "ትግርኛ"},
    {"code": "tk", "english": "Turkmen",       "native": "Türkmençe"},
    {"code": "tl", "english": "Tagalog",       "native": "Tagalog"},
    {"code": "tn", "english": "Tswana",        "native": "Setswana"},
    {"code": "to", "english": "Tonga (Tonga Islands)", "native": "faka Tonga"},
    {"code": "tr", "english": "Turkish",       "native": "Türkçe"},
    {"code": "ts", "english": "Tsonga",        "native": "Xitsonga"},
    {"code": "tt", "english": "Tatar",         "native": "татарча"},
    {"code": "tw", "english": "Twi",           "native": "Twi"},
    {"code": "ty", "english": "Tahitian",      "native": "Reo Tahiti"},
    {"code": "ug", "english": "Uyghur",        "native": "ئۇيغۇرچە"},
    {"code": "uk", "english": "Ukrainian",     "native": "Українська"},
    {"code": "ur", "english": "Urdu",          "native": "اردو"},
    {"code": "uz", "english": "Uzbek",         "native": "oʻzbek"},
    {"code": "ve", "english": "Venda",         "native": "Tshivenḓa"},
    {"code": "vi", "english": "Vietnamese",    "native": "Tiếng Việt"},
    {"code": "vo", "english": "Volapük",       "native": "Volapük"},
    {"code": "wa", "english": "Walloon",       "native": "walon"},
    {"code": "wo", "english": "Wolof",         "native": "Wollof"},
    {"code": "xh", "english": "Xhosa",         "native": "isiXhosa"},
    {"code": "yi", "english": "Yiddish",       "native": "ייִדיש"},
    {"code": "yo", "english": "Yoruba",        "native": "Yorùbá"},
    {"code": "za", "english": "Zhuang",        "native": "Saɯ cueŋƅ"},
    {"code": "zh", "english": "Chinese",       "native": "中文"},
    {"code": "zu", "english": "Zulu",          "native": "isiZulu"},
]

EXTRA_LANG= [
    {"code": "aw", "english": "Awadhi",       "native": "Awadhi"},
    {"code": "zu", "english": "Zulu",          "native": "isiZulu"},
]

ISO_639_1_CODES: List[str] = [
    # Source: https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes
    'aa','ab','ae','af','ak','am','an','ar','as','av','ay','az','ba','be','bg',
    'bh','bi','bm','bn','bo','br','bs','ca','ce','ch','co','cr','cs','cu','cv',
    'cy','da','de','dv','dz','ee','el','en','eo','es','et','eu','fa','ff','fi',
    'fj','fo','fr','fy','ga','gd','gl','gn','gu','gv','ha','he','hi','ho','hr',
    'ht','hu','hy','hz','ia','id','ie','ig','ii','ik','io','is','it','iu','ja',
    'jv','ka','kg','ki','kj','kk','kl','km','kn','ko','kr','ks','ku','kv','kw',
    'ky','la','lb','lg','li','ln','lo','lt','lu','lv','mg','mh','mi','mk','ml',
    'mn','mr','ms','mt','my','na','nb','nd','ne','ng','nl','nn','no','nr','nv',
    'ny','oc','oj','om','or','os','pa','pi','pl','ps','pt','qu','rm','rn','ro',
    'ru','rw','sa','sc','sd','se','sg','si','sk','sl','sm','sn','so','sq','sr',
    'ss','st','su','sv','sw','ta','te','tg','th','ti','tk','tl','tn','to','tr',
    'ts','tt','tw','ty','ug','uk','ur','uz','ve','vi','vo','wa','wo','xh','yi',
    'yo','za','zh','zu'
]

SAMPLE_TEXTS = {
"aa": {
    "long": (
        "Afar-ta geyfito bérta alele, gaashito hanè wadiyo teleqallo. "
        "Middikati guddo hiina, Afar af bahri daballo. Afar ti beylo bokki maali, "
        "taageli goflo warda. Hiina Afar guddo-ta ali wiya erfa fi lebbina matni."
    ),
    "short": "Afar-ta geyfito bérta alele, gaashito hanè wadiyo teleqallo. "
},
"ab": {
    "long": (
        "Аҧсуа бызшәа (абхаз. аҧсуа бызшәа) асаар ҿыц ауаажәларратә бызшәа зегьы рахь "
        "аҩызарақәа адҵааит. Ари бызшәа адунеи аҿы 190 000 лареи ашьҭазаара рҭоурых аҟны "
        "лаицәа далаҳаҭуан. Абхазтәтәи аҧыԥхьаӡара аиузаареи ахынтәразы аҿар диасимволҟәы "
        "азҵаарақәа иқәырхит."
    ),
    "short": "Аҧсуа бызшәа асаар ҿыц ауаажәларратә бызшәа зегьы ахь адҵааит."
},
"ae": {
    "long": (
        "Avestan language is an ancient Iranian tongue used primarily in the Zoroastrian scriptures. "
        "It comprises two dialects: Old Avestan and Young Avestan, preserved in the Avesta texts. "
        "Scholars reconstruct its phonology and grammar through comparative study with Vedic Sanskrit."
    ),
    "short": "Avestan language is an ancient Iranian tongue used primarily in the Zoroastrian scriptures."
},
"af": {
    "long": (
        "Afrikaans is ’n Wes-Germaanse taal wat hoofsaaklik in Suid-Afrika en Namibië gepraat word. "
        "Dit het begin as ’n vervormde Nederlandse omgangstaal in die Kaapkolonie. Hierdie taal "
        "het ’n ryk literêre tradisie en word deur miljoene mense as huistaal aangewend."
    ),
    "short": "Afrikaans is ’n Wes-Germaanse taal wat hoofsaaklik in Suid-Afrika en Namibië gepraat word."
},
"ak": {
    "long": (
        "Akan kasa no yɛ Gana man mu kasa a ɛwɔ Twi ne Fante mu. Akanfoɔ bɔ mmɛn kɛse wɔ "
        "Ghana anafo fam, na wɔnka nnwom ne amammerɛ mu ahorow a. Akan kasa no yɛ biribi "
        "a obi betumi de adwene ne borɔfoɔ kasa de kamfo ho."
    ),
    "short": "Akan kasa no yɛ Gana man mu kasa a ɛwɔ Twi ne Fante mu."
},
"am": {
    "long": (
        "አማርኛ ቋንቋ (Amharic) በኢትዮጵያ አገር ውስጥ ዋና ሰብስ ቋንቋ ናት። "
        "ግንዛቤያን በፊደላት የተዘጋጁ የካብ ፊደላትን ትምህርት ያበረታታል። "
        "ቋንቋዋ በብዙ ታሪክ ጊዜያት የተዋበ ስነፅንት አለው።"
    ),
    "short": "አማርኛ ቋንቋ በኢትዮጵያ አገር ውስጥ ዋና ሰብስ ቋንቋ ናት።"
},
"an": {
    "long": (
        "L’aragonés ye ua luenga románica que se fala en o norte d’Aragón, España. "
        "Ten orixes en latin vulgar como as oas luengas romanicas, y mantien parolas "
        "entes as oas vecinos, o catalán y l’espanyol. Chunto un pichato territorio, "
        "refleya ua cultura propia e tradicion de canzións y poesías."
    ),
    "short": "L’aragonés ye ua luenga románica que se fala en o norte d’Aragón, España."
},
"ar": {
    "long": (
        "العربية هي واحدة من أقدم اللغات السامية، وتُستخدم كلغة أم من قبل أكثر من 400 مليون "
        "شخص. تمتاز بنظام صرفي ونحوي متطور، وتوجد عدة لهجات عامية منتشرة في الوطن العربي، "
        "إضافةً إلى اللغة العربية الفصحى التي تُستخدم في الإعلام والأدب."
    ),
    "short": "العربية هي واحدة من أقدم اللغات السامية."
},
"as": {
    "long": (
        "অসমীয়া (অসমীয়া অসমীয়া) বুৰঞ্জীতে চক্ৰিয়াভাৱে পৰা এখন প্ৰাচীন ভাষা, যাক অসমতো তথা "
        "অসমোত্তৰৰ বিভিন্ন অঞ্চলত ব্যৱহাৰ কৰা হয়। বঙালীসহ অন্যান্য বানিজ্যিক ভাষাৰ সৈতে "
        "আহোম-চৌৰাস্ত্রিক সম্পৰ্কৰ ইতিহাস আছে। লিপি হিচাপে কাৰমুক্ লিপি প্রাচীন যুগতে "
        "উপস্থিত ছিল, আৰু বৰ্তমান বাংলা-অসমীয়া লিপি ব্যৱহৃত হয়।"
    ),
    "short": "অসমীয়া বুৰঞ্জীতে চক্ৰিয়াভাৱে পৰা এখন প্ৰাচীন ভাষা."
},
"av": {
    "long": (
        "Ава́р мацӀ (awar macʼ) — Бакъбаккул Кавказалда бугеб хьондакавказияб хъизамул авариял мацӀазул гӀаркьалил авар–гӀандиял къокъадул мацӀ, жиб Дагъистаналъул мацӀазул бищун тӀибитӀараб, кӀалъалезул рахъалъ, киналниги бакъбаккул кавказиял мацӀазда гьорлӀ кӀиабилебги кколеб. Эб буго аваразул раҳдал мацӀ."
    ),
    "short": "Ава́р мацӀ — авар–гӀандиял къокъадул мацӀ, жиб Дагъистаналъул мацӀазул бищун тӀибитӀараб."
},

"ay": {
    "long": (
        "Aymara aruskipañani jach’a maranak luräwinak uñjta, jach’a arunak suma "
        "qhananchasiñataki. Aka arunaka ukankiwa qillqatanaka, qhiparataki jiwapachi, "
        "Katari apaqata, Taqui Japu ukanak jach’a aruruwi. Aymara aruxa urupanakampi, "
        "ch’amanakampi, payllanakan walt’äwipaxa sumaw jaqi arsuñasakiwa."
    ),
    "short": "Aymara aruskipañani jach’a maranak luräwinak uñjta."
},
"az": {
    "long": (
        "Azərbaycan dili Türk dilləri ailəsinə məxsus dillərdən biridir və təxminən 30 milyon "
        "insan tərəfindən əsasən Azərbaycanda, İranda, Gürcüstanda və Türkiyədə danışılır. "
        "Bu dil latın qrafikasından istifadə edir, zəngin söz ehtiyatına və geniş ədəbi "
        "ənənələrə malikdir."
    ),
    "short": "Azərbaycan dili Türk dilləri ailəsinə məxsus dillərdən biridir."
},
"ba": {
    "long": (
        "Башҡорт теле Ҡариҙа йәшәгән милләткә ҡараған татар-башҡорт тел төркөмөнә инә һәм "
        "260 меңдән ашыу кеше тарафынан туған тел булып ҡабул ителә. Башҡорт әҙәби теле "
        " XIX быуат уртаһында формалаша башлаған, ул кириллицаға нигеҙләнгән алфавитта "
        "яҙыулы текстарҙан тора."
    ),
    "short": "Башҡорт теле Ҡариҙа йәшәгән милләткә ҡараған татар-башҡорт тел төркөмөнә инә."
},
"be": {
    "long": (
        "Беларуская мова належыць да ўсходнеславянскай групы і з'яўляецца дзяржаўнай мовай "
        "Беларусі. Яна выкарыстоўвае кірыліцу і мае багатую літаратурную традыцыю, уключаючы "
        "твары Янкі Купалы і Якуба Коласа. На беларускай гавораць больш за 7 мільёнаў чалавек."
    ),
    "short": "Беларуская мова належыць да ўсходнеславянскай групы і з'яўляецца дзяржаўнай мовай."
},
"bg": {
    "long": (
        "Българският език е член на южнославянския клон на славянските езици и е официален в "
        "Република България. Той използва кирилица и притежава богата фолклорна и литературна "
        "традиция, датираща от Средновековието, включително произведения като „История славянобългарска“."
    ),
    "short": "Българският език е член на южнославянския клон на славянските езици и е официален в България."
},
"bh": {
    "long": (
        "भोजपुरी भारत के उत्तर प्रदेश, बिहार और नेपाल के तराई क्षेत्र में बोली जाने वाली "
        "एक इंडो-आर्याई भाषा है। इसकी अपनी लिपि नहीं है, लेकिन देवनागरी लिपि में लिखा जाता है। "
        "भोजपुरी में लोकगीत, कविता और फिल्मी गीतों की समृद्ध परंपरा विद्यमान है।"
    ),
    "short": "भोजपुरी भारत के उत्तर प्रदेश, बिहार और नेपाल के तराई क्षेत्र में बोली जाने वाली एक भाषा है।"
},
"bi": {
    "long": (
        "Bislama hemi wan bikfala pidgin we ol man long Vanuatu oli yusum olsem wan lingua franca. "
        "I gat sampela ideo long Inglis, Frens, na ol lokal tok. Bia yumi tok long Bislama, yumi save "
        "tok olsem 'Mi go blong kakae' olsem wan kakae bai mi kaikai. I gat ol buk na paipa long Bislama."
    ),
    "short": "Bislama hemi wan pidgin we ol man long Vanuatu oli yusum olsem lingua franca."
},
"bm": {
    "long": (
        "Bamanakan ye kan bamanankan na don ni tilegɛ do ni Mali, Burkina Faso, Côte d’Ivoire, na Guinea. "
        "O ye tilegɛ min ye wanen, o ye telew bamanakan kɛra fila donni. Ne bamanakan don korɔni ka ban man "
        "na yera kɛ kɛra kan, ni i ye wan kɛla kan mɛn tɛ ni cogo donni."
    ),
    "short": "Bamanakan ye kan bamanankan na don ni tilegɛ do ni Mali, Burkina Faso, Côte d’Ivoire, na Guinea."
},
"bn": {
    "long": (
        "বাংলা ভাষা ইন্দো-আর্য ভাষা পরিবারের একটি গুরুত্বপূর্ণ সদস্য, যা প্রধানত বাংলাদেশ ও পশ্চিমবঙ্গের "
        "মানুষের মাতৃভাষা। এটির একটি সমৃদ্ধ সাহিত্য, কবিতা ও গান–সংগীতের ঐতিহ্য রয়েছে, যার মধ্যে "
        "রবীন্দ্রনাথ ঠাকুর ও কাজী নজরুল ইসলামের রচনাবলি বিশেষ উল্লেখযোগ্য।"
    ),
    "short": "বাংলা ভাষা ইন্দো-আর্য ভাষা পরিবারের একটি গুরুত্বপূর্ণ সদস্য।"
},
"bo": {
    "long": (
        "བོད་སྐད། བོད་མི་ཚེ་རིང་གཙོ་གནས་འབྲེལ་གྱི་སྐད་ཆ། དེ་རིང་བོད་ཁང་གི་མི་རྟག་མི་ཚེ་གནས་ཚུ་གི་རྣམ་ཐར་དང་འགྱུར་བར་སྤྱོད་ཀྱི་སྐད་ཆ་ཡིན། སྐད་ཡིག་རྩ་སྟོན་ཨ་མི་ཡིག་གཟུགས་ལ་སྤྲོད་ཡོད།"
    ),
    "short": "བོད་སྐད་བོད་མི་ཚེ་རིང་གཙོ་གནས་འབྲེལ་གྱི་སྐད་ཆ།"
},
# Prossimi 10 blocchi di SAMPLE_TEXTS

"br": {
    "long": (
        "Brezhoneg zo yezh kembraek rannvro Breizh hag a vez komzet ivez e Bro-C’hall hag er vroioù all. "
        "En deus ur yezh lennegel modern a zo bet adkavet diwar ar c’halloud yezh e deroù XXvet kantved. "
        "Al luc'h-mañ a zo bet stlenet gant al levrioù, ar c'haned santel hag an hentoù sevenadurel brezonek."
    ),
    "short": "Brezhoneg zo yezh kembraek rannvro Breizh hag a vez komzet ivez e Bro-C’hall hag er vroioù all."
},
"bs": {
    "long": (
        "Bosanski jezik pripada južnoslavenskoj grupi slavenskih jezika i službeni je jezik Bosne i Hercegovine."
        "Koristi latinično pismo i poznat je po bogatoj književnosti, poeziji i narodnoj tradiciji. Bosanski pisci su "
        "ostavili značajan trag u književnosti regije."
    ),
    "short": "Bosanski jezik pripada južnoslavenskoj grupi slavenskih jezika i službeni je jezik Bosne i Hercegovine." 
},
"ca": {
    "long": (
        "El català és una llengua romànica parlada principalment a Catalunya, el País Valencià, les Illes Balears, "
        "la Franja de Ponent, Andorra i la ciutat d'Alguer a Sardenya. Té una literatura rica des de l’edat mitjana, "
        "amb autors de la talla de Ramon Llull i Jacint Verdaguer. Avui dia és cooficial a Catalunya i altres territoris."
    ),
    "short": "El català és una llengua romànica parlada principalment a Catalunya, el País Valencià, les Illes Balears, la Franja de Ponent, Andorra i la ciutat d'Alguer a Sardenya."
},
"ce": {
    "long": (
        "Нохчийн мотт (чеч. Нохчийн мотт, Нохчийн мотт) хьун юго-кавказ машинн мотт молу а. "
        "Ватанан дийцар Дайреьжи, Ингушетия, Гудермес хиллала къонах лаьцна. Нохчийн мотт къилдэр кулютур "
        "ва еру ю, поэт-хьочалаш дойла къобал дийцар."
    ),
    "short": "Нохчийн мотт хьун юго-кавказ машинн мотт молу а."
},
"ch": {
    "long": (
        "Finu’ Chamoru este i finu’ tano’ gi Islas Mariana, na habla gi Guam yan gi Northern Mariana Islands. "
        "Este finu’ un famagu’on gi familia Austronesian yan ha na’influi’ put i Español yan Inglés. "
        "Ha’ån usa i ortografía Latín-ñiha yan guaha un korpuusan gi litteratura yan dokumentu eskribi "
        "ni’ manman mås hao-ña."
    ),
    "short": "Finu’ Chamoru este i finu’ tano’ gi Islas Mariana, na habla gi Guam yan gi Northern Mariana Islands."
},
"co": {
    "long": (
        "U corsu hè una lingua rumagnola parlata in Corsica è in Sicilia. Hè strettamente imparentata cù u talianu, "
        "ma hà e so peculiarità fonetiche è lessicali. In Corsica hè difesa è promossa da a lingua scritta nantu à i "
        "media, l’educazione è a musica tradiziunale."
    ),
    "short": "U corsu hè una lingua rumagnola parlata in Corsica è in Sicilia."
},
"cr": {
    "long": (
        "Nēhinawēwin (Cree) iskwêwkanāsk maskēkow iskwāsis wīkinac kīwēwin ohci kīwēwinōta. "
        "Nehiyawēwin nīpīwak pimipahtān mīna nistam īthāskwa kaniy nitēmapiy. Istomīstan, tawâw pimipahtāhkaniw,tēpīhkēwin, mīna māna kākīc kîkwayaw nīhiyaw. "
    ),
    "short": "Nēhinawēwin iskwêwkanāsk maskēkow iskwāsis wīkinac kīwēwin ohci kīwēwinōta."
},
"cs": {
    "long": (
        "Čeština je západoslovanský jazyk patřící do rodiny indoevropských jazyků. Je úředním jazykem České "
        "republiky a jedním z úředních jazyků Evropské unie. Má bohatou literaturu od dob středověkého kronikářství "
        "a klasiky jako Karel Čapek či Franz Kafka."
    ),
    "short": "Čeština je západoslovanský jazyk patřící do rodiny indoevropských jazyků."
},
"cu": {
    "long": (
        "Словѣньскъ ѩꙁꙑкъ старославѣньскъ мꙋдьрость словнꙑцꙗ ꙗ҆зꙑкъ ѧꙁꙑкъ хръстꙻнъ. Сѵꙁдь такꙗ бѣше ѡтѹ ꙁꙑка, сътворьнъ ѿ ѡложѣнꙑ ꙗ҆зꙑка учениꙗ. "
        "Въ црькве словенъскъ ѧꙁꙑкъ пꙋтѹлъ мꙋдьрѣѧ сѵꙁдьбꙑ слова."
    ),
    "short": "Словѣньскъ ѩꙁꙑкъ старославѣньскъ мꙋдьрость словнꙑцꙗ ꙗ҆зꙑкъ."
},
"cv": {
    "long": (
        "Чӑваш чӗлхи (Çăvaš čĕlhĭ) хăлӑх чӗлхи приложение çутлă хуçар вӑйлӗ текстĕҫĕ. "
        "Анне тухтарашни çуллар çултармасть мишĕ тĕп тупра çурнă текстĕҫӗ кĕрештĕп,"
        "архивĕ сӑнать пĕчĕк созлор."
    ),
    "short": "Чӑваш чӗлхи хăлӑх чӗлхи приложение çутлă хуçар вӑйлӗ текстĕҫĕ."
},
"cy": {
    "long": (
        "Mae’r Gymraeg yn iaith Celtaidd a siaredir yn bennaf yng Nghymru ac yn rhan o Loegr. "
        "Mae ganddi hanes hir o lenyddiaeth o’r chwedloniaeth gynnar hyd at ysgrifau modern, gan gynnwys gwaith "
        "Dafydd ap Gwilym a Gwenallt. Yn y 21ain ganrif, mae’r defnydd o’r Gymraeg yn parhau i dyfu mewn addysg, "
        "media a diwylliant."
    ),
    "short": "Mae’r Gymraeg yn iaith Celtaidd a siaredir yn bennaf yng Nghymru ac yn rhan o Loegr."
},
"da": {
    "long": (
        "Dansk er et nordgermansk sprog, der primært tales i Danmark og dele af Grønland. "
        "Sproget har udviklet sig fra oldnordisk og har en rig litterær tradition med forfattere "
        "som Hans Christian Andersen og Karen Blixen. I dag er dansk officielt sprog i Danmark og "
        "bredt forstået i Skandinavien."
    ),
    "short": "Dansk er et nordgermansk sprog, der primært tales i Danmark og dele af Grønland."
},
"de": {
    "long": (
        "Deutsch ist eine westgermanische Sprache und Amtssprache in Deutschland, Österreich und "
        "der Schweiz. Mit über 100 Millionen Muttersprachlern ist es eine der meistgesprochenen "
        "Sprachen Europas. Die deutsche Literatur erstreckt sich von mittelalterlichen Epen "
        "über klassische Werke von Goethe und Schiller bis hin zu zeitgenössischen Autoren."
    ),
    "short": "Deutsch ist eine westgermanische Sprache und Amtssprache in Deutschland, Österreich und der Schweiz."
},
"dv": {
    "long": (
        "ދިވެހިން ތަންޖާ ބެހޭ ވަކި ކޮންމެނި ހިންގާމެއް ހަމަޖެ ހޮދިޔާރީ ބާވަތްތަން ސިބެހި ކަހަލާ ބަސްވެބާނެ. "
        "ތަންޖާގެ ނާދަވަރު އާއި ތެރެއެއް ފަށައިފި ވާދަވަރުން ވެގިން ރިދާރިއަށް."
    ),
    "short": "ދިވެހިން ތަންޖާ ބެހޭ ވަކި ކޮންމެނި ހިންގާމެއް ހަމަޖެ."
},
"dz": {
    "long": (
    """རྒྱ་རྫི་དབྱིབས་འདི་ འཛམ་གླིང་དབུས་ཕྱོགས་མཚམས་ཐིག་ཁར་ འཛམ་གླིང་གི་དཔེ་གཟུགས་འདི་ལུ་ ཆ་ཤས་རྩམ་ཅིག་སྦེ་རེགཔ་ལས་ འཛམ་གླིང་གི་དཔེ་གཟུགས་དང་ རྒྱ་རྫི་དབྱིབས་ཀྱི་བར་ནའི་དཔྱ་ཚད་ཀྱི་ཚད་གཞི་འདི་ གཞན་ཁ་ག་སྟེ་ཡང་མེད་པར་ འཛམ་གླིང་དབུས་ཕྱོགས་མཚམས་ཐིག་ཁར་དོ་མཉམ་དོ་ཡོདཔ་ཨིན།
    པི་གྲི་ཨི་ཨེསི་འདི་ ལེགས་ཐོན་ཅན་གྱི་རྣམ་པ་མ་འདྲཝ་ སྒར་དང་དྲོད་ ཨེ་ལིག་ཀྲོ་ཨིསི་ཀྲེ་ཀྲིགསི་དང་ ཨེ་ལིག་ཀྲོ་གྲའི་ན་མིགསི་ ཕུའིལདྲ་ཕོལོ་དང་ བསྣར་སྐུམ་རིག་པ་ དེ་ལས་ ཀཱོན་ཀྲམ་འཕྲུལ་རིག་ལ་སོགས་པ་ཚུ་གསལ་བཀོད་འབད་ནི་གི་དོན་ལས་ལག་ལེན་འཐབ་ཨིན།
    མི་རིགས་ཀྱི་དབྱེ་བ་གི་སབེ་སྡེ་ཚན་འགྱོ་མི་འདི་ལུ་ མཐོང་སྣང་གཞན་འདི་ འབྱུང་རབ་ཅིག་དང་ལམ་སྲོལ་ཅིག་ དེ་ལས་ཁ་སྐད་ཅིག་སྦེ་ཡོདཔ་ཨིན།
    ཁ་ཆེའི་ལྷ་ཁང་འདི་གསརཔ་བསྒང་ སྦོམ་སྦེ་ ཀ་ཁྱིམ་འདི་ཚུ་ག་ནི་ཡང་མེདཔ་མ་ཚད་ མཛེས་རྒྱན་ཡང་ག་ནི་ཡང་མ་བཏགས་པར་ སྒྲིང་ཁྱིམ་འདི་དམའ་ཤོས་སྦེ་སྡོད་ཡོདཔ་ཨིན།"""
    ),
    "short": "ཀེ་ན་དྲ་ལུ་ཡོད་པའི་ ཀྲོ་རོན་ཀྲོ་གི་ས་ཁོངས་ ཨོན་ཀྲ་རི་ཡ་ཟེར་ས་ལུ་ཡང་ མོ་གི་ཁྱིམ་ཡོདཔ་ཨིན་པས།"
},
"ee": {
    "long": (
        "Eʋegbe ƒe ɖe asi na Ghaná kple Tɔgó, le avonyi siawo me. Ne yewo dɔwɔwɔnaɖewo kple "
        "tsitsi akpacovitɔwo katã, é ŋuti wòadofolkɔkɔe eye woatsɔ dzidzɔ kple dɔwɔla nunana na "
        "geɖeɖe aɖeke sia siwo va le dɔwɔwɔkpɔkpɔ me."
    ),
    "short": "Eʋegbe ƒe ɖe asi na Ghaná kple Tɔgó, le avonyi siawo me."
},
"el": {
    "long": (
        "Ελληνικά (ελλην. Ελληνικά, [eleˈnica]) είναι μια γλώσσα που ανήκει στην οικογένεια "
        "των ινδοευρωπαϊκών γλωσσών και ομιλείται κυρίως στην Ελλάδα και την Κύπρο. Έχει "
        "πλούσια ιστορία πεζογραφίας και ποίησης, από τα αρχαία κείμενα μέχρι τη σύγχρονη λογοτεχνία. "
        "Η ελληνική αλφάβητος προέρχεται από το φοινικικό αλφάβητο."
    ),
    "short": "Ελληνικά είναι μια γλώσσα που ανήκει στην οικογένεια των ινδοευρωπαϊκών γλωσσών."
},
"en": {
    "long": (
        "English is a West Germanic language that originated in early medieval England and eventually "
        "became a global lingua franca. It has a vast vocabulary, borrowing words from Latin, French, "
        "Germanic tongues, and others. English literature ranges from Old English poetry like Beowulf to "
        "modern novels by authors such as George Orwell and J.K. Rowling."
    ),
    "short": "English is a West Germanic language that originated in early medieval England and eventually became a global lingua franca."
},
"eo": {
    "long": (
        "Esperanto estas planlingvo kreita de Ludoviko Zamenhof en 1887 kun la celo faciligi "
        "internacian komunikadon. Ĝi havas plej simplan gramatikon, nefleksiajn artikolojn, "
        "kaj ortografion bazitan sur latina alfabeto. Hodiaŭ ĝi estas parolata de centoj da miloj "
        "da homoj tutmonde."
    ),
    "short": "Esperanto estas planlingvo kreita de Ludoviko Zamenhof en 1887 kun la celo faciligi internacian komunikadon."
},
"es": {
    "long": (
        "El español, o castellano, es una lengua romance que evolucionó del latín vulgar traído a la "
        "Península Ibérica por los romanos. Es hablada por más de 460 millones de personas como lengua "
        "materna en España, América Latina y otras regiones. Posee una rica tradición literaria que "
        "incluye figuras como Miguel de Cervantes y Gabriel García Márquez."
    ),
    "short": "El español, o castellano, es una lengua romance que evolucionó del latín vulgar traído a la Península Ibérica por los romanos."
},
"et": {
    "long": (
        "Eesti keel kuulub soome-ugri keelte hulka ja on ametlik keel Eestis. "
        "See on arenenuud muinassoome keelest ning omab rikkalikku rahvaluule- ja kirjanduslugu. "
        "Tänapäeval kasutatakse eesti keelt nii igapäevaelus kui ka teaduses ja meedias."
    ),
    "short": "Eesti keel kuulub soome-ugri keelte hulka ja on ametlik keel Eestis."
},
"eu": {
    "long": (
        "Euskara edo euskera da Euskal Herrian eta Auñamendin hitz egiten den hizkuntza bakarra, "
        "eta ez du inongo loturarik Europako hizkuntza indoeropearrekin. "
        "Bere jatorria misterio bat da, eta Euskal Autonomia Erkidegoan, Nafarroan eta Ipar Euskal Herrian "
        "erdigune eta hainbat udalerritan ofiziala da."
    ),
    "short": "Euskara edo euskera da Euskal Herrian eta Auñamendin hitz egiten den hizkuntza bakarra."
},
"fa": {
    "long": (
        "فارسی یا فارسی دری یکی از زبان‌های هندوایرانی شاخهٔ زبان‌های هندوئی است که در ایران، "
        "افغانستان (در شکل دری) و تاجیکستان (در شکل تاجیکی) سخن گفته می‌شود. "
        "این زبان دارای ادبیات غنی است که از شعر حافظ و سعدی تا نویسندگان معاصر گسترده شده است."
    ),
    "short": "فارسی یا فارسی دری یکی از زبان‌های هندوایرانی شاخهٔ زبان‌های هندوئی است که در ایران، افغانستان و تاجیکستان سخن گفته می‌شود."
},
"ff": {
    "long": (
        "Fulfulde on Pulaar e Niger ja Senegal, nden wolof, franse e arab kiɗi. "
        "Kadi, fulfulde tammunde be ndaŋngol suklaare, teeŋngol e jayngol. "
        "Ko woni pullo’en ɓe njangu mawɗi, ɓe njogu cuɓiti e sehil. "
        "Cokkal fuɗɗi pulaar fof ñoo fow."
    ),
    "short": "Fulfulde on Pulaar e Niger ja Senegal, nden wolof, franse e arab kiɗi."
},
"fi": {
    "long": (
        "Suomen kieli kuuluu uralilaiseen kielikuntaan ja on yksi Euroopan vanhimmista kirjallisesti "
        "tallennetuista kielistä. Se kehittyi muinaisesta kantasuomesta ja jakaa paljon rakenteellisia "
        "piirteitä viron kanssa. Nykyään suomea puhutaan virallisena kielenä Suomessa ja se näkyy "
        "vahvasti kansallisessa kulttuurissa."
    ),
    "short": "Suomen kieli kuuluu uralilaiseen kielikuntaan ja on yksi Euroopan vanhimmista kirjallisesti tallennetuista kielistä."
},
"fj": {
    "long": (
        "Na vosa vaka-Viti e dua na vosa ni vanua e dau vakayagataki ena Viti. E tauyavutaki mai "
        "ena vosa vaka-Ratu, ka vakatorocaketaki me vaka na vosa vaka-cola ka vakayalo. "
        "E tiko e levu na itukutuku kei na cakacaka vakaloma e vosa vaka-Viti, ka vakayagataki "
        "e na cakacaka vakavanua, i dua na kedra talei."
    ),
    "short": "Na vosa vaka-Viti e dua na vosa ni vanua e dau vakayagataki ena Viti."
},
"fo": {
    "long": (
        "Føroyskt er eitt vestrumensk mál, sum snýr í Føroyum og á grønlandi, og tað er týtt "
        "av norrønum máli. Tað hevur eina ríka søgu við bókmentum frá miðøld til nýggjasta tíð, "
        "tá føroyskir rithøvundar sum Jørgen-Frantz Jacobsen og William Heinesen lýsa land og fólk. "
        "Málráð og skúlagongd byggja á føroyskt sum leiðandi samfelagsmáli."
    ),
    "short": "Føroyskt er eitt vestrumensk mál, sum snýr í Føroyum og á Grønlandi, og tað er týtt av norrønum máli."
},
"fr": {
    "long": (
        "Le français est une langue romane issue du latin vulgaire parlée principalement en France, "
        "en Belgique, en Suisse, au Canada et dans plusieurs pays africains. "
        "Il possède une riche tradition littéraire incluant Victor Hugo, Molière et Simone de Beauvoir. "
        "La langue française est également l’une des six langues officielles des Nations Unies."
    ),
    "short": "Le français est une langue romane issue du latin vulgaire parlée principalement en France, en Belgique, en Suisse, au Canada et dans plusieurs pays africains."
},
"fy": {
    "long": (
        "Frysk is in West-Germaanske taal dy’t foaral sprutsen wurdt yn Fryslân, in provinsje fan Nederlân. "
        "It hat in lange literêre tradysje, mei dichters as Gysbert Japiks en Tsjêbbe Hettinga. "
        "Frysk is nau verwant oan it Ingelsk en hat al syn eigen grammatika en wurdskat, "
        "dy’t it ûnderskiedt fan oare Nederlânske dialekten."
    ),
    "short": "Frysk is in West-Germaanske taal dy’t foaral sprutsen wurdt yn Fryslân, in provinsje fan Nederlân."
},
"ga": {
    "long": (
        "Gaeilge nó Gaeilge na hÉireann is teanga Ceilteach a labhraítear den chuid is mó in Éirinn. "
        "Tá sí i mbéal mhuintir Chonamara, Chiarraí, Mhaigh Eo, agus i bpobail eile Gaeltachta. "
        "Tá litríocht Ghaelach shaibhir ann, lena n-áirítear amhráin, filíocht, agus scripteanna drámaíochta."
    ),
    "short": "Gaeilge nó Gaeilge na hÉireann is teanga Ceilteach a labhraítear den chuid is mó in Éirinn."
},

"gd": {
    "long": (
        "‘S e Gàidhlig a th’ ann an cànan Ceilteach a tha air a bruidhinn sa Ghàidhealtachd agus air"
        " eilean Eilean Mhanainn. Tha dualchas litreachais fhathast beò, le obair-litrigeach àrsaidh"
        " leithid ‘Dàn Theaghlach’ agus le neach-cruinneachaidh ath-nuadhachail mar Sorley MacLean. "
        "Tha foghlam tro mheadhan na Gàidhlig a’ dol am feabhas le sgoiltean dìoghrasach."
    ),
    "short": "‘S e Gàidhlig a th’ ann an cànan Ceilteach a tha air a bruidhinn sa Ghàidhealtachd."
},
"gl": {
    "long": (
        "O galego é unha lingua románica falada principalmente en Galicia, no noroeste de España. "
        "Ten semellanzas co portugués e ambas compartiron textos medievais clave como o ‘Códice Calixtino’. "
        "Na actualidade, existe unha comunidade literaria activa e numerosas publicacións en galego."
    ),
    "short": "O galego é unha lingua románica falada principalmente en Galicia, no noroeste de España."
},
"gn": {
    "long": (
        "Avañe’ẽ ha’e peteĩ ñe’ẽ guarani ndive oñe’ẽva Paraguái, Brasil retã, Bolivia ha Argentina"
        "rupi. Oĩ heta ñe’ẽkuéra momarandu ha’eñe’ẽva, ha taha’e avei ñe’ẽkuéra oñembohasáva hipi "
        "guarani tenonde ha’eha. Avañe’ẽ ojehupyty heta ñe’ẽtabare ha literatura, jey jehechauka ha ñe’ẽ "
        "ñe’ẽporãguasu."
    ),
    "short": "Avañe’ẽ ha’e peteĩ ñe’ẽ guarani ndive oñe’ẽva Paraguái, Brasil retã, Bolivia ha Argentina."
},
"gu": {
    "long": (
        "ગુજરાતી ભારતની પશ્ચિમી રાજ્ય ગુજરાતમાં બોલાતી ભારતીય ઇંડો-આર્યન શાખાની એક ભાષા છે. "
        "ગુજરાતીમાં અક્ષરમાળાના 16 સ્વરો અને 36 વ્યંજનોરવાંગુણોને સમાવી છે. તેનો સાહિત્યનો ઇતિહાસ "
        "મધ્યકાલથી શરૂ થાય છે, જેમાં સાહિત્યકાર કવિઓ જેમકે મીરાબાઈ અને કેકભાઇ રાણછોડભાઇએ ખાસ યોગદાન આપ્યું છે."
    ),
    "short": "ગુજરાતી ભારતની પશ્ચિમી રાજ્ય ગુજરાતમાં બોલાતી ભારતીય ઇંડો-આર્યન શાખાની એક ભાષા છે."
},
"gv": {
    "long": (
        "Gaelg, ny Gaelg Vanninagh, t’eh çhengagh yn sexhey Vannin as t'er cummalit dy Yernish. "
        "Ta screeu syn çhing ennagh ta kiart er nyn oid, liorish Manninagh vx imee. Ta cliaghteyn jannoo arrane, "
        "poiyn as focklyn stiagh ooie benneen ayn chyndaaghtagh, as ta cummayrty as shoh magh ychooid jeh lipyn."
    ),
    "short": "Gaelg, ny Gaelg Vanninagh, t’eh çhengagh yn sexhey Vannin as t'er cummalit dy Yernish."
},
"ha": {
    "long": (
        "Hausa wani harshen Chadic ne na kabilar Hausa da ake yawan amfani da shi a Arewa maso yammacin Najeriya "
        "da Nijar, har ila yau ana jin shi a kasashen Kamaru, Chadi, da Sudan. Yana dauke da haruffan Ajami "
        "da Latin, kuma yana da wadataccen adabi da wakokin gargajiya."
    ),
    "short": "Hausa wani harshen Chadic ne na kabilar Hausa da ake yawan amfani da shi a Arewa maso yammacin Najeriya da Nijar."
},
"he": {
    "long": (
    "עברית היא שפה שמית המדוברת כיום בעיקר בישראל, בה היא השפה הרשמית. "
    "לאחר שנים של שימוש טקסי וכתבי בתנ\"ך, חודשה כלשון מדוברת במאה ה-19. "
    "לשון זו מתאפיינת בשימוש בכתיב חסר ונכנסה בהתחדשותה למודרניזציה ולקליטת מלים "
    "מקצועיות בתחומים שונים."
),

    "short": "עברית היא שפה שמית המדוברת כיום בעיקר בישראל, בה היא השפה הרשמית."
},
"hi": {
    "long": (
        "हिन्दी भारतीय-आर्य भाषा परिवार की एक प्रमुख भाषा है, जिसे देवनागरी लिपि में लिखा जाता है। "
        "यह भारत की राजभाषा है और इसे सर्वाधिक लोग भाषाई रूप में बोलते हैं। "
        "हिन्दी साहित्य में सूरदास, तुलसीदास, प्रेमचंद और महादेवी वर्मा जैसे लेखकों का योगदान महत्वपूर्ण है।"
    ),
    "short": "हिन्दी भारतीय-आर्य भाषा परिवार की एक प्रमुख भाषा है, जिसे देवनागरी लिपि में लिखा जाता है।"
},
"ho": {
    "long": (
        "Hiri Motu em motu aninitu noglik long Papua Niugini. Em bin wok olsem lingua-franca long ol lain lain, "
        "na em bin wanpela official tokples bilong gavman na edukesen. Hiri Motu i yusim isi grama na liklik vokabuleri "
        "sapos yu putim long moa kompleks Motu."
    ),
    "short": "Hiri Motu em motu aninitu noglik long Papua Niugini."
},
"hr": {
    "long": (
        "Hrvatski jezik je južnoslavenski jezik kojim se službeno koriste Republika Hrvatska i Bosne i Hercegovine. "
        "Koristi latinicu te je poznat po standardiziranoj normi koja se temelji na štokavskom narječju. "
        "Bogata je kulturna i književna baština, s djelima naglašenih autora poput Marka Marulića i Miroslava Krleže."
    ),
    "short": "Hrvatski jezik je južnoslavenski jezik kojim se službeno koriste Republika Hrvatska i Bosne i Hercegovine."
},
"ht": {
    "long": (
        "Kreyòl ayisyen se yon lang kreyòl ki baze sou Franse avèk enfliyans Afriken ak Taino. "
        "Li devlope nan epòk kolonyal la, lè esklav yo te bezwen kominike youn ak lòt ak avèk kolon yo. "
        "Jodi a, li se youn nan lang ofisyèl Ayiti, pale pa plis pase 10 milyon moun atravè mond lan."
    ),
    "short": "Kreyòl ayisyen se yon lang kreyòl ki baze sou Franse avèk enfliyans Afriken ak Taino."
},
"hu": {
    "long": (
        "Magyar nyelv a finnugor nyelvcsaládba tartozik, és Magyarország hivatalos nyelve. "
        "Európa közepén beszélik, mintegy 13 millió ember anyanyelve. A magyar nyelvnek bonyolult "
        "ragos ragozása van, és irodalmi hagyományai Tamási Árontól Radnóti Miklósig terjednek."
    ),
    "short": "Magyar nyelv a finnugor nyelvcsaládba tartozik, és Magyarország hivatalos nyelve."
},
"hy": {
    "long": (
        "Հայերենը (հայ. հայերեն) Ընդհանրական ինդոևրոպական լեզվաուղղության քրիստոնեական ժամանակներից գոյություն ունեցող "
        "բերաժմի մտերիմ լեզուն է: Խորհրդային միության փլուզումից հետո, Հայաստանի Հանրապետության անկախության "
        "հետ հայերենը վերականգնվեց և պահպանվեց որպես պետական լեզու:"
    ),
    "short": "Հայերենը (հայ. հայերեն) առկա է քրիստոնեական ժամանակներից գործընթացվող լեզու է:"
},
"hz": {
    "long": (
        "Otjiherero okuhera oku oyendji vpona vya Herero mu Namibia na empepe ga Botswana. "
        "Oyi kumwe nae famu ya Bantu na oyi na ova class dze fomu dza nomo na omagandi "
        "gokununthana muvaha dze fomu dza vawerero. Oyi telekwa mu Latin script na oyi na "
        "ovipangelo vyonene vya ovaherero vo wonseo."
    ),
    "short": "Otjiherero okuhera oku oyendji vpona vya Herero mu Namibia na empepe ga Botswana."
},
"ia": {
    "long": (
        "Interlingua es un lingua auxiliar international basate super le radices commun del linguas romances. "
        "Su gramatica e vocabulario es disegnate pro esser intelligibile sin studio prolongate, especialmente "
        "a personnas familiar con latino, italiano, espaniol, francese e portuguese. In 1951 es publicate le prime "
        "dictionarios e grammaticas oficial."
    ),
    "short": "Interlingua es un lingua auxiliar international basate super le radices commun del linguas romances."
},
"id": {
    "long": (
        "Bahasa Indonesia adalah bahasa nasional Republik Indonesia dan dipakai oleh lebih dari 200 juta orang sebagai "
        "bahasa kedua, sedangkan penutur asli berjumlah sekitar 43 juta. Ia adalah varian baku dari Melayu Riau, "
        "diadopsi sebagai bahasa persatuan saat proklamasi kemerdekaan tahun 1945. Sistem ejaannya menggunakan huruf "
        "Latin dan tidak mengenal huruf kapital pada kata umum."
    ),
    "short": "Bahasa Indonesia adalah bahasa nasional Republik Indonesia dan dipakai oleh lebih dari 200 juta orang sebagai bahasa kedua."
},
"ie": {
    "long": (
        "Interlingue (oltretutto vocat Occidental) es un lingua auxiliar publicate per Otto Jespersen in 1922. "
        "Illo es basate super le vocabulario romance con un grammatica reducite e regules simple, apta pro "
        "communi international sin tribulation substantiale. In le decadas 1930 e 1940, Alcunes revistas e "
        "periodicos esseva publicate in Interlingue."
    ),
    "short": "Interlingue es un lingua auxiliar publicate per Otto Jespersen in 1922."
},
"ig": {
    "long": (
        "Igbo bu asụsụ ndị Igbo si na steeti Anambra, Imo na Enugu nọ ndịda ọwụwa anyanwụ Naịjirịa. "
        "Ọ dịrị n'ime asụsụ Benue-Kwa nke Afroasiatic. Igbo nwere ịma okwu site na ụda olu, na e ji "
        "oge etiti ya mara ya. A na-ede ya na otu mkpụrụ edemede Latin e mere ihe ọzọ maka ụda asụsụ ya."
    ),
    "short": "Igbo bu asụsụ ndị Igbo si na steeti Anambra, Imo na Enugu nọ ndịda ọwụwa anyanwụ Naịjirịa."
},
"ii": {
    "long": (
        "ꆈꌠ꒿ Nuosuhxop qi Yi mfad, Sichuan Yi unggairi yi lang man. Yi kwa nuosu ndap ngvop "
        "va lsop, yi sypa ndap mop mxuop. Yi gha muop qie gha myop pat, lhag lup na nuosu cfap, "
        "yasop ha myopa nuosu saw feepa."
    ),
    "short": "ꆈꌠ꒿ Nuosuhxop qi Yi mfad, Sichuan Yi unggairi yi lang man."
},
"ik": {
    "long": (
        "Iñupiaq qanguqsuaqłuku atuqłuriñ atertuqulluni qayaqimak aalumit. Iñupiaq siqiniq,"
        " Sioraqtuŋa atuqaniqsiqtuani aniatnguḷaq puquŋa. Suraqiñ Kaillqutaŋa aniqta"
        " ikayğinaguḷaq, ilimaaput qiññuaġiñaqsiksan̆ut."
    ),
    "short": "Iñupiaq qanguqsuaqłuku atuqłuriñ atertuqulluni qayaqimak aalumit."
},
"io": {
    "long": (
        "Nun la tota mondo havis un linguo e komuna parol-maniero."
        "Dum ke homi movis este, li trovis plano en Shinar e lojeskis ibe."
        "Li dicis a l'uni l'altri, 'Venez, ni fabrikez briki e par-koquez li.' Li uzis briko vice petro, e gudro vice mortero."
        "Pose li dicis, Venez, ni konstruktez urbego por ni, kun turmo qua extensas a la cielo, por ke ni darfas establisar nomo"
        " por ni e ne dis-semar sur la surfaco di la tota tero."

    ),
    "short": "Ido esas unu planlinguo fondita en 1907 kun simpla gramatiko e regula morfologio."
},
"is": {
    "long": (
        "Íslenska er norðurgermanskt mál sem talast aðallega á Íslandi og er óbreytt frá forníslensku "
        "að miklu leyti. Hún notar fimm séríslensk sérhljóð og einstakar stafsetningarreglur. Íslensk "
        "bókmenntir eru ríkar, allt frá eddukvæðum til nútímaskáldsagna eftir Halldór Laxness."
    ),
    "short": "Íslenska er norðurgermanskt mál sem talast aðallega á Íslandi og er óbreytt frá forníslensku að miklu leyti."
},
"it": {
    "long": (
        "Italiano è una lingua romanza parlata da oltre 67 milioni di persone come lingua madre "
        "principalmente in Italia, Svizzera, San Marino e Città del Vaticano. Deriva dal latino volgare "
        "e possiede una ricca tradizione letteraria che include Dante Alighieri, Petrarca e Boccaccio."
    ),
    "short": "Italiano è una lingua romanza parlata da oltre 67 milioni di persone come lingua madre."
},
"iu": {
    "long": (
        "ᐃᓄᒃᑎᑐᑦ (Inuktitut) ᐊᓯᓐᓇᓂᐊᖅᐸᒥᖅ Inuit ᑭᓱᐊᓂᖅ ᐄᑯᓚᕐᑎᖓᑦ ᑲᓇᑕ-mi, ᓄᓇᕗᑦ (Nunavut), ᓄᓇᕕᒥ (Nunavik), ᓄᓇᓑᐗᓯᐅᑦ (Nunatsiavut) ᓄᓇᑐᒍᕙᑦ (NunatuKavut) ᐊᑐᓂᖅᑐᓐᓇᓂᖅ. ᐃᓄᒃᑎᑐᑦ ᐃᓄᐃᑦ-ᐊᓕᐢ ilitarijuaq Eskimo–Aleut ilitarijut. ᐃᓄᒃᑎᑐᑦ polysynthetic morphology, ᓈᓚᐅᑎᖓ syllabics imailiq, latin skuplii. ᓴᓇᓄᑎᓯᒪᔪᑦ ᐊᓛᖅᑎᓐᓂᖅ ᓄᓇᓖᑦ ᓴᓂᓱᖑᑦ."
    ),
    "short": "ᐃᓄᒃᑎᑐᑦ ᐊᓯᓐᓇᓂᐊᖅᐸᒥᖅ ᑲᓇᑕ-mi."
},
"ja": {
    "long": (
        "日本語（にほんご）は日本の公用語であり、主に日本列島で約1億2600万人が母語として使用している。 "
        "漢字、ひらがな、カタカナの三種の文字体系を併用し、独自の文法と語彙を持つ。 "
        "古典文学から現代ポップカルチャーまで幅広い表現が存在する。"
    ),
    "short": "日本語は日本の公用語であり、主に日本列島で約1億2600万人が母語として使用している。"
},
"jv": {
    "long": (
        "Basa Jawa minangka salah siji saka basa Austronesia sing dipigunakaké utamané ing Pulo Jawa, "
        "Indonesia. Basa iki duwé aksara Jawa tradhisional, sanadyan saiki luwih akèh ditulis nganggo "
        "aksara Latin. Budaya Jawa sugih tari-tarian, tembang, lan sastra lisan sing diwarisaké turun-temurun."
    ),
    "short": "Basa Jawa minangka salah siji saka basa Austronesia sing dipigunakaké utamané ing Pulo Jawa, Indonesia."
},
"ka": {
    "long": (
        "ქართული ენა (kartuli ena) არის კავკასიური ენის ოჯახის მდიდარი წევრი, რომლის წარმომავლობა "
        "გადმოეფინება ძველი კოლხური და სტალურ-მოვლდური კულტურებს. იგი დაახლოებით 3.7 მილიონმა ადამიანმა "
        "ილაპარაკა მაღალმთიანი სუბორდინირების რეგიონებში, ხოლო ფასცონა და მეტყველება უნიკალური მსოფლიო "
        "ლიტერატურათაგონია."
    ),
    "short": "ქართული ენა არის კავკასიური ენის ოჯახის მდიდარი წევრი."
},
"kg": {
    "long": (
        "Kikongo ke kiele ya Bantu yina sambaka na sud ya Repùblika ya Demokratiki ya Kongo, nord ya Angola, mpe na Repùblika ya Kongo. "
        "Kiele kieti na família ya Bantu mpe ke na sisteme ya noun classes ya manomi, mpe mfumbwa ya mavowel yina ke yindula malongi ya malembe. "
        "Kilemba na Latin alphabete, mpe ke na bosómi ya malembi ya nkento ya mayele mpe tubuka ya mabundu ya nlemvo."
    ),
    "short": "Kikongo ke kiele ya Bantu yina sambaka na sud ya Repùblika ya Demokratiki ya Kongo, nord ya Angola, mpe na Repùblika ya Kongo."
},
"ki": {
    "long": (
        "Gĩkũyũ gĩkũyũ ni ũrĩa wa Agĩkũyũ na Gĩkũyũ cia mũthĩnjĩ gĩkũyũ kikonyo kĩrĩa kĩandĩgĩtĩrĩwe na "
        "ĩtaĩ ini ya mĩtĩ ya rũrũrama. Ũndũ wa kĩrĩma wĩtigane na Iithaka ria mĩamĩrĩrio mĩrongo migĩrĩ "
        "na mabere-mabere a vĩrĩa na mũno wa ũtũngĩrĩrĩria matũũra."
    ),
    "short": "Gĩkũyũ gĩkũyũ ni ũrĩa wa Agĩkũyũ na Gĩkũyũ cia mũthĩnjĩ gĩkũyũ kikonyo kĩrĩa kĩandĩgĩtĩrĩwe na ũtaĩ."
},
"kj": {
    "long": (
        "Kuanyama (Oshikwanyama) oku ka lapho ovashigwana ovashikavangu vakwaNamibia na bakwaAngola. "
        "Kuanyama okuwama omutima gwo oshitumbu shomunwa, na omwaalelweno moshinima ve omukalo wokuninga. "
        "Okuhambelana kimwe na Oshindonga mumwe, okwiituba Oshiwambo."
    ),
    "short": "Kuanyama oku ka lapho ovashigwana ovashikavangu vakwaNamibia na bakwaAngola."
},
"kk": {
    "long": (
        "Қазақ тілі — түркі тілдер тобына жататын тіл, Қазақстан Республикасының мемлекеттік тілі болып "
        "саналады. Ол қазақ халқының рухани әлемін көрсететін бай лексикаға ие және орасан зор ауызша және "
        "жазбаша фольклор дәстүрін сақтап қалған. Әдеби нұсқасы XIX ғасырдың аяғында қалыптасты."
    ),
    "short": "Қазақ тілі — түркі тілдер тобына жататын тіл, Қазақстан Республикасының мемлекеттік тілі болып саналады."
},
"kl": {
    "long": (
        "Kalaallisut, kalaallisut kalaallunik atuarsinnaasut Kalaallit Nunaata kitaani attaveqaateqarfili "
        "suussusaa. Ataatsimiititamiit tupaallaat pissaaneqarluni oqaatsimik pilersitsisoqarnissaa "
        "minnerpaamik assigiinngitsunik oqaatsinik ilisimasaqarfigineqarpugut."
    ),
    "short": "Kalaallisut kalaallisut kalaallunik atuarsinnaasut Kalaallit Nunaata kitaani attaveqaateqarfili suussusaa."
},
"km": {
    "long": (
        "ភាសាខ្មែរ ជាភាសារាស្ត្រមួយ ដែលគេប្រើប្រាស់នៅក្នុងព្រះរាជាណាចក្រកម្ពុជា និងឥណ្ឌូនេស៊ី "
        "(ភូមិព្រៃក្រហម)។ វាស្ថិតក្នុងក្រុមភាសាឥណ្ឌូចិន ហើយមានអក្សរខ្មែរដែលជាសិល្បៈទី១ "
        "បង្កើតឡើងក្នុងសតវត្សទី៦។ ភាសាខ្មែររីកចម្រើននៅលើសាលានិងព័ត៌មានទូរទស្សន៍។"
    ),
    "short": "ភាសាខ្មែរ ជាភាសារាស្ត្រមួយ ដែលគេប្រើប្រាស់នៅក្នុងព្រះរាជាណាចក្រកម្ពុជា។",
},
"kn": {
    "long": (
        "ಕನ್ನಡವು ದ್ರಾವಿಡ ಭಾಷಾ ಕುಟುಂಬಕ್ಕೆ ಸೇರಿರುವ ಭಾಷೆಯಾಗಿದೆ ಮತ್ತು ಅದನ್ನು ಮುಖ್ಯವಾಗಿ ಭಾರತದ ಕರ್ನಾಟಕ "
        "ರಾಜ್ಯದಲ್ಲಿ ಜನರು ಮಾತನಾಡುತ್ತಾರೆ. ಇದು ಐತಿಹಾಸಿಕವಾಗಿ ಪತ್ತದ ಅಕ್ಷರ್ಮಾಲೆಯನ್ನು ಬಳಸಿಕೊಂಡು "
        "ಶತಮಾನಗಳಿಂದ ಸಾಹಿತ್ಯ ಪರಂಪರೆಯನ್ನು ಹೊಂದಿದೆ. ಪ್ರಾಚೀನ ಕಾವ್ಯದಿಂದ ಆಧುನಿಕ ಲೇಖಕರೆವರೆಗೂ "
        "ಜೀವಂತ ಪುಸ್ತಕಗಳನ್ನು ರಚಿಸಿದ್ದಾರೆ."
    ),
    "short": "ಕನ್ನಡವು ದ್ರಾವಿಡ ಭಾಷಾ ಕುಟುಂಬಕ್ಕೆ ಸೇರಿರುವ ಭಾಷೆಯಾಗಿದೆ ಮತ್ತು ಅದನ್ನು ಮುಖ್ಯವಾಗಿ ಕರ್ನಾಟಕದಲ್ಲಿ ಜನರು ಮಾತನಾಡುತ್ತಾರೆ."
},
"ko": {
    "long": (
        "한국어(조선말)는 한국 및 조선민주주의인민공화국에서 사용되는 언어로, 고유의 한글 문자 체계를 "
        "가지고 있다. 한글은 세종대왕이 창제하여 모든 계층에게 읽고 쓰는 능력을 제공하였고, "
        "현대 한국 문학은 김소월, 박경리, 조정래 등의 작가들이 풍부하게 발전시켰다."
    ),
    "short": "한국어는 한국 및 조선민주주의인민공화국에서 사용되는 언어로, 고유의 한글 문자 체계를 가지고 있다."
},
"kr": {
  "long": "Kanuri gor Nilo-Saharan yatara, do Kanuri ƙāsar eze Nigeria, Niger, Chad min Cameroon. Gora manga lahaja manga Manga, Yerwa min Tumari, bo Ajami larabiyo wole Latin beti mùra. Kanuri literaci gare tìtare laji històri min rubutu addini Islam.",
  "short":         "Astrostatisticsdə shima statistics suro astrophysicsbero yikowo na kulashi awoa ngəwu kəla bayanna observational astrophysicalben."
},
"ks": {
    "long": (""" 
    کٲشُر زُبٲن ہِند-آریائی دَردِی شاخ چی ممبر، جے کشمیر، جموں تہ گلگت بلتستان منز رائج ہٕئے۔ 
یہہ زُبٲن نستعلیق رسمِ خط منز لکھی و کِتھ وقت دیوناگری رسمِ خط منز بھی استعمال ہٲند ہے۔ 
کٲشُر زُبٲن منز صوفی شاعری، لوک گیت تہ لوک دَستاناں دی امیر روایات ہٲند ہے۔
    """ 
    ),
    "short": "کٲشُر زٲبان ہٕند-آریائی دَردی شاخ چی ممبر، جے کشمیر منز رائج ہٕئے۔"
},
"ku": {
  "long": (
    "کوردی زمانێکی هندو-ئەوروپیە کە زۆربەی کوردانی تورکیا، ئێران، عێراق و سوریا بەوە قسە دەکەن. "
    "ئەم زمانە بە ئەلفوبێی عەرەبی/سۆرانی نووسرێت و بەرھەمە ئەدەبییە خەلاقانەی زۆر هەیە وەک گۆرانی، شیعر و "
    "چیرۆکە کۆن و نوێ. هەروەها لە تەلەڤیزیۆن و لاپەڕەکانی میدیای کوردی وەک زمانی ڕۆژانە بەکاردەهێنرێت."
  ),
  "short": "کوردی زمانێکی هندو-ئەوروپیە کە زۆربەی کوردانی تورکیا، ئێران، عێراق و سوریا بەوە قسە دەکەن."
},
"kv": {
    "long": (
        "Коми кыв – сёрнын коми язык, котырын урал увзӧлын шогоръяс семъяӵ. "
        "Кыв лӧдъяӵ Коми Республиказъяс кылӧм и вӧтлы регионъёсын кылӧм нывӧд дорӧм. "
        "Кыв велӧм соцӧг поэтӧм и письмӧн ӧтӧгытӧм аз музиӵ вӧтлы кириллицӧн."
    ),
    "short": "Коми кыв – сёрнын коми язык, котырын урал увзӧлын шогоръяс семъяӵ. "
},
"kw": {
    "long": (
        "Kernewek yw tonk coñs a’n koh a Venedom, a y’ga bredhyn yn Kernow ha gans pennisyow gans "
        "yuwwadow meur a Drowydow Soth a Kernow. Yw gans orthow moar-edhomma an trelows wortheleth, "
        "ha yw les dh’y omdhiskwedhya gans tekstow-lenn ow koservya an lawa-veur a Skol Vytan."
    ),
    "short": "Kernewek yw tonk coñs a’n koh a Venedom, a y’ga bredhyn yn Kernow."
},
"ky": {
    "long": (
        "Кыргызча же кыргыз тили – бул түрк тилдеринин бир тууган өкүлү, негизинен Кыргыз Республикасынын "
        "алиментинде жана коңшу өлкөлөрдө, ошондой эле чет өлкөлөрдөгү кыргыз диаспораларында кеңири колдонулат. "
        "Кыргыз жазмасы азыркы учурда латиницага өтүү аракети жүрүп жатса да, тарыхта араб жана кириллицада да колдонулган."
    ),
    "short": "Кыргызча же кыргыз тили – бул түрк тилдеринин бир тууган өкүлү."
},
"la": {
    "long": (
        "Lingua Latina, antiqua lingua Romanorum, hodie vita latinitatis studiorum favet, litteras, scientias, "
        "culturae Europaeae multum inpulerit. Lingua Latina in ecclesia catholica usitata est et monumenta classica "
        "ut Vergilii Aeneis et Cicero orationes praeclarae sunt."
    ),
    "short": "Lingua Latina, antiqua lingua Romanorum, hodie vita latinitatis studiorum favet."
},
"lb": {
    "long": (
        "Lëtzebuergesch ass eng westgermanescht Sprooch, haaptsächlech zu Lëtzebuerg an Deeler vun däitschen "
        "Grenzregiounen geschwat. Si huet vill Wierder aus dem Däitschen an dem Franséischen ongeholl a gëtt "
        "zoustänneg vum Gesetz als offiziell Nationalsprooch unerkannt."
    ),
    "short": "Lëtzebuergesch ass eng westgermanescht Sprooch, haaptsächlech zu Lëtzebuerg geschwat."
},
"lg": {
    "long": (
        "Luganda, ekika ky’ebitabo mu bakule Katolika mu Buganda, kye kimu ku bitundu ebikulu eby’enjawulo mu "
        "Kampala region. Kye lupapula olulimi oluvannyuma lw’Olunyankole, olwe Lwengo oba olwe Luganda, olutenda "
        "abantu okutegeerera ebintu ebikulaakulana mu by’obufuzi."
    ),
    "short": "Luganda kye kimu ku bitundu ebikulu eby’enjawulo mu Kampala region."
},
"li": {
    "long": (
        "Limburgs is ne germaansjke verroach, hoesj neet vaan in 't Nedderlandsj vaan in 't Limburgse gebroeksgebied "
        "woar 't in Nederlaand, Belgie en 'n kichje d’r buute word. 't Hed sine eigen dialecten, wie 't Roermonds, "
        "'t Weersj en 't Sittards, mit 'n rijke tradite van veerelaandj en volkse liedje."
    ),
    "short": "Limburgs is ne germaansjke verroach hoesj neet vaan in 't Nedderlandsj vaan in 't Limburgse gebroeksgebied."
},
"ln": {
    "long": (
        "Lingála ezali lokota moko ya bikolo bya mboka ya Kongo, epesamaki na mobembo mpe ekelami na "
        "bota nkómi mpo na kopesa motuya na lolenge ya kopesa ndako. Ezala na biteya mingi na ba lokasa, "
        "mitindo ya liputa mpe mikanda ya liboso ya baie."
    ),
    "short": "Lingála ezali lokota moko ya bikolo bya mboka ya Kongo."
},
"lo": {
    "long": (
        "ພາສາລາວ ເປັນພາສາລາວຕ່າງໆ ເມືອງຫຼວງຈຳນວນຫນຶ່ງ ແລະ ໃຊ້ໃນແດນດິນລາວເຂດຂວາງ. ພາສາລາວມີລັກສະນະສະຫລາດ ແລະ ການຂຽນຟັນຊະກຳ ໃຊ້ຕົວອັກສອນພາສາລາວດ້ວຍ."
    ),
    "short": "ພາສາລາວ ເປັນພາສາລາວຕ່າງໆເມືອງຫຼວງ."
},
"lt": {
    "long": (
        "Lietuvių kalba priklauso baltų kalbų grupei ir yra viena iš seniausių gyvų indoeuropiečių kalbų. "
        "Ji turi sudėtingą giminių sistemą, turtingą žodyną ir ilgametes literatūros tradicijas, įskaitant "
        "Joną Basanavičių ir Maironį."
    ),
    "short": "Lietuvių kalba priklauso baltų kalbų grupei ir yra viena iš seniausių gyvų indoeuropiečių kalbų."
},
"lu": {
    "long": (
        "Kadi tudi mua kuamba tshinyi padi tshitendelelu kampanda tshituambila ne: tudi mua kusambuka mikalu eyi ne kutungunuka ne kuikala mu ditalala ne Nzambi?"
        "Ndi mudisuike bua kumulamata kashidi ne tshiendelele. - Musambu 65: 2."
        "Simone kuandamuna ne: 'Kudi bantu bakuabo."
    ),
    "short": "Swingle wakamba bua kuleja muvuaye wangata kuenzela"
},
"lv": {
    "long": (
        "Latviešu valoda pieder pie baltu valodu saimes un ir viena no oficiālajām valodām Latvijā. "
        "Tai raksturīgas bagātas locījumu sistēmas, piemēram, desmit locījumi lietvārdiem, un vēsturiska "
        "literatūra, kura sākās jau 16. gadsimtā."
    ),
    "short": "Latviešu valoda pieder pie baltu valodu saimes un ir viena no oficiālajām valodām Latvijā."
},
"mg": {
    "long": (
        "Malagasy dia teny iray avy amin’ny fianakavian-teny aostrôneziana izay miteny indrindra eto "
        "Madagasikara. Izy io dia misy fizarazarana teny maromaro, toy ny Merina, Betsimisaraka, ary Betsileo. "
        "Ny soratra Malagasy miorina amin’ny soratra latinina, ary manana literatiora ara-pomba fanao izay mahazatra "
        "ny tantara sy ny vazivazy Malagasy."
    ),
    "short": "Malagasy dia teny iray avy amin’ny fianakavian-teny aostrôneziana izay miteny indrindra eto Madagasikara."
},
"mh": {
    "long": (
        "Kajin M̧ajeļ an takto in Marhsal M̧ajeļ in lalin̄ ene eo ej jelā erreo ilo Jikin M̧ajeļ im "
        "Ukudeine. Ej aelon̄ in būroņ eo edak in wōt kōṃān kōjjelok in inoj im kakien jikin "
        "kajin: kōṃān kōkar im kajin kāeo."
    ),
    "short": "Kajin M̧ajeļ an takto in Marhsal M̧ajeļ in lalin̄ ene eo ej jelā erreo ilo Jikin M̧ajeļ im Ukudeine."
},
"mi": {
    "long": (
        "Te reo Māori he reo tāngata nō Aotearoa, he reo nō te whānau reo Austronesian e kīia ana "
        "ko Ngā Puhi, Ngāti Porou rānei, hei tauira. He mahara nui tōna ki ngā kōrero tuku iho, waiata, "
        "me ngā karakia. He wāhanga nui tō te reo i te ao Māori i ngā pou tirohanga me ngā marae."
    ),
    "short": "Te reo Māori he reo tāngata nō Aotearoa."
},
"mk": {
    "long": (
        "Македонскиот јазик е јужнословенски јазик кој се говори главно во Северна Македонија и делови од "
        "Бугарија, Србија и Албанија. Има богата книжевна традиција од ВМРО до современи автори, а користи "
        "кирилица која е влезена во УНЕСКО како нематеријално културно наследство."
    ),
    "short": "Македонскиот јазик е јужнословенски јазик кој се говори главно во Северна Македонија."
},
"ml": {
    "long": (
        "മലയാളം ദ്രാവിഡ ഭാഷാ കുടുംബത്തിലെ ഒരു ഭാഷയാണ്, പ്രത്യേകിച്ച് കേരളത്തിൽ സംസാരിക്കപ്പെടുന്നു. "
        "അതുമൂലം സമ്പന്നമായ സാഹിത്യപരമ്പരയുണ്ട്, നമ്പ്യാർകളുടെ കീർത്തനങ്ങളിൽ നിന്നുമാരംഭിച്ച് എഴുത്തുകാരൻ "
        "വൈക്കം മുഹമ്മദ് ബഷീറിന്റെ കൃതികളിലേക്ക്."
    ),
    "short": "മലയാളം ദ്രാവിഡ ഭാഷാ കുടുംബത്തിലെ ഒരു ഭാഷയാണ്, പ്രത്യേകിച്ച് കേരളത്തിൽ സംസാരിക്കപ്പെടുന്നു."
},
"mn": {
    "long": (
        "Монгол хэл нь Алтайн хэлний бүлэгт харьяалагддаг бөгөөд Монгол Улсын албан ёсны хэл юм. "
        "Урвуу бичгийн тухайд өвөг монгол бичиг, дараа нь кирилл үсэгт шилжсэн. Монголын сонгодог "
        "уламжлалт ном зохиол нь 'Төрийн их тайлбар', 'Цагаан Гарьд', 'Оюутолгой' зэрэг олон бүтээлтэй."
    ),
    "short": "Монгол хэл нь Алтайн хэлний бүлэгт харьяалагддаг бөгөөд Монгол Улсын албан ёсны хэл юм."
},
"mr": {
    "long": (
        "मराठी ही एक इंडो-आर्याई भाषा आहे जी मुख्यतः महाराष्ट्र आणि गोवा राज्यात बोली जाते. "
        "ही देवनागरी लिपीत लिहिली जाते आणि तिचे समृद्ध साहित्य, कविता परंपरा आणि लोककथा आहेत. "
        "मराठीमध्ये विविध बोलीरूप आणि शब्दसंपदा आढळून येते, आणि ती शैक्षणिक, प्रशासकीय तसेच माध्यमांच्या "
        "क्षेत्रात महत्त्वपूर्ण स्थान राखते."
    ),
    "short": "मराठी ही एक इंडो-आर्याई भाषा आहे जी मुख्यतः महाराष्ट्र आणि गोवा राज्यात बोली जाते."
},
"ms": {
    "long": (
        "Bahasa Melayu ialah bahasa Austronesia yang menjadi bahasa kebangsaan Malaysia, Brunei, dan Singapura. "
        "Ia menggunakan abjad Latin yang dipanggil Rumi serta abjad Jawi turunan Arab. "
        "Mempunyai khazanah sastera lama seperti Hikayat Hang Tuah dan Tawarikh Melayu, ia terus berkembang."
    ),
    "short": "Bahasa Melayu ialah bahasa Austronesia yang menjadi bahasa kebangsaan Malaysia, Brunei, dan Singapura."
},
"mt": {
    "long": (
        "Il-Malti huwa lingwa semitika liġi għandha l-alfabett Latini u hija l-unika lingwa semitika miktuba "
        "bil-Latin. Tissoponi minn dak arabo ta’ l-Għarabja biss bl-influwenza tal-Italja, l-Ingilterra u l-Franza "
        "minbarra influenzi Indo-Ewropej oħra."
    ),
    "short": "Il-Malti huwa lingwa semitika liġi għandha l-alfabett Latini."
},
"my": {
    "long": (
        "မြန်မာစာ သည် တောင်အာရှတွင် အသုံးများသော အာဏီ-တောင်အာရှ သို့မဟုတ် ခုနှစ်ပိုင်း ဗမာစကားနှင့် "
        "ဆက်စပ်သော ဘာသာစကားတစ်ခုဖြစ်ပြီး မြန်မာနိုင်ငံ၏ အခြေခံစာဖြစ်သည်။ "
        "၎င်းကို ပဋ္ဌာန်းကြောင်းဖြင့် အလယ်အလတ်ဗမာစကားအဖြစ် သတ်မှတ်ရသည်။"
    ),
    "short": "မြန်မာစာ သည် တောင်အာရှတွင် အသုံးများသော ဘာသာစကားတစ်ခုဖြစ်သည်။"
},
"na": {
    "long": (
        "Dorerin Naoero eo e kabane ke amen te itawo ibwin am̄in kar bōmwakir yanu maneir. "
        "E kake n̄an gaierien am̄in kar buok aolep am bar nangon̄ in Nauruan e auri ibōk e anamei. "
        "E kon̄in taudope in buokobo aer uyai n̄a dorerin rekar, ke non aniba er enō e añōōr ke am̄in."
    ),
    "short": "Dorerin Naoero eo e kabane ke amen te itawo ibwin am̄in kar bōmwakir yanu maneir."
},
"nb": {
    "long": (
        "Norsk bokmål er en av to offisielle skriftlige varianter av norsk i Norge. Det utviklet seg "
        "fra dansk-norsk skriftspråk etter unionsoppløsningen i 1814, og har modernisert rettskrivning "
        "og grammatikk. Mange forfattere, som Bjørnstjerne Bjørnson, har skrevet på bokmål."
    ),
    "short": "Norsk bokmål er en av to offisielle skriftlige varianter av norsk i Norge."
},
"nd": {
    "long": (
        "IsiNdebele saseNyakatho lulimi lweBantu olukhulunywa kakhulu eZimbabwe kanye leNyakatho yeNingizimu Afrika. "
        "Luhlobene eduze loLimi lwesiZulu futhi lusebenzisa uhlamvu lweLatini ekubhaleni. "
        "Lunezinkolelo zokuxoxwa kwezindaba zomlomo ezifana lezindaba zendabuko, izinkondlo zokudumisa kanye lolimi lwesimanjemanje."
    ),
    "short": "IsiNdebele saseNyakatho lulimi lweBantu olukhulunywa eZimbabwe kanye leNyakatho yeNingizimu Afrika."
},
"ne": {
    "long": (
        "नेपाली भाषा पहाडी हिमाली मुलुक नेपालको राष्ट्रिय भाषा हो र यसलाई भारतका केही क्षेत्रहरू र बङ्गलादेशमा पनि बोलिन्छ। "
        "यो हिन्द-आर्य भाषाको मातृभाषा हो र देवनागरी लिपिमा लेखिन्छ। नेपाली साहित्यमा भानुभक्त आचार्य र देवकोटा "
        "जस्ता महत्त्वपूर्ण साहित्यकारहरू छन्।"
    ),
    "short": "नेपाली भाषा पहाडी हिमाली मुलुक नेपालको राष्ट्रिय भाषा हो र यसलाई भारतका केही क्षेत्रहरू र बङ्गलादेशमा पनि बोलिन्छ।"
},
"ng": {
    "long": (
        "Aantu ayehe oya valwa ye na emanguluko noye na ondilo yi thike pamwe osho wo uuthemba. Oye na"
        "omaipulo goondunge neiuvo onkene naa kalathane mombepo yuumwainathana. "

    ),
    "short": "Oshindonga shiilonga lyaBantu lya vatengeki muNamibia noAngola."
},
"nl": {
    "long": (
        "Nederlands is een West-Germaanse taal, gesproken in Nederland, Vlaanderen (België) en Suriname. "
        "Het ontwikkelde zich uit het Oudnederfrankisch en kent een rijke literatuur van schrijvers als "
        "Multatuli en Harry Mulisch. Nederlands is nauw verwant aan het Afrikaans en wordt gebruikt als "
        "brugtaal in verschillende Caribische eilanden."
    ),
    "short": "Nederlands is een West-Germaanse taal, gesproken in Nederland, Vlaanderen (België) en Suriname."
},
"nn": {
    "long": (
        "Nynorsk er en av de to offisielle skriftlige formene av norsk, basert på norske dialekter og "
        "forfattet av språkforskeren Ivar Aasen på midten av 1800-tallet. Det brukes i kombinasjon med "
        "bokmål i Norge, særlig i Vestlandet og deler av Trøndelag, i administrasjon, utdanning og media."
    ),
    "short": "Nynorsk er en av de to offisielle skriftlige formene av norsk, basert på norske dialekter."
},
"no": {
    "long": (
        "Norsk er et nordgermansk språk som snakkes i Norge. Det finnes to offisielle skriftlige varianter: "
        "bokmål og nynorsk, begge basert på dansk-norsk skrifttradisjon og norske dialekter. "
        "Norsk språk og kultur har sterke røtter i både norrøn litteratur og moderne nordisk forfatterskap."
    ),
    "short": "Norsk er et nordgermansk språk som snakkes i Norge."
},
"nr": {
    "long": (
        "IsiNdebele saseNingizimu lulimi lwaBantu olukhulunywa eNingizimu Afrika, ikakhulu esifundazweni saseMpumalanga. "
        "Luhlukaniswa ngokusetshenziswa kwalo kwama-click consonants kanye lezindlela zamathoni ezicacisa incazelo. "
        "Kubhalwa ngosimu seLatin script, futhi kunezingxenye zemibhalo nezangoqa ezimfushane, kuhlanganisa izinganekwane "
        "nezingoma zesintu."
    ),
    "short": "IsiNdebele saseNingizimu lulimi lwaBantu olukhulunywa eNingizimu Afrika, ikakhulu eMpumalanga."
},
"nv": {
    "long": (
        "Diné bizaad éí Diné t’áá Diné’é bikéé’ holne’ doo shił bijéé’ holne’go, bikáá’ Yáhoołkáá’, Arizona, New Mexico dóó Utah dah naashá. "
        "Bizaad éí ch’il łizh yáhoot’ééł, t’áá ajiłił nihíji’ígíí dóó t’áá ałtsé yáhoot’ééł łínígíí, ánínígíí dóó łizh yáhoot’ééł dóó t’áá shikaadééł łizh yáhoot’ééł. "
        "Ákót’éego, Latin t’áá ajiłtsoh át’éego naashá dóó shikaadééł bich’į’ yáhoot’ééł."
    ),
    "short": "Diné bizaad éí Diné t’áá Diné’é bikéé’ holne’ doo shił bijéé’ holne’go."
},
"ny": {
    "long": (
        "Chinyanja, kapena Chichewa, ndi chilankhulo cha Bantu chomwe chimathamanga kwambiri m'madera "
        "a Malawi, komanso ku Zambia, Mozambique ndi Zimbabwe. Zili ndi malamulo a zilankhulo zachikhalidwe, "
        "chakuwongolera mphamvu, ndi malo okhwima monga m’mawu amodzi kapena ophatikizana. "
        "Bibliya ndi mabuku ambiri achikhalidwe ali m’Chichewa."
    ),
    "short": "Chinyanja, kapena Chichewa, ndi chilankhulo cha Bantu chomwe chimathamanga kwambiri m'madera a Malawi."
},
"oc": {
    "long": (
        "L’occitan es una lenga romanica parlada dins mantunas regions del sud de França, en Itàlia e en Aran. "
        "Comprén divèrsas variantas coma lo gascon, lo lengadocian, lo provençau e lo alpenc. Es rica en poesia "
        "medievala, amb trobadors que compausèron cants d’amor e de cort en lo començament del milenni mil e "
        "après Cristianisme."
    ),
    "short": "L’occitan es una lenga romanica parlada dins mantunas regions del sud de França, en Itàlia e en Aran."
},
"oj": {
    "long": (
        "Anishinaabemowin gii-kendamaadeg Anishinaabeg, geyaabi Ontario, Manitoba, Minnesota miinawaa Wisconsin ezhiwebak. "
        "Gii-ozhibii’iganag noongom jiimaanag, ode’eminag miinawaa noodinag, miinawaa gimashkikiiwinan. "
        "Giiwedinowag animikiiwag miikanaag miinawaa gichi-mazina’iganag geyaabi ode’iminan."
    ),
    "short": "Anishinaabemowin gii-kendamaadeg Anishinaabeg geyaabi Ontario, Manitoba, Minnesota miinawaa Wisconsin ezhiwebak."
},
"om": {
    "long": (
        "Afaan Oromoo afaan Kuushitikii Bahaa keessaa isa bal’inaan dubbatamu yoo ta’u, Itoophiyaa, Keeniyaa fi Somaaliyaa keessatti dubbatama. "
        "Afaan kuni sirna gosa jechootaa hedduu fi qindoomina seerluga (grammar) cimaa qaba, akkasumas barreeffamaan isaa akkaataa qubee Laatiin fayyadamee waan baratamuuf dhaabbileen barnootaa fi miidiyaan bal’inaan dhimma itti bahu. "
        "Afan Oromoo keessatti aadaa fi seenaa uumata Oromoo calaqqisuuf kitaabota, gaazexeessitoota fi lallaba af-gaaffii hedduutu jira."
    ),
    "short": "Afaan Oromoo afaan Kuushitikii Bahaa keessaa isa bal’inaan Itoophiyaa, Keeniyaa fi Somaaliyaa keessatti dubbatamu."
},
"or": {
    "long": (
        "ଓଡ଼ିଆ ଏକ ଇଣ୍ଡୋ-ଆର୍ୟନ୍ ଭାଷା ଯାହା ଭାରତର ଓଡିଶା ରାଜ୍ୟର ଅଧିକାଂଶ ଲୋକ ଦ୍ୱାରା କଥାହୁଏ। "
        "ଏହି ଭାଷାକୁ ଦେବନାଗରୀ ଲିପି ରେ ଲିଖାଯାଏ, ଏବଂ ଏହାର ସାହିତ୍ୟ ଏହି ଲିପି ମାନନ୍ତ୍ର ଝାଲ ନାଟକ, ପୋୟେମ୍ "
        "ଓ ଲେଖା ଯୋଗୁ ବିଶିଷ୍ଟ।"
    ),
    "short": "ଓଡ଼ିଆ ଏକ ଇଣ୍ଡୋ-ଆର୍ୟନ୍ ଭାଷା ଯାହା ଓଡିଶା ରାଜ୍ୟର ଲୋକ ଦ୍ୱାରା କଥାହୁଏ।"
},
"os": {
    "long": (
        "Ирон ӕрйыд (Ӕвзаг) уӕдзаригъд арфӕсырд терминологии Атӕм ӕвзагджын ӕвзымæ стандарт, "
        "эзты фæсӕр ныв.modify ej donildon, хорз у неё у корворъм юӕз ті афыуы."
    ),
    "short": "Ирон ӕрйыд уӕдзаригъд арфӕсырд терминологии Атӕм ӕвзагджын ӕвзымæ стандарт."
},
"pa": {
    "long": (
        "ਪੰਜਾਬੀ ਭਾਸ਼ਾ ਭਾਰਤ ਅਤੇ ਪਾਕਿਸਤਾਨ ਵਿੱਚ ਬੋਲੀ ਜਾਂਦੀ ਹਨ, ਖ਼ਾਸ ਕਰਕੇ ਪੰਜਾਬ ਪ੍ਰਾਂਤ ਵਿੱਚ. ਇਹ "
        "ਇੰਦੋ-ਆਰਿਅਨ ਭਾਸ਼ਾ ਸਮੂਹ ਦਾ ਹਿੱਸਾ ਹੈ ਅਤੇ ਸ਼ਾਹਮੁਖੀ (ਅਰਬੀ ਲਿਪੀ) ਤੇ ਗੁਰਮੁਖੀ (ਦੇਵਨਾਗਰੀ) "
        "ਨੇ ਲਿਖੀ ਜਾਂਦੀ ਹੈ। ਪੰਜਾਬੀ ਸਾਹਿਤ 'ਸ਼ੇਅਰੀ' ਉਦੋਂ ਤੋਂ ਮਸ਼ਹੂਰ ਹੈ ਜਦੋਂ 'ਬਾਬਾ ਫਰੀਦ' ਨੇ ਰਤਨ ਪਹਿਰਾਂ "
        "ਕਿੱਤੇ।"
    ),
    "short": "ਪੰਜਾਬੀ ਭਾਸ਼ਾ ਭਾਰਤ ਅਤੇ ਪਾਕਿਸਤਾਨ ਵਿੱਚ ਬੋਲੀ ਜਾਂਦੀ ਹੈ, ਖ਼ਾਸ ਕਰਕੇ ਪੰਜਾਬ ਪ੍ਰਾਂਤ ਵਿੱਚ।"
},
"pi": {
    "long": (
        "पाऴि भाषा बहुते प्राचीन पाली साहित्य केर माध्यम सँ प्रचलित अछि, विशेष कऽ जैन और प्रारंभिक "
        "बौद्ध ग्रंथ सभ में. एकर रूप थेथारूप मैथिली रूप सँ भिन्न अछि, मुदा संस्कृत तँ अपेक्षाकृत "
        "सरलता अछि. ई मिथिला, बंगाल आ नेपालक छेत्र सभ में अध्ययन केर लेल प्रयोग कएल जाइ छै."
    ),
    "short": "पाळि भाषा बहुते प्राचीन पाली साहित्य केर माध्यम सँ प्रचलित अछि."
},
"pl": {
    "long": (
        "Polski jest językiem zachodniosłowiańskim, którym posługuje się głównie w Polsce. "
        "Używa alfabetu łacińskiego ze znakami diakrytycznymi i ma bogatą literacką tradycję, "
        "obejmującą dzieła takich autorów jak Adam Mickiewicz, Henryk Sienkiewicz i Wisława Szymborska."
    ),
    "short": "Polski jest językiem zachodniosłowiańskim, którym posługuje się głównie w Polsce."
},
"ps": {
    "long": (
        "پښتو د یو شمیر پښتنو لاندې ژبه ده چې په افغانستان او پاکستان کې هره ورځ کارول کیږي. "
        "دا د سافټیک اصطلاحاتو سمه کړه لري او د حمدالله ابدالي او خوشحال خټک په شان شاعرانو "
        "له خوا د غزلونو او تاریخي ادب لپاره پېژندل کیږي."
    ),
    "short": "پښتو د یو شمیر پښتنو لاندې ژبه ده چې په افغانستان او پاکستان کې هره ورځ کارول کیږي."
},
"pt": {
    "long": (
        "O português é uma língua românica que se desenvolveu a partir do latim vulgar trazido pelos invasores romanos à Península Ibérica. "
        "É a língua oficial de Portugal, Brasil, Angola, Moçambique, Cabo Verde, Guiné-Bissau, São Tomé e Príncipe e Timor-Leste. "
        "Possui uma rica tradição literária, de Camões a Clarice Lispector, e varia regionalmente em pronúncia e vocabulário."
    ),
    "short": "O português é uma língua românica que se desenvolveu a partir do latim vulgar trazido pelos invasores romanos à Península Ibérica."
},
"qu": {
    "long": (
        "Runa simi, tukuy runa simikunapaq ruray wasiwan kikinka. Kuyuchkani karanku Inka Wangkamaya "
        "Inti Raymi chaypi yachaykunata ruranankupaq. Runa simi mereni llapa makisunapaq, mana wakin "
        "chakras yachana mannanakuyninmi."
    ),
    "short": "Runa simi, tukuy runa simikunapaq ruray wasiwan kikinka."
},
"rm": {
    "long": (
        "Rumantsch grischun è ina lingua retoromantscha che vegn discurrida en il Grischun en Svizra. "
        "Ella deriva dal latin vulgar e sa divida en plirs dialects, per exempel Sursilvan e Sutsilvan. "
        "Il Rumantsch è ina da las tschintg linguas naziunalas svizras e posseda ina literatura che cumpiglia "
        "auturs sco Curdin Collaud e Gion Deplazes."
    ),
    "short": "Rumantsch grischun è ina lingua retoromantscha che vegn discurrida en il Grischun en Svizra."
},
"rn": {
    "long": (
        "Ikirundi n’Ururimi rw’Abanyarwnda rukoresha mu Burundi, ikaba ari ururimi rumwe muri gahunda y’Indimi z’Afurika "
        "zanogewe muri Bantu. Rukoresha inyuguti za latini ndetse rusaba imirongo miremire muri nyandiko. "
        "Abantu benshi bakoresha ikirundi mu itangazamakuru no mu mashuri y’isumbuye n’ayo hejuru."
    ),
    "short": "Ikirundi n’Ururimi rw’Abanyarwnda rukoresha mu Burundi."
},
"ro": {
    "long": (
        "Româna este o limbă romanică care evoluat din latină, vorbită de peste 24 de milioane de oameni în România și Republica Moldova. "
        "Are șase cazuri gramaticale și folosește alfabetul latin. Literatura română include autori ca Mihai Eminescu și Mircea Eliade."
    ),
    "short": "Româna este o limbă romanică care evoluat din latină, vorbită de peste 24 de milioane de oameni."
},
"ru": {
    "long": (
        "Русский язык – один из восточнославянских языков, официальный язык Российской Федерации и один из рабочих языков ООН. "
        "Он использует кириллицу, имеет богатую литературную традицию с классиками как Пушкин, Достоевский и Толстой. "
        "Грамматика русского языка включает шесть падежей и свободный порядок слов."
    ),
    "short": "Русский язык – один из восточнославянских языков и официальный язык Российской Федерации."
},
"rw": {
    "long": (
        "Kinyarwanda ni ururimi kavukire rw’Abanyarwanda ndetse rukaba rumwe mu ndimi zemewe muri Repubulika y’u Rwanda. "
        "Rukoresha inyuguti zishingiye ku mpine za latini kandi rufite imivugire n’imyandikire byoroshye kumenyera. "
        "Ibyanditswe mu Kinyarwanda birimo indirimbo, imivugo n’ibitabo byanditswe n’abanditsi nka Scholastique Mukasonga."
    ),
    "short": "Kinyarwanda ni ururimi kavukire rw’Abanyarwanda kandi ni rumwe mu ndimi zemewe mu Rwanda."
},
"sa": {
    "long": (
        "संस्कृतम् एकं प्राचीनम् इंन्डो-युरोपीय भाषासमूहं भवति, भारतीय-धर्मग्रंथेषु मुख्यतः एव प्रयुज्यते। "
        "अस्य व्याकरणं पाणिनिना प्रतिस्थापितं अस्ति, यस्य विभक्तयः सप्त दश च साधारणीभावतः प्रयुक्ताः। "
        "संस्कृतस्य साहित्ये वाल्मीकि, कालिदासः च प्रमुखाः कवयः, तेषां रचनासु रामायणम्, मेघदूतम् च प्रशंसितम्।"
    ),
    "short": "संस्कृतम् एकं प्राचीनम् इंन्डो-युरोपीय भाषासमूहं भवति।"
},
"sc": {
    "long": (
        "Sa limba sarda est una limba romànica parlada in Sardigna, cun duos dialectos principales: "
        "logudoresu e campidanesu. Ignot est chi tenet un istòricu literariu riccu, cun obras de poetas "
        "e narradores comente Sebastiano Satta. Oggi sa limba suas estadísticas de usu in iscolas e "
        "ne sos media est innitziai a creschere."
    ),
    "short": "Sa limba sarda est una limba romànica parlada in Sardigna, cun duos dialectos principales."
},
"sd": {
    "long": (
        "سنڌي ٻولي سنڌ، پاڪستان جي سرڪاري ٻولين مان آهي ۽ هندستان ۾ به ڪجهه علائقن ۾ ڳالهائي وڃي ٿي. "
        "اها عربي رسم الخط ۾ لکي ويندي آهي، ۽ ان ۾ سنڌي موسيقي جا گيت، شاعري ۽ ادب جي ڊگھي تاريخ آهي. "
        "سنڌي شاعر شيخ اياز ۽ سچل سرمست وسيع طور سڃاتا ويندا آهن."
    ),
    "short": "سنڌي ٻولي سنڌ، پاڪستان جي سرڪاري ٻولين مان آهي."
},
"se": {
    "long": (
        "Davvisámegiella lea sámi giella mas leat eana ja nuortta sámiid govvidit Duodji ja joik. "
        "Dán giella lea official sámi giella Norjjas ja giddegoahtit leasto Norra mánáidgielddas. "
        "Oahppat beroštus fállat ja sámi kultuvra stuorra máilmmiid bargguide."
    ),
    "short": "Davvisámegiella lea sámi giella mas leat eana ja nuortta sámiid govvidit Duodji ja joik."
},
"sg": {
  "long": "Yângâ tî sängö a bâa awango so ayeke na pâpo: “Ti kono ande ngia, ti e tongana e mû peko ti awango so ayeke na"
    "yâ ti Bible.” Atâa so ti bâa lêge ti gba ti aye ayeke ngangu kua, Michael, ancien fadeso, a tene: “Mungo maboko na aita"
    "azia ngia na bê ti mbi mingi.” Lêgeoko nga, mingi ti e ayeke lango place oko, wala ayeke sâra kua place oko, na azo so ayeke na asarango"
    "ye nga na abângo ndô so ague nde na asarango ye ti Nzapa. Na yâ sêsê so, a yeke wara lakue azo so ayeke zia aye na gbele ala." ,
  "short": "Yângâ tî sängö a bâa awango so ayeke na pâpo: “Ti kono ande ngia, ti e tongana e mû peko ti awango so ayeke na yâ ti Bible.”"
},
"si": {
    "long": (
        "සිංහල භාෂාව ශ්‍රී ලංකාවේ ප්‍රධාන භාෂාව වන අතර, පුරාත්න කාලයේ සිට පැවති "
        "ඉකුත් 2000 වසර  තුළ සංවර්ධනය වී ඇත. මෙහි ලේඛන සම්ප්‍රදාය බොහෝ ප්‍රතිපත්ති "
        "වර්ගවලින් සමන්විතය, රජ අන්වය වාර්තා සහ ඓතිහාසික කාව්‍ය රචනා මඟින් දක්වයි."
    ),
    "short": "සිංහල භාෂාව ශ්‍රී ලංකාවේ ප්‍රධාන භාෂාව වේ."
},
"sk": {
    "long": (
        "Slovenčina je jazyk zo skupiny západoslovanských jazykov, ktorým sa hovorí najmä na Slovensku. "
        "Používa latinskú abecedu doplnenú diakritikou a má bohatú literárnu tradíciu od stredovekých kroník "
        "po moderných dielach Milana Rúfusa a Dominika Tatarku."
    ),
    "short": "Slovenčina je jazyk zo skupiny západoslovanských jazykov, ktorým sa hovorí najmä na Slovensku."
},
"sl": {
    "long": (
        "Slovenščina je južnoslovanski jezik, ki ga govorijo predvsem v Sloveniji in različnih manjšinah v sosednjih državah. "
        "Ima bogato ustno in pisno tradicijo, vključujoč pravljice, poezijo in literaturo, od Primoža Trubarja do "
        "dr. France Prešerna."
    ),
    "short": "Slovenščina je južnoslovanski jezik, ki ga govorijo predvsem v Sloveniji."
},
"sm": {
    "long": (
        "Gagana Samoa o se gagana Polenesia lea talaʻia tele i Samoa, Amerika Samoa, ma ni’au i Niue "
        "ma Tonga. E iai lona faʻamaumauga tusitusia e masani ona faʻaaogaina i aʻoga, nuʻu ma lotu. "
        "O le lotu faʻa-Samoa ma tapuaiga o loʻo taua i isi ituaiga tala Samoa."
    ),
    "short": "Gagana Samoa o se gagana Polenesia lea talaʻia tele i Samoa, Amerika Samoa, ma ni’au i Niue ma Tonga."
},
"sn": {
    "long": (
        "ChiShona mutauro weBantu unotaurwa nevanhu vanosvika mamirioni mana muZimbabwe, pamwe neMozambique neZambia. "
        "Une dzinza remadudzi akawanda anosanganisira Zezuru, Korekore, neKaranga. "
        "Mabhuku eChiShona anosanganisira nyanduri, nhetembo, uye midzimu yemadzitateguru."
    ),
    "short": "ChiShona mutauro weBantu unotaurwa nevanhu vanosvika mamirioni mana muZimbabwe."
},
"so": {
    "long": (
        "Af-Soomaali waa luuqad ka mid ah afafka Koofurta Itoobiya iyo Geeska Afrika, oo ay ugu hadlayaan "
        "malaayiin qof oo ku nool Soomaaliya, Djibouti, Itoobiya, iyo Kenya. Waxay leedahay hido suugaaneed "
        "balaadhan oo ay ka mid yihiin gabayo, heeso, iyo sheekooyin dhaqameed."
    ),
    "short": "Af-Soomaali waa luuqad ka mid ah afafka Koofurta Itoobiya iyo Geeska Afrika."
},
"sq": {
    "long": (
        "Shqipja është një gjuhë indo-evropiane brenda degës së Ballkaniko-Ilirike dhe flitet kryesisht "
        "në Shqipëri dhe Kosovë. Përdor alfabetin latin dhe ka pasur një letërsi të pasur që nga periudha "
        "e Skënderbeut e deri te autorë modernë si Ismail Kadare."
    ),
    "short": "Shqipja është një gjuhë indo-evropiane brenda degës së Ballkaniko-Ilirike."
},
"sr": {
    "long": (
        "Српски језик је јужнословенски језик који се говори углавном у Србији, Црној Гори, Босни и "
        "Херцеговини и Хрватској. Користи и ћирилично и латинично писмо и има богату књижевну традицију, "
        "од Његоша до Иве Андрића."
    ),
    "short": "Српски језик је јужнословенски језик који се говори углавном у Србији."
},
"ss": {
    "long": (
        "SiSwati yulimi lweBantu lomndeni weNguni, lukhulunywa kakhulu eSwatini naseMpumalanga eNingizimu-Afrika. "
        "Luyilulwimi lwasebotikweni eSwatini, lusetjentiselwa emacandza, etimidiya nasekufundzweni esikolweni. "
        "Lufana neZulu neXhosa etindleleni tetasi eno tilondza teklikhu ekungena ekhondvo kulimi, futsi linemagama lasetulu lelisemlandvo."
    ),
    "short": "SiSwati yulimi lweSemthethweni saseSwatini lomndeni weNguni, lufana neZulu ke lune timphawu takho."
},
"st": {
    "long": (
        "Sesotho, lebitso la Senyesemane ke Southern Sotho, ke puo ya Bantu e buwaheng ya Lesotho le Bochabela "
        "ba Afrika Borwa. E na le dipalo tsa puo tse hlalosang boholo ba bongaka ba mino ya setso le dipina. "
        "Sesotho se na le ditshwantsho tse hlalosang ditebelelo tsa setso le dipina tsa bohahlaudi."
    ),
    "short": "Sesotho ke puo ya Bantu e buwaheng ya Lesotho le Bochabela ba Afrika Borwa."
},
"su": {
    "long": (
        "Basa Sunda mangrupikeun salah sahiji basa Austronesia anu diomongkeun ku masarakat Sunda di Jawa Kulon. "
        "Basa Sunda ngabogaan struktur gramatika anu mirip sareng basa Indonesia, tapi ogé ngabogaan kosakata sareng "
        "frasa khas budaya Sunda. Sastra Sunda boga sejarah panjang tina naskah-naskah kuna dugi ka karya modéren."
    ),
    "short": "Basa Sunda diomongkeun ku masarakat Sunda di Jawa Kulon."
},
"sv": {
    "long": (
        "Svenska är ett nordgermanskt språk som talas främst i Sverige och delar av Finland. "
        "Språket utvecklades från urnordiskan och har en rik litteraturhistoria med författare som August Strindberg och Selma Lagerlöf. "
        "Svenska använder det latinska alfabetet med diakritiska tecken."
    ),
    "short": "Svenska är ett nordgermanskt språk som talas främst i Sverige och delar av Finland."
},
"sw": {
    "long": (
        "Kiswahili au Swahili ni lugha ya Kibantu inayoongelewa na mamilioni ya watu katika Afrika Mashariki, "
        "huku ikitumika kama lugha ya biashara, elimu, na siasa. Ina maandishi kwa herufi za Kilatini na ina "
        "urithi wa misemo, methali na ushairi wa kitamaduni."
    ),
    "short": "Kiswahili ni lugha ya Kibantu inayoongelewa na mamilioni ya watu katika Afrika Mashariki."
},
"ta": {
    "long": (
        "தமிழ் என்பது டிராவிட மொழிக் குடும்பத்தைச் சேர்ந்த மொழி ஆகும், "
        "இந்தியாவின் தமிழ்நாடு, புதுச்சேரி, இலங்கை மற்றும் உலகமெங்கும் உள்ள "
        "தமிழர் சமுதாயங்களில் பரவலாகப் பயன்படுத்தப்படுகிறது. இம்மொழிக்கு "
        "பாரம்பரியமான சங்க இலக்கியம், ஐயங்கார், திருக்குறள் போன்ற நூல்கள் "
        "மற்றும் பெரும் செழுமையான சரித்திரம் கொண்டது. தமிழ் எழுத்துமுறை "
        "தேசவியல் பல்வேறு எழுத்துக்களை உள்ளடக்கியது மற்றும் நவீன கல்வி, "
        "வாக்களிப்பு, ஊடகங்களில் முக்கிய பங்கு வகிக்கிறது."
    ),
    "short": "தமிழ் என்பது இந்தியா, இலங்கை மற்றும் உலகெங்கும் பேசப்படும் ஒரே பழமையான டிராவிட மொழி."
},
"te": {
    "long": (
        "తెలుగు ఒక ద్రవిడ భావా కుటుంబానికి చెందిన భాష, ఇది ప్రధానంగా భారత దేశంలోని ఆంధ్రప్రదేశ్ "
        "మరియు తెలంగాణ రాష్ట్రాల్లో మాట్లాడబడుతుంది. తెలుగు సాహిత్యం గ్రామీణ నుండి ఆధునిక ధార్వికభావనలు "
        "ప్రధానంగా ముడిగ తిరుగుతున్న 13వ శతాబ్దంలో నుండి కొనసాగుతున్నది."
    ),
    "short": "తెలుగు ఒక ద్రవిడ భావా కుటుంబానికి చెందిన భాష, ఇది తెలుగు రాష్ట్రాల్లో మాట్లాడబడుతుంది."
},
"tg": {
    "long": (
        "Тоҷикӣ забони форсӣ−тоҷикӣ буда, асосан дар Тоҷикистон ва қисматҳои Афғонистон ва Ӯзбекистон дармонда шудааст. "
        "Ин забон аз алоҳидагии фарҳанги милливу адабии пурра бархурдор аст ва дорои осори насрӣ, шеърӣ ва таърихии фаровон мебошад."
    ),
    "short": "Тоҷикӣ забони форсӣ−тоҷикӣ буда, асосан дар Тоҷикистон ва қисматҳои Афғонистон дармонда шудааст."
},
"th": {
    "long": (
        "ภาษาไทยเป็นภาษาตระกูลไท-ก๊วยที่ใช้กันอย่างแพร่หลายในประเทศไทย เป็นภาษาราชการและใช้ในระบบการศึกษา "
        "โดยมีตัวอักษรเฉพาะของตนเอง ระบบวรรณยุกต์ช่วยให้มีการสื่อสารที่หลากหลายและมีประวัติศาสตร์ด้าน "
        "วรรณกรรมที่ยาวนานตั้งแต่สมัยสุโขทัยถึงปัจจุบัน."
    ),
    "short": "ภาษาไทยเป็นภาษาตระกูลไท-ก๊วยที่ใช้กันอย่างแพร่หลายในประเทศไทย."
},
"ti": {
    "long": (
        "ትግርኛ ቋንቋ ሴሚቲክ ቋንቋ እዩ፣ ብግዝያት ኤርትራን ኣብ ሰሜን ኢትዮጵያ ብዙሓት ሰብ ይተረድዕዋ። "
        "ኣብ መንግስቲ መዝገብ፣ ትምህርቲ፣ መጽሓፍታትን ጋዜጣታትን ናይ ትግርኛ ተፃፊሉ። "
        "ጽሑፍታት ብግዕዝ ፊደል ይጻፋን።"
    ),
    "short": "ትግርኛ ብግዕዝ ፊደል ዝተፃፊ ሴሚቲክ ቋንቋ እዩ።"
},
"tk": {
    "long": (
        "Türkmençe, Merkezi Aziýanyň iňlisilikleri taryhy içinde ösüş geçiren türkmen halkynyň dili bolup, Türkmenistan döwletiniň "
        "resmi dilidir. Bu dil iňlis aragatnaşyk we metbugat serişdesi hökmünde ulanylýar we çylşyrymly grammatikasy bilen tanalýar. "
        "Edebi diliň dirçelişi 20-nji asyryň başlaryna gabat gelýär we ençeme döwürleriň şahyrlary, ýazyjylary türkmen diliniň mukaddes mirasyny döretmäge goşant goşdy."
    ),
    "short": "Türkmençe Merkezi Aziýanyň iňlisilikleri taryhy içinde ösüş geçiren türkmen halkynyň dili bolup, Türkmenistan döwletiniň resmi dilidir."
},
"tl": {
    "long": (
        "Tagalog, kilala ding Filipino, ay isang Austronesian na wika na malawak na ginagamit sa Pilipinas, lalo na sa Luzon at Metro Manila. "
        "Mayaman ito sa ating panitikan, kabilang ang mga tulang bayan, epikong pambansa tulad ng ‘Florante at Laura,’ at modernong prosa "
        "mula kay José Rizal at Francisco Balagtas. Tagalog ay nagsisilbing batayan ng pambansang wikang Filipino."
    ),
    "short": "Tagalog, kilala ding Filipino, ay isang Austronesian na wika na malawak na ginagamit sa Pilipinas."
},
"tn": {
    "long": (
        "Setswana ke polelo ya lelapa la Bantu e buiwang Botswana, Aforika Borwa, Namibia le karolo ya Zimbabwe. "
        "E na le itsholelelo e kgolo ya dipina, dipina tsa setso (kgafela) le dipina tsa semorafe tse ngata. "
        "Standard Setswana e theilwe hodima ditlhamane tsa makgareng a diprofaelete tsa Setswana, mme ke puo ya maphata a masolo a poraemari ya Botswana."
    ),
    "short": "Setswana ke polelo ya lelapa la Bantu e buiwang Botswana, Aforika Borwa, Namibia le karolo ya Zimbabwe."
},
"to": {
    "long": (
        "Faka Tonga (Tongan) ko e lea faka-Kakala Ma‘oma‘o, ko ha lea Tongan kuo ma‘u ‘i Polinesia Foʻou pea mo Tonga. "
        "E fakahoko ‘e he ngaahi fakatātai faiako ha ngaahi sēra lālō ‘i he tohi faka-Tonga mo e ngaahi va‘inga po‘uli. "
        "Fakahu‘inga e lea ia ki he ako, tohi faka-Pilitania mo e fakaheapili, ka ko e lea faka-Tongan kehekehe ange 'a e ngaahi kamata‘anga."
    ),
    "short": "Faka Tonga ko e lea faka-Kakala Ma‘oma‘o, ko ha lea Tongan kuo ma‘u 'i Polinesia Foʻou pea mo Tonga."
},
"tr": {
    "long": (
        "Türkçe, Ural-Altay dil ailesine mensup olduğu kabul edilen Türk dillerinden biridir ve Türkiye Cumhuriyeti’nin resmi dilidir. "
        "Osmanlı Türkçesinden Cumhuriyet döneminde Latin alfabesine geçişle modern Türkçe doğmuştur. Türk edebiyatı, Mevlana’dan Orhan Pamuk’a uzanan "
        "zengin bir geçmişe sahiptir."
    ),
    "short": "Türkçe, Ural-Altay dil ailesine mensup kabul edilen Türk dillerinden biridir ve Türkiye Cumhuriyeti’nin resmi dilidir."
},
"ts": {
    "long": (
        "Xitsonga (Xitsonga ya Rixaka ra Vatsonga), kumbe Tshivenda, swa ndzhaka ya Bantu e milabeni ya Afrika Dzonga. "
        "Yi na mahlovo ya timbhala to nhlayo, milawu ya mimuputo, naswona yi rhandziwa ngopfu hi xiyenge xa movha. "
        "Xitsonga xi na vumbiwa bya vopi ni tikombelo ta ntlawa ta ntolovelo lowu endleke leswaku yi va na vuhlongeri bya savun’wana."
    ),
    "short": "Xitsonga swa ndzhaka ya Bantu e milabeni ya Afrika Dzonga."
},
"tt": {
    "long": (
        "Татар теле — төрки телләр гаиләсенә караган словеслек, Татарстан Республикасының дәүләт теле булып санала. "
        "Тел дөньякүләм танылган шагыйрьләр Муса Җәлил, Габдулла Тукай кебек шәхесләрнең иҗаты аша баеган. "
        "Язу тарихы борынгы гарәп имлосы, латин хәрефләре аша үсеп, хәзерге кириллица белән гамәлдә."
    ),
    "short": "Татар теле — төрки телләр гаиләсенә караган һәм Татарстан Республикасының дәүләт теле булуы белән билгеле."
},
"tw": {
    "long": (
        "Twi ke Akan konyinyinaa Bantu kasakoa a wɔka Ghana, kum de, na ɛyɛ fie kasa wɔ Akanfie mu. "
        "Ɔde Latin anfanteɛ mu nkyerɛase, na ɛwɔ amammerɛ nwaso ne adwonkrɔn mu nnwom a wɔto afã akuw."
    ),
    "short": "Twi ke Akan konyinyinaa Bantu kasakoa a wɔka Ghana."
},
"ty": {
    "long": (
        "Reo Tahiti, te reo mā’ohi, te kuti i te reo Polenesia ‘Āmokodīa, ā te reo Tahiti i Tahiti e ia fenua toru ‘o te mētiera Rōtene. "
        "E na ore te reo Tahiti i te tuhaa noa ’tu mā’ohi, te reo tuhituhi rā e faufaa roa ’i te ora aianei. E fāna‘uraa āna i mura‘a fīra‘a e pā‘ihe tāna i raro aitetahi."
    ),
    "short": "Reo Tahiti, te reo mā’ohi, e te reo Polenesia ‘Āmokodīa i Tahiti."
},
"ug": {
    "long": (
        "ئۇيغۇر تىلى بۈگۈنكى كۈنتەنگىمۇ ئاسىيا مۆلچەرلەنگەن تۈركىي تىللار قىسىمىغا تەۋە بولۇپ، ئاساسەن جەنۇبىي شىنجاڭ رايونىدا، ئادەتتە ئەتراپتىكى ئاز سانلىق خەلقلەرنىڭ داۋاملىق مۇناسىۋىتى ئۆتكۈزۈلىدىغان ئورتاق تىل سۈپىتىدە قوللىنىلىدۇ. "
        "ئۇيغۇر ئېلېكتۇرونلۇق مەكتۇپ باشقۇرۇشى بىرخىل خەت «ئىخىلاتىچە» يېزىقلىرىغا يۆنىلىشئالدى."
    ),
    "short": "ئۇيغۇر تىلى بۈگۈنكى كۈنتەنگىمۇ ئاسىيا مۆلچەرلەنگەن تۈركىي تىللار قىسىمىغا تەۋە."
},
"uk": {
    "long": (
        "Українська мова належить до східнослов’янської групи індоєвропейських мов і є державною мовою України. "
        "Вона використовує кирилицю та має багату літературну традицію, що включає твори Тараса Шевченка, Івана Франка "
        "та Лесі Українки. Сучасна українська література та музика активно розвиваються як в Україні, так і в діаспорі."
    ),
    "short": "Українська мова належить до східнослов’янської групи індоєвропейських мов."
},
"ur": {
    "long": (
        "اردو پاکستان اور بھارت کے اردو بولنے والے علاقوں میں استعمال ہونے والی عظیم الشان زبان ہے۔ "
        "یہ فارسی، عربی اور ترکی الفاظ کے وسیع ذخیرے پر مشتمل ہے اور اردو ادب میں میر، غالب اور فیض احمد فیض "
        "جیسے شاعروں نے غیر معمولی مقام حاصل کیا ہے۔ اردو شائستگی اور نزاکت کی علامت مانی جاتی ہے۔"
    ),
    "short": "اردو پاکستان اور بھارت کے اردو بولنے والے علاقوں میں استعمال ہونے والی عظیم الشان زبان ہے۔"
},
"uz": {
    "long": (
        "Oʻzbek tili – bu turkiy tillar oilasiga mansub til boʻlib, asosan Oʻzbekiston Respublikasida, shuningdek Qozogʻiston, Qirgʻiziston, Tojikiston va Afgʻonistonning ayrim hududlarida ham soʻzlanadi. "
        "Til hozirgi oʻzbek lotin alifbosida yoziladi, ammo tarixda arab va sovet davrida kirill yozuvi ham qoʻllangan. "
        "Oʻzbek tilida bir nechta sheva mavjud boʻlib, adabiy til Mezon shevasi asosida shakllangan. "
        "Bugungi kunda media, taʼlim va hukumat organlarida keng qoʻllaniladi, boy adabiy meros va zamonaviy ilmiy nashrlar mavjud."
    ),
    "short": "Oʻzbek tili – turkiy tillar oilasiga mansub til, asosan Oʻzbekiston va qoʻshni davlatlarda soʻzlanadi."
},
"ve": {
    "long": (
        "Tshivenda ndi luambo lwa Bantu lwo mukaranga Vhembe, Afrika Tshipembe. Luambo lu na muvhili "
        "lwa mivhakhwa, mivhuso na mivhuso minzhi ya zwa ufhio. Vhathu vha muvhuso vhanzhi vha shumisa Tshivenda "
        "kushumisana na vhupa ha nḓila na zwiṅwe zwa zwikalo zwa mutakalo."
    ),
    "short": "Tshivenda ndi luambo lwa Bantu lwo mukaranga Vhembe, Afrika Tshipembe."
},
"vi": {
    "long": (
        "Tiếng Việt là ngôn ngữ chính thức của Việt Nam, thuộc ngữ hệ Nam Á và sử dụng chữ Quốc ngữ, "
        "một hệ thống chữ Latinh có dấu. Tiếng Việt có ngữ điệu rõ ràng với sáu thanh điệu, và văn học Việt Nam "
        "bao gồm các tác phẩm nổi tiếng như 'Truyện Kiều' của Nguyễn Du và thơ ca trữ tình."
    ),
    "short": "Tiếng Việt là ngôn ngữ chính thức của Việt Nam, thuộc ngữ hệ Nam Á và sử dụng chữ Quốc ngữ."
},
"vo": {
    "long": (
        "Volapük oli planeata lingl useduko oba olik-Volapük balid, kel oli äd mäd plong mal ädelik. "
        "Oli šupalid avaledik voläds binik äd lädapük sudäl yag iks mal."
    ),
    "short": "Volapük oli planeata lingl useduko oba olik-Volapük balid."
},
"wa": {
    "long": (
        "Li walon est ene limpêtre romanike ki s'parlète prinçipålmint dins l'Rwépeublique di Bêlgike, sopratut "
        "ål periferie, ås chons. Li Walon at tind lîdjére åkral avou Li Français, mès i Rtimo si dis djoû un sereut "
        "poèsie et romancen d' novêye."
    ),
    "short": "Li walon est ene limpêtre romanike ki s'parlète prinçipålmint dins l'Rwépeublique di Bêlgike."
},
"wo": {
    "long": (
        "Wolof amna cér askan wi ndékete ci Senegaal ak Gambi ak Mauritanie. Li bandu ci teks bi ak walàj "
        "li nu mën a wax, la ndigal gi la. Wolof am na buum ñeel suñu kër, suñuy ndaw te soug jar suñu fi ak "
        "ñi xamle askan wi."
    ),
    "short": "Wolof amna cér askan wi ndékete ci Senegaal ak Gambi ak Mauritanie."
},
"xh": {
    "long": (
        "isiXhosa lulwimi lweBantu olulandelwa eMzantsi Afrika, iRhodesia, neNamibia. "
        "Isebenzisa uhlobo lwezifakelo ezinomsindo wezandla njenge-clicks ne-implosives. "
        "IsiXhosa sinegalette yobugcisa bamasiko, imibongo, nemigidi yezinto zomdabu."
    ),
    "short": "isiXhosa lulwimi lweBantu olulandelwa eMzantsi Afrika, iRhodesia, neNamibia."
},
"yi": {
    "long": (
        "ייִדיש איז אַ ייִדיש-דײטש שפּראַך וואָס ווערט גערעדט פּאַר אַ סכום פֿון 13 מיליאָן ישׂראל און יאַראָפּעישער ייִדן. "
        "די שפּראַך ניצט די העברעיִשע און אַלט-דײטש אלפֿאַבעט פון שטײַגן, און האָט באַוווּסט פֿאַר זייער רייַכע סע ווערק "
        "פֿון דער יידישער ליטעראַטור."
    ),
    "short": "ייִדיש איז אַ ייִדיש-דײטש שפּראַך וואָס ווערט גערעדט פּאַר אַ סכום פֿון 13 מיליאָן ישׂראל און יאַראָפּעישער ייִדן."
},"yo": {
    "long": (
        "Èdè Yorùbá jẹ́ ọ̀kan nínú èdè Bantu àti Niger-Congo, tí wọ́n ń sọ ní Guusu-sàràbá Nigeria, "
        "Bénin àti Togo. Ó ní àwùjọ onírúurú ìtàn-àròyé, ìtàn ayé àti orin, pẹ̀lú lílo ọ̀nà ìyíya nlá fún "
        "àwọn ìrú ohun èlò àjọṣe. Àtàwọn ohun ìjìnlẹ̀ Yorùbá lè rí nípa ní ayé ìsìn àti àṣà bíi Ifá àti Oríkì."
    ),
    "short": "Èdè Yorùbá jẹ́ ọ̀kan nínú èdè Bantu tí wọ́n ń sọ ní Guusu-sàràbá Nigeria, Bénin àti Togo."
},
"za": {
    "long": (
        "Zhuang yit loih Gaemzlauz yenzyenz Bouxbingz Minzcuz Gahgoz caeuq Bouxcuengh raeuj Gvangjsih. "
        "Raeuj aeu Bouxcuengh coengh boux boux loih nangq yenda, haenh gwn laiz boux famh raeuj gyw. "
        "Bouxcuengh raeuj saek boux gwn lienz boux dus."
    ),
    "short": "Zhuang yit loih Bouxcuengh raeuj Gvangjsih."
},
"zh": {
    "long": (
        "汉语（中文）属于汉藏语系，是世界上使用人数最多的语言，主要分为普通话、粤语、闽南语、吴语等方言。 "
        "汉字是一种方块字形文字系统，已有数千年历史。汉语在诗词、散文、小说等文学形式中具有深厚的传统，"
        "从《诗经》《楚辞》到现代鲁迅、莫言，影响广泛。"
    ),
    "short": "汉语（中文）属于汉藏语系，是世界上使用人数最多的语言。"
},
"zu": {
    "long": (
        "IsiZulu singesinye sezilimi zaseNguni futhi siyakhuluma eNingizimu Afrika, ikakhulukazi eGoli naseThekwini. "
        "Sisebenzisa uhlamvu lwe-Latin olunezinkomba zamagama, futhi sinezizathu zomdabu ezijulile njengamakhosi, "
        "amasiko, kanye nezinkondlo ezidluliselwa ezizukulwaneni ngezizukulwane. Ukubaluleka kwalo kubonakala "
        "ekulondolozeni isiko namasiko omaZulu."
    ),
    "short": "IsiZulu singesinye sezilimi zaseNguni futhi siyakhuluma eNingizimu Afrika."
}

}
