/* 
# SPDX-FileCopyrightText: 2024–2025 Mattia Rubino
# SPDX-License-Identifier: BSD-3-Clause

C code produced by gperf version 3.1 */
/* Command-line: gperf -L C -t -N lookup_entity -Z EntityHash entities.gperf  */
/* Computed positions: -k'1-8,12,14' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 1 "entities.gperf"

#include "entities_hash.h"
#line 4 "entities.gperf"
;

#define TOTAL_KEYWORDS 2231
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 32
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 15511
/* maximum key range = 15510, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash(str, len)
register const char* str;
register size_t len;
{
    static unsigned short asso_values[] =
    {
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512,     0,    60,    15,    20,    25, 15512,    90,   280,
          0,     0,     0, 15512,     5,  3060,  3035,    30,   230,  2900,
       1985,  3425,   320,   185,  3555,     0,   420,  1685,   970,  1835,
       1850,   430,   745,   210,   770,   205,   590,   480,  1595,   290,
        350,   900,  3370,  1240,    90,   730,   545,  1210,    30,  1340,
       1135,   500,   250,   645,   190,  2210,   820,  3260,  2230,  3545,
         20,   145,    15,    50,    10,   100,     0,    55,   220,    25,
       2440,     5,  1570,   610,  3951,  4666,   320,  3633,  3130,  2755,
       3874,   120,   110,   755,  1430,  1250, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512,
      15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512, 15512
    };
    register unsigned int hval = len;

    switch (hval)
    {
    default:
        hval += asso_values[(unsigned char)str[13]];
        /*FALLTHROUGH*/
    case 13:
    case 12:
        hval += asso_values[(unsigned char)str[11]];
        /*FALLTHROUGH*/
    case 11:
    case 10:
    case 9:
    case 8:
        hval += asso_values[(unsigned char)str[7]];
        /*FALLTHROUGH*/
    case 7:
        hval += asso_values[(unsigned char)str[6] + 1];
        /*FALLTHROUGH*/
    case 6:
        hval += asso_values[(unsigned char)str[5] + 2];
        /*FALLTHROUGH*/
    case 5:
        hval += asso_values[(unsigned char)str[4] + 3];
        /*FALLTHROUGH*/
    case 4:
        hval += asso_values[(unsigned char)str[3] + 5];
        /*FALLTHROUGH*/
    case 3:
        hval += asso_values[(unsigned char)str[2] + 1];
        /*FALLTHROUGH*/
    case 2:
        hval += asso_values[(unsigned char)str[1]];
        /*FALLTHROUGH*/
    case 1:
        hval += asso_values[(unsigned char)str[0] + 13];
        break;
    }
    return hval;
}

struct Entity*
    lookup_entity(str, len)
    register const char* str;
register size_t len;
{
    static struct Entity wordlist[] =
    {
      {""}, {""},
#line 1140 "entities.gperf"
      {"gt", ">"
},
#line 1141 "entities.gperf"
      {"gt;", ">"
},
      {""}, {""}, {""},
#line 1395 "entities.gperf"
      {"lt", "<"
},
#line 1396 "entities.gperf"
      {"lt;", "<"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 689 "entities.gperf"
      {"ap;", "\\u2248"
},
      {""}, {""}, {""}, {""}, {""},
#line 1383 "entities.gperf"
      {"lrm;", "\\u200E"
},
      {""}, {""}, {""}, {""},
#line 1047 "entities.gperf"
      {"eta;", "\\u03B7"
},
#line 1029 "entities.gperf"
      {"epsi;", "\\u03B5"
},
      {""}, {""}, {""}, {""}, {""},
#line 1031 "entities.gperf"
      {"epsiv;", "\\u03F5"
},
      {""}, {""}, {""}, {""},
#line 1133 "entities.gperf"
      {"gnsim;", "\\u22E7"
},
      {""}, {""}, {""}, {""},
#line 1358 "entities.gperf"
      {"lnsim;", "\\u22E6"
},
      {""}, {""}, {""},
#line 586 "entities.gperf"
      {"Upsi;", "\\u03D2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1377 "entities.gperf"
      {"lpar;", "("
},
      {""}, {""}, {""}, {""},
#line 1026 "entities.gperf"
      {"epar;", "\\u22D5"
},
      {""}, {""}, {""}, {""},
#line 1023 "entities.gperf"
      {"ensp;", "\\u2002"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1034 "entities.gperf"
      {"eqsim;", "\\u2242"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1128 "entities.gperf"
      {"gnap;", "\\u2A8A"
},
      {""}, {""}, {""}, {""},
#line 1353 "entities.gperf"
      {"lnap;", "\\u2A89"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2183 "entities.gperf"
      {"wr;", "\\u2240"
},
      {""}, {""}, {""}, {""},
#line 2182 "entities.gperf"
      {"wp;", "\\u2118"
},
#line 902 "entities.gperf"
      {"cup;", "\\u222A"
},
#line 1405 "entities.gperf"
      {"ltri;", "\\u25C3"
},
#line 1379 "entities.gperf"
      {"lrarr;", "\\u21C6"
},
      {""}, {""}, {""}, {""},
#line 1043 "entities.gperf"
      {"erarr;", "\\u2971"
},
      {""}, {""},
#line 1050 "entities.gperf"
      {"euml", "\\xEB"
},
#line 1051 "entities.gperf"
      {"euml;", "\\xEB"
},
#line 888 "entities.gperf"
      {"crarr;", "\\u21B5"
},
      {""}, {""}, {""},
#line 1164 "entities.gperf"
      {"hbar;", "\\u210F"
},
      {""}, {""}, {""},
#line 705 "entities.gperf"
      {"auml", "\\xE4"
},
#line 706 "entities.gperf"
      {"auml;", "\\xE4"
},
#line 1288 "entities.gperf"
      {"lbarr;", "\\u290C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 591 "entities.gperf"
      {"Uuml", "\\xDC"
},
#line 592 "entities.gperf"
      {"Uuml;", "\\xDC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1052 "entities.gperf"
      {"euro;", "\\u20AC"
},
      {""}, {""}, {""}, {""},
#line 983 "entities.gperf"
      {"dtri;", "\\u25BF"
},
      {""}, {""}, {""}, {""}, {""},
#line 907 "entities.gperf"
      {"cupor;", "\\u2A45"
},
      {""}, {""},
#line 700 "entities.gperf"
      {"ast;", "*"
},
      {""}, {""}, {""}, {""}, {""},
#line 759 "entities.gperf"
      {"bnot;", "\\u2310"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 980 "entities.gperf"
      {"dsol;", "\\u29F6"
},
#line 985 "entities.gperf"
      {"duarr;", "\\u21F5"
},
      {""},
#line 1235 "entities.gperf"
      {"it;", "\\u2062"
},
      {""}, {""}, {""}, {""}, {""},
#line 1022 "entities.gperf"
      {"eng;", "\\u014B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 669 "entities.gperf"
      {"ang;", "\\u2220"
},
#line 876 "entities.gperf"
      {"comp;", "\\u2201"
},
      {""}, {""},
#line 1210 "entities.gperf"
      {"in;", "\\u2208"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 964 "entities.gperf"
      {"dot;", "\\u02D9"
},
      {""}, {""}, {""}, {""}, {""},
#line 991 "entities.gperf"
      {"eDot;", "\\u2251"
},
#line 1360 "entities.gperf"
      {"loarr;", "\\u21FD"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 653 "entities.gperf"
      {"af;", "\\u2061"
},
      {""}, {""}, {""}, {""}, {""},
#line 1130 "entities.gperf"
      {"gne;", "\\u2A88"
},
#line 821 "entities.gperf"
      {"bump;", "\\u224E"
},
      {""}, {""}, {""},
#line 1355 "entities.gperf"
      {"lne;", "\\u2A87"
},
      {""},
#line 681 "entities.gperf"
      {"angrt;", "\\u221F"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 310 "entities.gperf"
      {"Lt;", "\\u226A"
},
#line 692 "entities.gperf"
      {"ape;", "\\u224A"
},
#line 718 "entities.gperf"
      {"bbrk;", "\\u23B5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1215 "entities.gperf"
      {"int;", "\\u222B"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1039 "entities.gperf"
      {"equiv;", "\\u2261"
},
      {""}, {""}, {""},
#line 816 "entities.gperf"
      {"bsol;", "\\"
},
#line 1173 "entities.gperf"
      {"hoarr;", "\\u21FF"
},
      {""}, {""}, {""}, {""},
#line 1406 "entities.gperf"
      {"ltrie;", "\\u22B4"
},
      {""}, {""}, {""}, {""}, {""},
#line 1027 "entities.gperf"
      {"eparsl;", "\\u29E3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1075 "entities.gperf"
      {"frac12", "\\xBD"
},
#line 1076 "entities.gperf"
      {"frac12;", "\\xBD"
},
      {""}, {""}, {""},
#line 2167 "entities.gperf"
      {"vprop;", "\\u221D"
},
      {""}, {""}, {""}, {""},
#line 1292 "entities.gperf"
      {"lbrke;", "\\u298B"
},
      {""}, {""},
#line 1238 "entities.gperf"
      {"iuml", "\\xEF"
},
#line 1239 "entities.gperf"
      {"iuml;", "\\xEF"
},
#line 1078 "entities.gperf"
      {"frac14", "\\xBC"
},
#line 1079 "entities.gperf"
      {"frac14;", "\\xBC"
},
      {""},
#line 761 "entities.gperf"
      {"bot;", "\\u22A5"
},
      {""},
#line 946 "entities.gperf"
      {"dharr;", "\\u21C2"
},
#line 1080 "entities.gperf"
      {"frac15;", "\\u2155"
},
      {""},
#line 1118 "entities.gperf"
      {"gfr;", "\\U0001D524"
},
      {""}, {""},
#line 1081 "entities.gperf"
      {"frac16;", "\\u2159"
},
      {""},
#line 1336 "entities.gperf"
      {"lfr;", "\\U0001D529"
},
#line 1072 "entities.gperf"
      {"fork;", "\\u22D4"
},
#line 1085 "entities.gperf"
      {"frac34", "\\xBE"
},
#line 1086 "entities.gperf"
      {"frac34;", "\\xBE"
},
      {""},
#line 1004 "entities.gperf"
      {"efr;", "\\U0001D522"
},
      {""},
#line 1073 "entities.gperf"
      {"forkv;", "\\u2AD9"
},
#line 1087 "entities.gperf"
      {"frac35;", "\\u2157"
},
      {""},
#line 849 "entities.gperf"
      {"cfr;", "\\U0001D520"
},
      {""}, {""},
#line 1089 "entities.gperf"
      {"frac45;", "\\u2158"
},
      {""},
#line 654 "entities.gperf"
      {"afr;", "\\U0001D51E"
},
#line 629 "entities.gperf"
      {"Yuml;", "\\u0178"
},
      {""}, {""}, {""},
#line 1242 "entities.gperf"
      {"jfr;", "\\U0001D527"
},
#line 1264 "entities.gperf"
      {"lHar;", "\\u2962"
},
      {""},
#line 1090 "entities.gperf"
      {"frac56;", "\\u215A"
},
      {""},
#line 563 "entities.gperf"
      {"Ufr;", "\\U0001D518"
},
      {""}, {""}, {""}, {""}, {""},
#line 893 "entities.gperf"
      {"csup;", "\\u2AD0"
},
      {""},
#line 1077 "entities.gperf"
      {"frac13;", "\\u2153"
},
      {""},
#line 1759 "entities.gperf"
      {"quot", "\""
},
#line 1760 "entities.gperf"
      {"quot;", "\""
},
#line 1024 "entities.gperf"
      {"eogon;", "\\u0119"
},
      {""}, {""}, {""}, {""},
#line 915 "entities.gperf"
      {"curren", "\\xA4"
},
#line 916 "entities.gperf"
      {"curren;", "\\xA4"
},
#line 319 "entities.gperf"
      {"Mu;", "\\u039C"
},
#line 944 "entities.gperf"
      {"dfr;", "\\U0001D521"
},
      {""},
#line 687 "entities.gperf"
      {"aogon;", "\\u0105"
},
#line 1148 "entities.gperf"
      {"gtrarr;", "\\u2978"
},
      {""},
#line 1170 "entities.gperf"
      {"hfr;", "\\U0001D525"
},
      {""}, {""},
#line 1084 "entities.gperf"
      {"frac25;", "\\u2156"
},
      {""}, {""}, {""},
#line 573 "entities.gperf"
      {"Uogon;", "\\u0172"
},
      {""}, {""},
#line 757 "entities.gperf"
      {"bne;", "=\\u20E5"
},
      {""}, {""},
#line 1082 "entities.gperf"
      {"frac18;", "\\u215B"
},
      {""}, {""},
#line 925 "entities.gperf"
      {"dHar;", "\\u2965"
},
      {""}, {""}, {""}, {""}, {""},
#line 898 "entities.gperf"
      {"cuepr;", "\\u22DE"
},
      {""}, {""}, {""}, {""}, {""},
#line 1088 "entities.gperf"
      {"frac38;", "\\u215C"
},
      {""}, {""}, {""},
#line 945 "entities.gperf"
      {"dharl;", "\\u21C3"
},
#line 1378 "entities.gperf"
      {"lparlt;", "\\u2993"
},
      {""},
#line 442 "entities.gperf"
      {"Qfr;", "\\U0001D514"
},
      {""}, {""},
#line 1091 "entities.gperf"
      {"frac58;", "\\u215D"
},
      {""}, {""}, {""}, {""},
#line 1083 "entities.gperf"
      {"frac23;", "\\u2154"
},
      {""},
#line 1063 "entities.gperf"
      {"ffr;", "\\U0001D523"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2180 "entities.gperf"
      {"wfr;", "\\U0001D534"
},
      {""},
#line 823 "entities.gperf"
      {"bumpe;", "\\u224F"
},
      {""}, {""}, {""}, {""},
#line 671 "entities.gperf"
      {"angle;", "\\u2220"
},
      {""}, {""},
#line 2162 "entities.gperf"
      {"vfr;", "\\U0001D533"
},
      {""}, {""},
#line 909 "entities.gperf"
      {"curarr;", "\\u21B7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1131 "entities.gperf"
      {"gneq;", "\\u2A88"
},
#line 1132 "entities.gperf"
      {"gneqq;", "\\u2269"
},
      {""}, {""}, {""},
#line 1356 "entities.gperf"
      {"lneq;", "\\u2A87"
},
#line 1357 "entities.gperf"
      {"lneqq;", "\\u2268"
},
#line 884 "entities.gperf"
      {"coprod;", "\\u2210"
},
#line 1106 "entities.gperf"
      {"ge;", "\\u2265"
},
#line 731 "entities.gperf"
      {"bfr;", "\\U0001D51F"
},
      {""}, {""}, {""},
#line 1306 "entities.gperf"
      {"le;", "\\u2264"
},
#line 1111 "entities.gperf"
      {"ges;", "\\u2A7E"
},
      {""},
#line 1368 "entities.gperf"
      {"lopar;", "\\u2985"
},
#line 762 "entities.gperf"
      {"bottom;", "\\u22A5"
},
#line 1002 "entities.gperf"
      {"ee;", "\\u2147"
},
#line 1321 "entities.gperf"
      {"les;", "\\u2A7D"
},
      {""}, {""},
#line 1092 "entities.gperf"
      {"frac78;", "\\u215E"
},
      {""},
#line 1108 "entities.gperf"
      {"geq;", "\\u2265"
},
      {""}, {""}, {""}, {""},
#line 1318 "entities.gperf"
      {"leq;", "\\u2264"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1144 "entities.gperf"
      {"gtdot;", "\\u22D7"
},
      {""}, {""},
#line 885 "entities.gperf"
      {"copy", "\\xA9"
},
#line 886 "entities.gperf"
      {"copy;", "\\xA9"
},
#line 1399 "entities.gperf"
      {"ltdot;", "\\u22D6"
},
      {""}, {""}, {""}, {""},
#line 767 "entities.gperf"
      {"boxDr;", "\\u2553"
},
      {""}, {""}, {""}, {""},
#line 895 "entities.gperf"
      {"ctdot;", "\\u22EF"
},
      {""}, {""},
#line 664 "entities.gperf"
      {"and;", "\\u2227"
},
      {""}, {""}, {""}, {""}, {""},
#line 1116 "entities.gperf"
      {"gesl;", "\\u22DB\\uFE00"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 199 "entities.gperf"
      {"Hfr;", "\\u210C"
},
      {""}, {""}, {""}, {""},
#line 166 "entities.gperf"
      {"Ffr;", "\\U0001D509"
},
      {""}, {""},
#line 824 "entities.gperf"
      {"bumpeq;", "\\u224F"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1194 "entities.gperf"
      {"ifr;", "\\U0001D526"
},
      {""},
#line 982 "entities.gperf"
      {"dtdot;", "\\u22F1"
},
      {""}, {""}, {""}, {""},
#line 894 "entities.gperf"
      {"csupe;", "\\u2AD2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 822 "entities.gperf"
      {"bumpE;", "\\u2AAE"
},
#line 882 "entities.gperf"
      {"conint;", "\\u222E"
},
      {""}, {""},
#line 516 "entities.gperf"
      {"Star;", "\\u22C6"
},
      {""}, {""}, {""},
#line 626 "entities.gperf"
      {"Yfr;", "\\U0001D51C"
},
      {""},
#line 1222 "entities.gperf"
      {"iogon;", "\\u012F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 525 "entities.gperf"
      {"Sum;", "\\u2211"
},
      {""},
#line 766 "entities.gperf"
      {"boxDl;", "\\u2556"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 102 "entities.gperf"
      {"Dot;", "\\xA8"
},
      {""},
#line 1045 "entities.gperf"
      {"esdot;", "\\u2250"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1119 "entities.gperf"
      {"gg;", "\\u226B"
},
#line 294 "entities.gperf"
      {"Lfr;", "\\U0001D50F"
},
      {""}, {""}, {""},
#line 1337 "entities.gperf"
      {"lg;", "\\u2276"
},
      {""}, {""}, {""}, {""},
#line 1005 "entities.gperf"
      {"eg;", "\\u2A9A"
},
#line 526 "entities.gperf"
      {"Sup;", "\\u22D1"
},
      {""}, {""}, {""},
#line 81 "entities.gperf"
      {"DD;", "\\u2145"
},
#line 1008 "entities.gperf"
      {"egs;", "\\u2A96"
},
      {""}, {""}, {""},
#line 1597 "entities.gperf"
      {"nu;", "\\u03BD"
},
#line 846 "entities.gperf"
      {"cent", "\\xA2"
},
#line 847 "entities.gperf"
      {"cent;", "\\xA2"
},
#line 851 "entities.gperf"
      {"check;", "\\u2713"
},
      {""},
#line 1030 "entities.gperf"
      {"epsilon;", "\\u03B5"
},
#line 223 "entities.gperf"
      {"Int;", "\\u222C"
},
#line 1224 "entities.gperf"
      {"iota;", "\\u03B9"
},
      {""}, {""}, {""},
#line 1750 "entities.gperf"
      {"qfr;", "\\U0001D52E"
},
      {""}, {""}, {""},
#line 1152 "entities.gperf"
      {"gtrless;", "\\u2277"
},
      {""},
#line 1545 "entities.gperf"
      {"npar;", "\\u2226"
},
      {""}, {""}, {""}, {""}, {""},
#line 765 "entities.gperf"
      {"boxDR;", "\\u2554"
},
      {""},
#line 587 "entities.gperf"
      {"Upsilon;", "\\u03A5"
},
#line 1598 "entities.gperf"
      {"num;", "#"
},
      {""}, {""},
#line 1166 "entities.gperf"
      {"hearts;", "\\u2665"
},
      {""},
#line 1474 "entities.gperf"
      {"nbsp", "\\xA0"
},
#line 1475 "entities.gperf"
      {"nbsp;", "\\xA0"
},
      {""}, {""}, {""},
#line 1317 "entities.gperf"
      {"leg;", "\\u22DA"
},
#line 507 "entities.gperf"
      {"Sqrt;", "\\u221A"
},
#line 776 "entities.gperf"
      {"boxUr;", "\\u2559"
},
      {""}, {""},
#line 315 "entities.gperf"
      {"Mfr;", "\\U0001D510"
},
      {""},
#line 1548 "entities.gperf"
      {"npart;", "\\u2202\\u0338"
},
      {""}, {""}, {""},
#line 1147 "entities.gperf"
      {"gtrapprox;", "\\u2A86"
},
      {""},
#line 672 "entities.gperf"
      {"angmsd;", "\\u2221"
},
      {""},
#line 234 "entities.gperf"
      {"Iuml", "\\xCF"
},
#line 235 "entities.gperf"
      {"Iuml;", "\\xCF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2161 "entities.gperf"
      {"vert;", "|"
},
      {""}, {""}, {""},
#line 1550 "entities.gperf"
      {"npr;", "\\u2280"
},
#line 1109 "entities.gperf"
      {"geqq;", "\\u2267"
},
#line 1556 "entities.gperf"
      {"nrarr;", "\\u219B"
},
#line 1037 "entities.gperf"
      {"equals;", "="
},
      {""}, {""},
#line 1319 "entities.gperf"
      {"leqq;", "\\u2266"
},
      {""},
#line 1558 "entities.gperf"
      {"nrarrw;", "\\u219D\\u0338"
},
#line 939 "entities.gperf"
      {"deg", "\\xB0"
},
      {""}, {""}, {""}, {""}, {""},
#line 940 "entities.gperf"
      {"deg;", "\\xB0"
},
      {""},
#line 1617 "entities.gperf"
      {"nwarr;", "\\u2196"
},
      {""}, {""}, {""}, {""}, {""},
#line 887 "entities.gperf"
      {"copysr;", "\\u2117"
},
      {""}, {""}, {""}, {""}, {""},
#line 968 "entities.gperf"
      {"dotplus;", "\\u2214"
},
      {""},
#line 1391 "entities.gperf"
      {"lsqb;", "["
},
      {""},
#line 1071 "entities.gperf"
      {"forall;", "\\u2200"
},
      {""},
#line 1374 "entities.gperf"
      {"loz;", "\\u25CA"
},
      {""}, {""}, {""},
#line 194 "entities.gperf"
      {"Gt;", "\\u226B"
},
      {""}, {""}, {""}, {""}, {""},
#line 674 "entities.gperf"
      {"angmsdab;", "\\u29A9"
},
      {""}, {""}, {""},
#line 910 "entities.gperf"
      {"curarrm;", "\\u293C"
},
#line 160 "entities.gperf"
      {"Eta;", "\\u0397"
},
      {""}, {""}, {""}, {""},
#line 93 "entities.gperf"
      {"Dfr;", "\\U0001D507"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 775 "entities.gperf"
      {"boxUl;", "\\u255C"
},
      {""}, {""}, {""}, {""}, {""},
#line 1117 "entities.gperf"
      {"gesles;", "\\u2A94"
},
      {""}, {""}, {""}, {""}, {""},
#line 795 "entities.gperf"
      {"boxplus;", "\\u229E"
},
      {""}, {""}, {""}, {""},
#line 1533 "entities.gperf"
      {"not", "\\xAC"
},
      {""}, {""},
#line 817 "entities.gperf"
      {"bsolb;", "\\u29C5"
},
      {""}, {""},
#line 1534 "entities.gperf"
      {"not;", "\\xAC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 238 "entities.gperf"
      {"Jfr;", "\\U0001D50D"
},
      {""}, {""}, {""}, {""},
#line 1120 "entities.gperf"
      {"ggg;", "\\u22D9"
},
#line 1154 "entities.gperf"
      {"gvertneqq;", "\\u2269\\uFE00"
},
#line 1135 "entities.gperf"
      {"grave;", "`"
},
      {""}, {""}, {""},
#line 1410 "entities.gperf"
      {"lvertneqq;", "\\u2268\\uFE00"
},
      {""}, {""}, {""}, {""},
#line 1589 "entities.gperf"
      {"ntgl;", "\\u2279"
},
#line 774 "entities.gperf"
      {"boxUR;", "\\u255A"
},
      {""}, {""},
#line 615 "entities.gperf"
      {"Xfr;", "\\U0001D51B"
},
#line 852 "entities.gperf"
      {"checkmark;", "\\u2713"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1614 "entities.gperf"
      {"nvsim;", "\\u223C\\u20D2"
},
      {""}, {""},
#line 161 "entities.gperf"
      {"Euml", "\\xCB"
},
#line 162 "entities.gperf"
      {"Euml;", "\\xCB"
},
      {""},
#line 1169 "entities.gperf"
      {"hercon;", "\\u22B9"
},
      {""},
#line 2156 "entities.gperf"
      {"vee;", "\\u2228"
},
      {""},
#line 2203 "entities.gperf"
      {"xrarr;", "\\u27F6"
},
      {""}, {""}, {""}, {""},
#line 1535 "entities.gperf"
      {"notin;", "\\u2209"
},
#line 727 "entities.gperf"
      {"bernou;", "\\u212C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1294 "entities.gperf"
      {"lbrkslu;", "\\u298D"
},
      {""}, {""},
#line 1339 "entities.gperf"
      {"lhard;", "\\u21BD"
},
      {""}, {""},
#line 499 "entities.gperf"
      {"Sfr;", "\\U0001D516"
},
      {""}, {""}, {""}, {""}, {""},
#line 801 "entities.gperf"
      {"boxv;", "\\u2502"
},
#line 802 "entities.gperf"
      {"boxvH;", "\\u256A"
},
      {""}, {""}, {""}, {""},
#line 1508 "entities.gperf"
      {"nharr;", "\\u21AE"
},
      {""}, {""}, {""},
#line 1603 "entities.gperf"
      {"nvap;", "\\u224D\\u20D2"
},
      {""}, {""}, {""}, {""}, {""},
#line 571 "entities.gperf"
      {"Union;", "\\u22C3"
},
#line 1547 "entities.gperf"
      {"nparsl;", "\\u2AFD\\u20E5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1137 "entities.gperf"
      {"gsim;", "\\u2273"
},
      {""}, {""}, {""},
#line 680 "entities.gperf"
      {"angmsdah;", "\\u29AF"
},
#line 1388 "entities.gperf"
      {"lsim;", "\\u2272"
},
      {""}, {""}, {""},
#line 460 "entities.gperf"
      {"Rho;", "\\u03A1"
},
#line 1046 "entities.gperf"
      {"esim;", "\\u2242"
},
#line 1112 "entities.gperf"
      {"gescc;", "\\u2AA9"
},
#line 808 "entities.gperf"
      {"bprime;", "\\u2035"
},
      {""},
#line 216 "entities.gperf"
      {"Ifr;", "\\u2111"
},
      {""},
#line 1322 "entities.gperf"
      {"lescc;", "\\u2AA8"
},
      {""}, {""}, {""},
#line 728 "entities.gperf"
      {"beta;", "\\u03B2"
},
      {""}, {""},
#line 391 "entities.gperf"
      {"Nu;", "\\u039D"
},
      {""}, {""},
#line 1212 "entities.gperf"
      {"infin;", "\\u221E"
},
      {""}, {""}, {""}, {""},
#line 807 "entities.gperf"
      {"boxvr;", "\\u251C"
},
      {""}, {""},
#line 1497 "entities.gperf"
      {"nfr;", "\\U0001D52B"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1476 "entities.gperf"
      {"nbump;", "\\u224E\\u0338"
},
      {""}, {""}, {""}, {""},
#line 228 "entities.gperf"
      {"Iogon;", "\\u012E"
},
      {""}, {""}, {""},
#line 891 "entities.gperf"
      {"csub;", "\\u2ACF"
},
#line 1225 "entities.gperf"
      {"iprod;", "\\u2A3C"
},
      {""}, {""}, {""},
#line 1583 "entities.gperf"
      {"nsup;", "\\u2285"
},
#line 922 "entities.gperf"
      {"cwint;", "\\u2231"
},
      {""}, {""}, {""}, {""},
#line 708 "entities.gperf"
      {"awint;", "\\u2A11"
},
      {""}, {""},
#line 678 "entities.gperf"
      {"angmsdaf;", "\\u29AD"
},
      {""}, {""}, {""}, {""},
#line 637 "entities.gperf"
      {"Zfr;", "\\u2128"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1606 "entities.gperf"
      {"nvgt;", ">\\u20D2"
},
      {""}, {""}, {""},
#line 853 "entities.gperf"
      {"chi;", "\\u03C7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 230 "entities.gperf"
      {"Iota;", "\\u0399"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 103 "entities.gperf"
      {"DotDot;", "\\u20DC"
},
      {""}, {""},
#line 670 "entities.gperf"
      {"ange;", "\\u29A4"
},
#line 806 "entities.gperf"
      {"boxvl;", "\\u2524"
},
      {""}, {""}, {""}, {""},
#line 2192 "entities.gperf"
      {"xharr;", "\\u27F7"
},
#line 252 "entities.gperf"
      {"LT", "<"
},
#line 253 "entities.gperf"
      {"LT;", "<"
},
      {""},
#line 1191 "entities.gperf"
      {"iexcl", "\\xA1"
},
#line 1192 "entities.gperf"
      {"iexcl;", "\\xA1"
},
      {""}, {""}, {""}, {""},
#line 1572 "entities.gperf"
      {"nspar;", "\\u2226"
},
      {""}, {""}, {""}, {""},
#line 965 "entities.gperf"
      {"doteq;", "\\u2250"
},
      {""}, {""}, {""},
#line 814 "entities.gperf"
      {"bsim;", "\\u223D"
},
#line 1139 "entities.gperf"
      {"gsiml;", "\\u2A90"
},
      {""}, {""}, {""}, {""}, {""},
#line 1401 "entities.gperf"
      {"ltimes;", "\\u22C9"
},
      {""},
#line 459 "entities.gperf"
      {"Rfr;", "\\u211C"
},
      {""}, {""}, {""}, {""},
#line 1458 "entities.gperf"
      {"nLt;", "\\u226A\\u20D2"
},
      {""}, {""},
#line 665 "entities.gperf"
      {"andand;", "\\u2A55"
},
      {""},
#line 31 "entities.gperf"
      {"Auml", "\\xC4"
},
#line 32 "entities.gperf"
      {"Auml;", "\\xC4"
},
      {""}, {""}, {""},
#line 145 "entities.gperf"
      {"Efr;", "\\U0001D508"
},
      {""},
#line 1359 "entities.gperf"
      {"loang;", "\\u27EC"
},
      {""}, {""},
#line 336 "entities.gperf"
      {"Not;", "\\u2AEC"
},
      {""},
#line 919 "entities.gperf"
      {"cuvee;", "\\u22CE"
},
      {""},
#line 1486 "entities.gperf"
      {"ne;", "\\u2260"
},
#line 2190 "entities.gperf"
      {"xfr;", "\\U0001D535"
},
      {""},
#line 804 "entities.gperf"
      {"boxvR;", "\\u255E"
},
      {""}, {""}, {""}, {""}, {""},
#line 1753 "entities.gperf"
      {"qprime;", "\\u2057"
},
      {""},
#line 1193 "entities.gperf"
      {"iff;", "\\u21D4"
},
      {""},
#line 1138 "entities.gperf"
      {"gsime;", "\\u2A8E"
},
      {""}, {""},
#line 183 "entities.gperf"
      {"Gfr;", "\\U0001D50A"
},
      {""},
#line 1389 "entities.gperf"
      {"lsime;", "\\u2A8D"
},
      {""}, {""}, {""}, {""},
#line 152 "entities.gperf"
      {"Eogon;", "\\u0118"
},
      {""}, {""}, {""},
#line 709 "entities.gperf"
      {"bNot;", "\\u2AED"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1494 "entities.gperf"
      {"nesim;", "\\u2242\\u0338"
},
      {""}, {""},
#line 1537 "entities.gperf"
      {"notindot;", "\\u22F5\\u0338"
},
#line 668 "entities.gperf"
      {"andv;", "\\u2A5A"
},
      {""}, {""}, {""}, {""},
#line 1105 "entities.gperf"
      {"gdot;", "\\u0121"
},
#line 1509 "entities.gperf"
      {"nhpar;", "\\u2AF2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1001 "entities.gperf"
      {"edot;", "\\u0117"
},
      {""}, {""},
#line 1371 "entities.gperf"
      {"lotimes;", "\\u2A34"
},
      {""},
#line 842 "entities.gperf"
      {"cdot;", "\\u010B"
},
#line 892 "entities.gperf"
      {"csube;", "\\u2AD1"
},
      {""},
#line 1293 "entities.gperf"
      {"lbrksld;", "\\u298F"
},
      {""}, {""},
#line 1585 "entities.gperf"
      {"nsupe;", "\\u2289"
},
      {""}, {""}, {""},
#line 843 "entities.gperf"
      {"cedil", "\\xB8"
},
#line 844 "entities.gperf"
      {"cedil;", "\\xB8"
},
      {""},
#line 935 "entities.gperf"
      {"dd;", "\\u2146"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2173 "entities.gperf"
      {"vsupne;", "\\u228B\\uFE00"
},
      {""}, {""},
#line 777 "entities.gperf"
      {"boxV;", "\\u2551"
},
#line 778 "entities.gperf"
      {"boxVH;", "\\u256C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 809 "entities.gperf"
      {"breve;", "\\u02D8"
},
      {""}, {""}, {""}, {""},
#line 1143 "entities.gperf"
      {"gtcir;", "\\u2A7A"
},
      {""}, {""}, {""}, {""},
#line 1398 "entities.gperf"
      {"ltcir;", "\\u2A79"
},
      {""}, {""}, {""}, {""},
#line 1489 "entities.gperf"
      {"nearr;", "\\u2197"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 455 "entities.gperf"
      {"Re;", "\\u211C"
},
      {""}, {""}, {""},
#line 1557 "entities.gperf"
      {"nrarrc;", "\\u2933\\u0338"
},
      {""}, {""}, {""}, {""}, {""},
#line 1220 "entities.gperf"
      {"intprod;", "\\u2A3C"
},
      {""},
#line 1229 "entities.gperf"
      {"isin;", "\\u2208"
},
      {""},
#line 977 "entities.gperf"
      {"drcrop;", "\\u230C"
},
      {""},
#line 677 "entities.gperf"
      {"angmsdae;", "\\u29AC"
},
      {""},
#line 1234 "entities.gperf"
      {"isinv;", "\\u2208"
},
      {""},
#line 429 "entities.gperf"
      {"Pr;", "\\u2ABB"
},
      {""}, {""},
#line 783 "entities.gperf"
      {"boxVr;", "\\u255F"
},
      {""}, {""},
#line 332 "entities.gperf"
      {"Nfr;", "\\U0001D511"
},
      {""}, {""}, {""},
#line 897 "entities.gperf"
      {"cudarrr;", "\\u2935"
},
      {""},
#line 1136 "entities.gperf"
      {"gscr;", "\\u210A"
},
#line 580 "entities.gperf"
      {"UpTee;", "\\u22A5"
},
#line 1246 "entities.gperf"
      {"jsercy;", "\\u0458"
},
      {""},
#line 1101 "entities.gperf"
      {"gap;", "\\u2A86"
},
#line 1386 "entities.gperf"
      {"lscr;", "\\U0001D4C1"
},
#line 815 "entities.gperf"
      {"bsime;", "\\u22CD"
},
#line 976 "entities.gperf"
      {"drcorn;", "\\u231F"
},
      {""},
#line 1272 "entities.gperf"
      {"lap;", "\\u2A85"
},
#line 1044 "entities.gperf"
      {"escr;", "\\u212F"
},
      {""}, {""}, {""},
#line 1284 "entities.gperf"
      {"lat;", "\\u2AAB"
},
#line 890 "entities.gperf"
      {"cscr;", "\\U0001D4B8"
},
      {""}, {""}, {""},
#line 826 "entities.gperf"
      {"cap;", "\\u2229"
},
#line 699 "entities.gperf"
      {"ascr;", "\\U0001D4B6"
},
      {""},
#line 1290 "entities.gperf"
      {"lbrace;", "{"
},
      {""}, {""},
#line 1245 "entities.gperf"
      {"jscr;", "\\U0001D4BF"
},
      {""}, {""}, {""}, {""},
#line 589 "entities.gperf"
      {"Uscr;", "\\U0001D4B0"
},
#line 1504 "entities.gperf"
      {"ngsim;", "\\u2275"
},
      {""}, {""}, {""},
#line 1150 "entities.gperf"
      {"gtreqless;", "\\u22DB"
},
#line 937 "entities.gperf"
      {"ddarr;", "\\u21CA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1584 "entities.gperf"
      {"nsupE;", "\\u2AC6\\u0338"
},
      {""}, {""}, {""},
#line 978 "entities.gperf"
      {"dscr;", "\\U0001D4B9"
},
      {""}, {""}, {""},
#line 1505 "entities.gperf"
      {"ngt;", "\\u226F"
},
#line 1179 "entities.gperf"
      {"hscr;", "\\U0001D4BD"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1602 "entities.gperf"
      {"nvHarr;", "\\u2904"
},
      {""},
#line 16 "entities.gperf"
      {"Afr;", "\\U0001D504"
},
#line 1142 "entities.gperf"
      {"gtcc;", "\\u2AA7"
},
#line 874 "entities.gperf"
      {"comma;", ","
},
      {""}, {""}, {""},
#line 1397 "entities.gperf"
      {"ltcc;", "\\u2AA6"
},
      {""}, {""}, {""}, {""},
#line 1506 "entities.gperf"
      {"ngtr;", "\\u226F"
},
      {""}, {""}, {""},
#line 966 "entities.gperf"
      {"doteqdot;", "\\u2251"
},
#line 1275 "entities.gperf"
      {"larr;", "\\u2190"
},
#line 782 "entities.gperf"
      {"boxVl;", "\\u2562"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 444 "entities.gperf"
      {"Qscr;", "\\U0001D4AC"
},
      {""}, {""}, {""}, {""}, {""},
#line 22 "entities.gperf"
      {"Aogon;", "\\u0104"
},
      {""},
#line 643 "entities.gperf"
      {"ac;", "\\u223E"
},
      {""},
#line 1095 "entities.gperf"
      {"fscr;", "\\U0001D4BB"
},
      {""}, {""}, {""}, {""},
#line 555 "entities.gperf"
      {"Uarr;", "\\u219F"
},
      {""}, {""}, {""},
#line 903 "entities.gperf"
      {"cupbrcap;", "\\u2A48"
},
#line 2185 "entities.gperf"
      {"wscr;", "\\U0001D4CC"
},
#line 1581 "entities.gperf"
      {"nsucc;", "\\u2281"
},
      {""}, {""}, {""}, {""},
#line 834 "entities.gperf"
      {"caron;", "\\u02C7"
},
      {""}, {""}, {""},
#line 2169 "entities.gperf"
      {"vscr;", "\\U0001D4CB"
},
      {""}, {""}, {""}, {""},
#line 928 "entities.gperf"
      {"darr;", "\\u2193"
},
      {""},
#line 1283 "entities.gperf"
      {"larrtl;", "\\u21A2"
},
      {""},
#line 679 "entities.gperf"
      {"angmsdag;", "\\u29AE"
},
#line 1161 "entities.gperf"
      {"harr;", "\\u2194"
},
      {""}, {""}, {""}, {""}, {""},
#line 1571 "entities.gperf"
      {"nsmid;", "\\u2224"
},
      {""}, {""}, {""}, {""},
#line 780 "entities.gperf"
      {"boxVR;", "\\u2560"
},
      {""},
#line 154 "entities.gperf"
      {"Epsilon;", "\\u0395"
},
      {""},
#line 812 "entities.gperf"
      {"bscr;", "\\U0001D4B7"
},
#line 581 "entities.gperf"
      {"UpTeeArrow;", "\\u21A5"
},
      {""}, {""}, {""}, {""},
#line 155 "entities.gperf"
      {"Equal;", "\\u2A75"
},
      {""},
#line 184 "entities.gperf"
      {"Gg;", "\\u22D9"
},
      {""}, {""}, {""},
#line 994 "entities.gperf"
      {"easter;", "\\u2A6E"
},
      {""}, {""}, {""},
#line 1289 "entities.gperf"
      {"lbbrk;", "\\u2772"
},
      {""}, {""}, {""},
#line 594 "entities.gperf"
      {"Vbar;", "\\u2AEB"
},
#line 2198 "entities.gperf"
      {"xodot;", "\\u2A00"
},
#line 1295 "entities.gperf"
      {"lcaron;", "\\u013E"
},
      {""}, {""}, {""}, {""},
#line 995 "entities.gperf"
      {"ecaron;", "\\u011B"
},
      {""}, {""}, {""}, {""},
#line 836 "entities.gperf"
      {"ccaron;", "\\u010D"
},
      {""}, {""}, {""}, {""},
#line 999 "entities.gperf"
      {"ecolon;", "\\u2255"
},
      {""}, {""}, {""}, {""},
#line 1404 "entities.gperf"
      {"ltrPar;", "\\u2996"
},
      {""}, {""},
#line 636 "entities.gperf"
      {"Zeta;", "\\u0396"
},
      {""}, {""}, {""}, {""},
#line 2144 "entities.gperf"
      {"varr;", "\\u2195"
},
      {""},
#line 904 "entities.gperf"
      {"cupcap;", "\\u2A46"
},
      {""}, {""}, {""},
#line 1232 "entities.gperf"
      {"isins;", "\\u22F4"
},
#line 1281 "entities.gperf"
      {"larrpl;", "\\u2939"
},
      {""}, {""},
#line 203 "entities.gperf"
      {"Hscr;", "\\u210B"
},
      {""},
#line 2184 "entities.gperf"
      {"wreath;", "\\u2240"
},
      {""}, {""},
#line 172 "entities.gperf"
      {"Fscr;", "\\u2131"
},
      {""},
#line 933 "entities.gperf"
      {"dcaron;", "\\u010F"
},
      {""},
#line 197 "entities.gperf"
      {"Hat;", "^"
},
      {""}, {""}, {""}, {""}, {""},
#line 1228 "entities.gperf"
      {"iscr;", "\\U0001D4BE"
},
      {""}, {""}, {""},
#line 1380 "entities.gperf"
      {"lrcorner;", "\\u231F"
},
      {""}, {""}, {""}, {""},
#line 612 "entities.gperf"
      {"Wfr;", "\\U0001D51A"
},
      {""}, {""}, {""}, {""},
#line 21 "entities.gperf"
      {"And;", "\\u2A53"
},
      {""}, {""},
#line 1280 "entities.gperf"
      {"larrlp;", "\\u21AB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 848 "entities.gperf"
      {"centerdot;", "\\xB7"
},
      {""}, {""}, {""},
#line 1499 "entities.gperf"
      {"nge;", "\\u2271"
},
#line 628 "entities.gperf"
      {"Yscr;", "\\U0001D4B4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 845 "entities.gperf"
      {"cemptyv;", "\\u29B2"
},
      {""},
#line 879 "entities.gperf"
      {"complexes;", "\\u2102"
},
#line 1361 "entities.gperf"
      {"lobrk;", "\\u27E6"
},
#line 174 "entities.gperf"
      {"GT", ">"
},
#line 175 "entities.gperf"
      {"GT;", ">"
},
      {""},
#line 1568 "entities.gperf"
      {"nsim;", "\\u2241"
},
      {""},
#line 1038 "entities.gperf"
      {"equest;", "\\u225F"
},
      {""}, {""},
#line 1552 "entities.gperf"
      {"npre;", "\\u2AAF\\u0338"
},
      {""},
#line 875 "entities.gperf"
      {"commat;", "@"
},
      {""}, {""},
#line 307 "entities.gperf"
      {"Lscr;", "\\u2112"
},
#line 878 "entities.gperf"
      {"complement;", "\\u2201"
},
      {""}, {""},
#line 2222 "entities.gperf"
      {"yuml", "\\xFF"
},
#line 2223 "entities.gperf"
      {"yuml;", "\\xFF"
},
      {""}, {""},
#line 1186 "entities.gperf"
      {"ic;", "\\u2063"
},
      {""}, {""},
#line 1230 "entities.gperf"
      {"isinE;", "\\u22F9"
},
      {""}, {""},
#line 540 "entities.gperf"
      {"Tfr;", "\\U0001D517"
},
#line 2236 "entities.gperf"
      {"zwnj;", "\\u200C"
},
      {""}, {""},
#line 942 "entities.gperf"
      {"demptyv;", "\\u29B1"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1575 "entities.gperf"
      {"nsub;", "\\u2284"
},
      {""},
#line 1495 "entities.gperf"
      {"nexist;", "\\u2204"
},
#line 987 "entities.gperf"
      {"dwangle;", "\\u29A6"
},
      {""},
#line 1754 "entities.gperf"
      {"qscr;", "\\U0001D4C6"
},
      {""}, {""},
#line 1446 "entities.gperf"
      {"mp;", "\\u2213"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 423 "entities.gperf"
      {"Pfr;", "\\U0001D513"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1102 "entities.gperf"
      {"gbreve;", "\\u011F"
},
      {""},
#line 2230 "entities.gperf"
      {"zfr;", "\\U0001D537"
},
#line 979 "entities.gperf"
      {"dscy;", "\\u0455"
},
#line 1342 "entities.gperf"
      {"lhblk;", "\\u2584"
},
      {""}, {""}, {""},
#line 318 "entities.gperf"
      {"Mscr;", "\\u2133"
},
      {""},
#line 1599 "entities.gperf"
      {"numero;", "\\u2116"
},
      {""},
#line 311 "entities.gperf"
      {"Map;", "\\u2905"
},
      {""}, {""},
#line 1477 "entities.gperf"
      {"nbumpe;", "\\u224F\\u0338"
},
      {""}, {""}, {""}, {""},
#line 642 "entities.gperf"
      {"abreve;", "\\u0103"
},
#line 1449 "entities.gperf"
      {"mu;", "\\u03BC"
},
      {""},
#line 258 "entities.gperf"
      {"Larr;", "\\u219E"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 558 "entities.gperf"
      {"Ubreve;", "\\u016C"
},
      {""}, {""}, {""},
#line 1491 "entities.gperf"
      {"nedot;", "\\u2250\\u0338"
},
#line 2201 "entities.gperf"
      {"xotime;", "\\u2A02"
},
      {""}, {""}, {""}, {""},
#line 1216 "entities.gperf"
      {"intcal;", "\\u22BA"
},
      {""}, {""},
#line 2143 "entities.gperf"
      {"varpropto;", "\\u221D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 337 "entities.gperf"
      {"NotCongruent;", "\\u2262"
},
      {""}, {""},
#line 1006 "entities.gperf"
      {"egrave", "\\xE8"
},
#line 1007 "entities.gperf"
      {"egrave;", "\\xE8"
},
      {""}, {""},
#line 850 "entities.gperf"
      {"chcy;", "\\u0447"
},
#line 835 "entities.gperf"
      {"ccaps;", "\\u2A4D"
},
#line 1059 "entities.gperf"
      {"female;", "\\u2640"
},
#line 725 "entities.gperf"
      {"bemptyv;", "\\u29B0"
},
      {""}, {""},
#line 655 "entities.gperf"
      {"agrave", "\\xE0"
},
#line 656 "entities.gperf"
      {"agrave;", "\\xE0"
},
      {""}, {""}, {""}, {""},
#line 1159 "entities.gperf"
      {"hamilt;", "\\u210B"
},
      {""}, {""},
#line 159 "entities.gperf"
      {"Esim;", "\\u2A73"
},
#line 564 "entities.gperf"
      {"Ugrave", "\\xD9"
},
#line 565 "entities.gperf"
      {"Ugrave;", "\\xD9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 133 "entities.gperf"
      {"Dscr;", "\\U0001D49F"
},
#line 2158 "entities.gperf"
      {"veeeq;", "\\u225A"
},
#line 695 "entities.gperf"
      {"approx;", "\\u2248"
},
      {""},
#line 606 "entities.gperf"
      {"Vfr;", "\\U0001D519"
},
#line 1459 "entities.gperf"
      {"nLtv;", "\\u226A\\u0338"
},
#line 1392 "entities.gperf"
      {"lsquo;", "\\u2018"
},
#line 1393 "entities.gperf"
      {"lsquor;", "\\u201A"
},
#line 136 "entities.gperf"
      {"ETH", "\\xD0"
},
#line 567 "entities.gperf"
      {"UnderBar;", "_"
},
      {""}, {""}, {""}, {""},
#line 137 "entities.gperf"
      {"ETH;", "\\xD0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 259 "entities.gperf"
      {"Lcaron;", "\\u013D"
},
      {""}, {""}, {""}, {""},
#line 241 "entities.gperf"
      {"Jsercy;", "\\u0408"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1500 "entities.gperf"
      {"ngeq;", "\\u2271"
},
#line 1501 "entities.gperf"
      {"ngeqq;", "\\u2267\\u0338"
},
      {""}, {""}, {""}, {""},
#line 1569 "entities.gperf"
      {"nsime;", "\\u2244"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 240 "entities.gperf"
      {"Jscr;", "\\U0001D4A5"
},
      {""}, {""}, {""}, {""},
#line 215 "entities.gperf"
      {"Idot;", "\\u0130"
},
      {""}, {""}, {""}, {""}, {""},
#line 1226 "entities.gperf"
      {"iquest", "\\xBF"
},
#line 1227 "entities.gperf"
      {"iquest;", "\\xBF"
},
      {""}, {""}, {""},
#line 1390 "entities.gperf"
      {"lsimg;", "\\u2A8F"
},
      {""}, {""}, {""},
#line 618 "entities.gperf"
      {"Xscr;", "\\U0001D4B3"
},
#line 1297 "entities.gperf"
      {"lceil;", "\\u2308"
},
      {""}, {""}, {""},
#line 87 "entities.gperf"
      {"Darr;", "\\u21A1"
},
#line 1577 "entities.gperf"
      {"nsube;", "\\u2288"
},
#line 508 "entities.gperf"
      {"Square;", "\\u25A1"
},
      {""}, {""},
#line 697 "entities.gperf"
      {"aring", "\\xE5"
},
#line 698 "entities.gperf"
      {"aring;", "\\xE5"
},
#line 1032 "entities.gperf"
      {"eqcirc;", "\\u2256"
},
      {""}, {""},
#line 648 "entities.gperf"
      {"acute", "\\xB4"
},
#line 649 "entities.gperf"
      {"acute;", "\\xB4"
},
      {""}, {""},
#line 1429 "entities.gperf"
      {"mho;", "\\u2127"
},
      {""},
#line 588 "entities.gperf"
      {"Uring;", "\\u016E"
},
#line 2171 "entities.gperf"
      {"vsubne;", "\\u228A\\uFE00"
},
      {""},
#line 2217 "entities.gperf"
      {"yfr;", "\\U0001D536"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1553 "entities.gperf"
      {"nprec;", "\\u2280"
},
      {""}, {""}, {""},
#line 634 "entities.gperf"
      {"Zdot;", "\\u017B"
},
#line 701 "entities.gperf"
      {"asymp;", "\\u2248"
},
      {""}, {""}, {""},
#line 515 "entities.gperf"
      {"Sscr;", "\\U0001D4AE"
},
      {""}, {""}, {""}, {""},
#line 271 "entities.gperf"
      {"LeftFloor;", "\\u230A"
},
#line 2165 "entities.gperf"
      {"vnsup;", "\\u2283\\u20D2"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1033 "entities.gperf"
      {"eqcolon;", "\\u2255"
},
      {""},
#line 1221 "entities.gperf"
      {"iocy;", "\\u0451"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 827 "entities.gperf"
      {"capand;", "\\u2A44"
},
      {""}, {""}, {""}, {""},
#line 1570 "entities.gperf"
      {"nsimeq;", "\\u2244"
},
      {""},
#line 527 "entities.gperf"
      {"Superset;", "\\u2283"
},
      {""}, {""}, {""}, {""}, {""},
#line 1605 "entities.gperf"
      {"nvge;", "\\u2265\\u20D2"
},
#line 1276 "entities.gperf"
      {"larrb;", "\\u21E4"
},
      {""}, {""}, {""}, {""}, {""},
#line 1448 "entities.gperf"
      {"mstpos;", "\\u223E"
},
      {""},
#line 1562 "entities.gperf"
      {"nsc;", "\\u2281"
},
#line 231 "entities.gperf"
      {"Iscr;", "\\u2110"
},
#line 840 "entities.gperf"
      {"ccups;", "\\u2A4C"
},
#line 89 "entities.gperf"
      {"Dcaron;", "\\u010E"
},
      {""}, {""}, {""}, {""}, {""},
#line 1496 "entities.gperf"
      {"nexists;", "\\u2204"
},
      {""}, {""}, {""}, {""}, {""},
#line 645 "entities.gperf"
      {"acd;", "\\u223F"
},
      {""},
#line 1195 "entities.gperf"
      {"igrave", "\\xEC"
},
#line 1196 "entities.gperf"
      {"igrave;", "\\xEC"
},
      {""}, {""},
#line 1565 "entities.gperf"
      {"nscr;", "\\U0001D4C3"
},
      {""}, {""}, {""},
#line 1466 "entities.gperf"
      {"nap;", "\\u2249"
},
      {""}, {""}, {""}, {""},
#line 676 "entities.gperf"
      {"angmsdad;", "\\u29AB"
},
      {""}, {""}, {""},
#line 494 "entities.gperf"
      {"Sc;", "\\u2ABC"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 620 "entities.gperf"
      {"YIcy;", "\\u0407"
},
      {""}, {""}, {""}, {""}, {""},
#line 1576 "entities.gperf"
      {"nsubE;", "\\u2AC5\\u0338"
},
      {""}, {""}, {""},
#line 144 "entities.gperf"
      {"Edot;", "\\u0116"
},
      {""}, {""}, {""}, {""},
#line 639 "entities.gperf"
      {"Zscr;", "\\U0001D4B5"
},
      {""}, {""}, {""}, {""},
#line 621 "entities.gperf"
      {"YUcy;", "\\u042E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 263 "entities.gperf"
      {"LeftArrow;", "\\u2190"
},
#line 800 "entities.gperf"
      {"boxur;", "\\u2514"
},
      {""}, {""},
#line 1428 "entities.gperf"
      {"mfr;", "\\U0001D52A"
},
#line 182 "entities.gperf"
      {"Gdot;", "\\u0120"
},
      {""},
#line 28 "entities.gperf"
      {"Assign;", "\\u2254"
},
      {""}, {""}, {""}, {""}, {""},
#line 264 "entities.gperf"
      {"LeftArrowBar;", "\\u21E4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 517 "entities.gperf"
      {"Sub;", "\\u22D0"
},
#line 600 "entities.gperf"
      {"Vert;", "\\u2016"
},
      {""}, {""}, {""},
#line 248 "entities.gperf"
      {"Kfr;", "\\U0001D50E"
},
      {""}, {""}, {""}, {""},
#line 673 "entities.gperf"
      {"angmsdaa;", "\\u29A8"
},
      {""}, {""}, {""}, {""},
#line 79 "entities.gperf"
      {"Cup;", "\\u22D3"
},
      {""},
#line 810 "entities.gperf"
      {"brvbar", "\\xA6"
},
#line 811 "entities.gperf"
      {"brvbar;", "\\xA6"
},
      {""}, {""}, {""},
#line 1035 "entities.gperf"
      {"eqslantgtr;", "\\u2A96"
},
#line 495 "entities.gperf"
      {"Scaron;", "\\u0160"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 768 "entities.gperf"
      {"boxH;", "\\u2550"
},
      {""}, {""},
#line 485 "entities.gperf"
      {"RoundImplies;", "\\u2970"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 487 "entities.gperf"
      {"Rscr;", "\\u211B"
},
      {""}, {""}, {""},
#line 696 "entities.gperf"
      {"approxeq;", "\\u224A"
},
      {""},
#line 1451 "entities.gperf"
      {"mumap;", "\\u22B8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 158 "entities.gperf"
      {"Escr;", "\\u2130"
},
      {""}, {""}, {""},
#line 1127 "entities.gperf"
      {"gnE;", "\\u2269"
},
      {""},
#line 799 "entities.gperf"
      {"boxul;", "\\u2518"
},
      {""}, {""},
#line 1352 "entities.gperf"
      {"lnE;", "\\u2268"
},
#line 2204 "entities.gperf"
      {"xscr;", "\\U0001D4CD"
},
      {""}, {""}, {""}, {""},
#line 1502 "entities.gperf"
      {"ngeqslant;", "\\u2A7E\\u0338"
},
      {""}, {""}, {""},
#line 690 "entities.gperf"
      {"apE;", "\\u2A70"
},
      {""}, {""}, {""}, {""}, {""},
#line 193 "entities.gperf"
      {"Gscr;", "\\U0001D4A2"
},
      {""},
#line 1479 "entities.gperf"
      {"ncaron;", "\\u0148"
},
      {""}, {""},
#line 1478 "entities.gperf"
      {"ncap;", "\\u2A43"
},
      {""}, {""}, {""},
#line 135 "entities.gperf"
      {"ENG;", "\\u014A"
},
      {""}, {""}, {""}, {""}, {""},
#line 2208 "entities.gperf"
      {"xvee;", "\\u22C1"
},
      {""}, {""},
#line 360 "entities.gperf"
      {"NotLessSlantEqual;", "\\u2A7D\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 2229 "entities.gperf"
      {"zeta;", "\\u03B6"
},
      {""}, {""},
#line 356 "entities.gperf"
      {"NotLess;", "\\u226E"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 450 "entities.gperf"
      {"Rarr;", "\\u21A0"
},
      {""},
#line 632 "entities.gperf"
      {"Zcaron;", "\\u017D"
},
      {""}, {""}, {""},
#line 798 "entities.gperf"
      {"boxuR;", "\\u2558"
},
      {""},
#line 2215 "entities.gperf"
      {"yen", "\\xA5"
},
      {""}, {""}, {""}, {""}, {""},
#line 2216 "entities.gperf"
      {"yen;", "\\xA5"
},
      {""}, {""},
#line 1178 "entities.gperf"
      {"horbar;", "\\u2015"
},
      {""},
#line 675 "entities.gperf"
      {"angmsdac;", "\\u29AA"
},
#line 541 "entities.gperf"
      {"Therefore;", "\\u2234"
},
      {""}, {""}, {""}, {""},
#line 1286 "entities.gperf"
      {"late;", "\\u2AAD"
},
#line 1469 "entities.gperf"
      {"napos;", "\\u0149"
},
      {""}, {""},
#line 598 "entities.gperf"
      {"Vee;", "\\u22C1"
},
#line 84 "entities.gperf"
      {"DScy;", "\\u0405"
},
      {""}, {""}, {""},
#line 1175 "entities.gperf"
      {"hookleftarrow;", "\\u21A9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 451 "entities.gperf"
      {"Rarrtl;", "\\u2916"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1366 "entities.gperf"
      {"looparrowleft;", "\\u21AB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 452 "entities.gperf"
      {"Rcaron;", "\\u0158"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 388 "entities.gperf"
      {"Nscr;", "\\U0001D4A9"
},
      {""}, {""},
#line 1146 "entities.gperf"
      {"gtquest;", "\\u2A7C"
},
#line 439 "entities.gperf"
      {"Psi;", "\\u03A8"
},
      {""}, {""},
#line 140 "entities.gperf"
      {"Ecaron;", "\\u011A"
},
#line 1403 "entities.gperf"
      {"ltquest;", "\\u2A7B"
},
      {""}, {""},
#line 833 "entities.gperf"
      {"caret;", "\\u2041"
},
      {""}, {""}, {""},
#line 1190 "entities.gperf"
      {"iecy;", "\\u0435"
},
      {""}, {""}, {""}, {""},
#line 2186 "entities.gperf"
      {"xcap;", "\\u22C2"
},
#line 703 "entities.gperf"
      {"atilde", "\\xE3"
},
#line 704 "entities.gperf"
      {"atilde;", "\\xE3"
},
      {""}, {""}, {""}, {""}, {""},
#line 1586 "entities.gperf"
      {"nsupset;", "\\u2283\\u20D2"
},
#line 40 "entities.gperf"
      {"Bfr;", "\\U0001D505"
},
#line 206 "entities.gperf"
      {"HumpEqual;", "\\u224F"
},
      {""},
#line 590 "entities.gperf"
      {"Utilde;", "\\u0168"
},
      {""}, {""},
#line 996 "entities.gperf"
      {"ecir;", "\\u2256"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 60 "entities.gperf"
      {"Cfr;", "\\u212D"
},
      {""}, {""}, {""},
#line 841 "entities.gperf"
      {"ccupssm;", "\\u2A50"
},
      {""},
#line 1298 "entities.gperf"
      {"lcub;", "{"
},
#line 2164 "entities.gperf"
      {"vnsub;", "\\u2282\\u20D2"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1048 "entities.gperf"
      {"eth", "\\xF0"
},
      {""}, {""}, {""}, {""}, {""},
#line 1049 "entities.gperf"
      {"eth;", "\\xF0"
},
#line 1483 "entities.gperf"
      {"ncup;", "\\u2A42"
},
      {""}, {""},
#line 1123 "entities.gperf"
      {"gl;", "\\u2277"
},
      {""},
#line 27 "entities.gperf"
      {"Ascr;", "\\U0001D49C"
},
      {""}, {""},
#line 1344 "entities.gperf"
      {"ll;", "\\u226A"
},
      {""},
#line 85 "entities.gperf"
      {"DZcy;", "\\u040F"
},
#line 217 "entities.gperf"
      {"Igrave", "\\xCC"
},
#line 218 "entities.gperf"
      {"Igrave;", "\\xCC"
},
#line 1010 "entities.gperf"
      {"el;", "\\u2A99"
},
      {""}, {""}, {""}, {""}, {""},
#line 1013 "entities.gperf"
      {"els;", "\\u2A95"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2228 "entities.gperf"
      {"zeetrf;", "\\u2128"
},
      {""},
#line 424 "entities.gperf"
      {"Phi;", "\\u03A6"
},
#line 1367 "entities.gperf"
      {"looparrowright;", "\\u21AC"
},
#line 344 "entities.gperf"
      {"NotGreater;", "\\u226F"
},
#line 44 "entities.gperf"
      {"Bumpeq;", "\\u224E"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1125 "entities.gperf"
      {"gla;", "\\u2AA5"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 434 "entities.gperf"
      {"Prime;", "\\u2033"
},
      {""},
#line 1231 "entities.gperf"
      {"isindot;", "\\u22F5"
},
      {""},
#line 1122 "entities.gperf"
      {"gjcy;", "\\u0453"
},
      {""}, {""}, {""}, {""},
#line 1343 "entities.gperf"
      {"ljcy;", "\\u0459"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 954 "entities.gperf"
      {"div;", "\\xF7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 947 "entities.gperf"
      {"diam;", "\\u22C4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1582 "entities.gperf"
      {"nsucceq;", "\\u2AB0\\u0338"
},
      {""}, {""},
#line 1287 "entities.gperf"
      {"lates;", "\\u2AAD\\uFE00"
},
      {""},
#line 1277 "entities.gperf"
      {"larrbfs;", "\\u291F"
},
      {""},
#line 501 "entities.gperf"
      {"ShortLeftArrow;", "\\u2190"
},
#line 764 "entities.gperf"
      {"boxDL;", "\\u2557"
},
#line 2179 "entities.gperf"
      {"weierp;", "\\u2118"
},
#line 1470 "entities.gperf"
      {"napprox;", "\\u2249"
},
#line 1387 "entities.gperf"
      {"lsh;", "\\u21B0"
},
#line 491 "entities.gperf"
      {"SHcy;", "\\u0428"
},
      {""},
#line 322 "entities.gperf"
      {"Ncaron;", "\\u0147"
},
#line 191 "entities.gperf"
      {"GreaterSlantEqual;", "\\u2A7E"
},
      {""},
#line 959 "entities.gperf"
      {"djcy;", "\\u0452"
},
#line 1384 "entities.gperf"
      {"lrtri;", "\\u22BF"
},
#line 1211 "entities.gperf"
      {"incare;", "\\u2105"
},
      {""},
#line 854 "entities.gperf"
      {"cir;", "\\u25CB"
},
      {""},
#line 953 "entities.gperf"
      {"disin;", "\\u22F2"
},
      {""}, {""}, {""}, {""},
#line 1407 "entities.gperf"
      {"ltrif;", "\\u25C2"
},
      {""}, {""}, {""}, {""}, {""},
#line 1157 "entities.gperf"
      {"hairsp;", "\\u200A"
},
      {""}, {""}, {""},
#line 1345 "entities.gperf"
      {"llarr;", "\\u21C7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 938 "entities.gperf"
      {"ddotseq;", "\\u2A77"
},
      {""},
#line 1066 "entities.gperf"
      {"flat;", "\\u266D"
},
      {""}, {""}, {""}, {""},
#line 2188 "entities.gperf"
      {"xcup;", "\\u22C3"
},
      {""},
#line 178 "entities.gperf"
      {"Gbreve;", "\\u011E"
},
      {""}, {""}, {""},
#line 1099 "entities.gperf"
      {"gamma;", "\\u03B3"
},
      {""}, {""}, {""}, {""},
#line 984 "entities.gperf"
      {"dtrif;", "\\u25BE"
},
#line 1236 "entities.gperf"
      {"itilde;", "\\u0129"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 146 "entities.gperf"
      {"Egrave", "\\xC8"
},
#line 147 "entities.gperf"
      {"Egrave;", "\\xC8"
},
      {""}, {""},
#line 614 "entities.gperf"
      {"Wscr;", "\\U0001D4B2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2227 "entities.gperf"
      {"zdot;", "\\u017C"
},
      {""}, {""}, {""}, {""},
#line 1587 "entities.gperf"
      {"nsupseteq;", "\\u2289"
},
#line 1588 "entities.gperf"
      {"nsupseteqq;", "\\u2AC6\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 630 "entities.gperf"
      {"ZHcy;", "\\u0416"
},
#line 720 "entities.gperf"
      {"bcong;", "\\u224C"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1197 "entities.gperf"
      {"ii;", "\\u2148"
},
      {""}, {""}, {""},
#line 72 "entities.gperf"
      {"Conint;", "\\u222F"
},
      {""},
#line 440 "entities.gperf"
      {"QUOT", "\""
},
#line 441 "entities.gperf"
      {"QUOT;", "\""
},
#line 1103 "entities.gperf"
      {"gcirc;", "\\u011D"
},
      {""}, {""}, {""}, {""},
#line 2168 "entities.gperf"
      {"vrtri;", "\\u22B3"
},
      {""}, {""}, {""},
#line 997 "entities.gperf"
      {"ecirc", "\\xEA"
},
#line 998 "entities.gperf"
      {"ecirc;", "\\xEA"
},
      {""}, {""}, {""}, {""},
#line 839 "entities.gperf"
      {"ccirc;", "\\u0109"
},
      {""}, {""}, {""},
#line 646 "entities.gperf"
      {"acirc", "\\xE2"
},
#line 647 "entities.gperf"
      {"acirc;", "\\xE2"
},
#line 583 "entities.gperf"
      {"Updownarrow;", "\\u21D5"
},
      {""}, {""}, {""},
#line 1240 "entities.gperf"
      {"jcirc;", "\\u0135"
},
#line 877 "entities.gperf"
      {"compfn;", "\\u2218"
},
      {""}, {""},
#line 559 "entities.gperf"
      {"Ucirc", "\\xDB"
},
#line 560 "entities.gperf"
      {"Ucirc;", "\\xDB"
},
      {""}, {""}, {""},
#line 551 "entities.gperf"
      {"Tscr;", "\\U0001D4AF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 773 "entities.gperf"
      {"boxUL;", "\\u255D"
},
#line 359 "entities.gperf"
      {"NotLessLess;", "\\u226A\\u0338"
},
      {""},
#line 430 "entities.gperf"
      {"Precedes;", "\\u227A"
},
#line 584 "entities.gperf"
      {"UpperLeftArrow;", "\\u2196"
},
      {""},
#line 691 "entities.gperf"
      {"apacir;", "\\u2A6F"
},
      {""}, {""},
#line 694 "entities.gperf"
      {"apos;", "'"
},
#line 1165 "entities.gperf"
      {"hcirc;", "\\u0125"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1213 "entities.gperf"
      {"infintie;", "\\u29DD"
},
#line 438 "entities.gperf"
      {"Pscr;", "\\U0001D4AB"
},
      {""},
#line 2160 "entities.gperf"
      {"verbar;", "|"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2234 "entities.gperf"
      {"zscr;", "\\U0001D4CF"
},
      {""},
#line 570 "entities.gperf"
      {"UnderParenthesis;", "\\u23DD"
},
      {""},
#line 951 "entities.gperf"
      {"die;", "\\xA8"
},
#line 856 "entities.gperf"
      {"circ;", "\\u02C6"
},
      {""}, {""},
#line 295 "entities.gperf"
      {"Ll;", "\\u22D8"
},
      {""}, {""},
#line 950 "entities.gperf"
      {"diams;", "\\u2666"
},
#line 784 "entities.gperf"
      {"boxbox;", "\\u29C9"
},
      {""}, {""},
#line 1300 "entities.gperf"
      {"ldca;", "\\u2936"
},
#line 752 "entities.gperf"
      {"blank;", "\\u2423"
},
      {""}, {""}, {""}, {""},
#line 1381 "entities.gperf"
      {"lrhar;", "\\u21CB"
},
      {""}, {""}, {""},
#line 880 "entities.gperf"
      {"cong;", "\\u2245"
},
#line 1468 "entities.gperf"
      {"napid;", "\\u224B\\u0338"
},
      {""}, {""}, {""},
#line 1307 "entities.gperf"
      {"leftarrow;", "\\u2190"
},
      {""},
#line 1149 "entities.gperf"
      {"gtrdot;", "\\u22D7"
},
      {""}, {""}, {""},
#line 2175 "entities.gperf"
      {"wcirc;", "\\u0175"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 908 "entities.gperf"
      {"cups;", "\\u222A\\uFE00"
},
#line 788 "entities.gperf"
      {"boxdr;", "\\u250C"
},
#line 906 "entities.gperf"
      {"cupdot;", "\\u228D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 12 "entities.gperf"
      {"Abreve;", "\\u0102"
},
      {""}, {""},
#line 265 "entities.gperf"
      {"LeftArrowRightArrow;", "\\u21C6"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1267 "entities.gperf"
      {"lagran;", "\\u2112"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 975 "entities.gperf"
      {"drbkarow;", "\\u2910"
},
      {""}, {""}, {""},
#line 510 "entities.gperf"
      {"SquareSubset;", "\\u228F"
},
      {""},
#line 608 "entities.gperf"
      {"Vscr;", "\\U0001D4B1"
},
#line 756 "entities.gperf"
      {"block;", "\\u2588"
},
      {""}, {""},
#line 308 "entities.gperf"
      {"Lsh;", "\\u21B0"
},
      {""}, {""},
#line 170 "entities.gperf"
      {"ForAll;", "\\u2200"
},
      {""}, {""}, {""}, {""},
#line 829 "entities.gperf"
      {"capcap;", "\\u2A4B"
},
      {""}, {""}, {""},
#line 17 "entities.gperf"
      {"Agrave", "\\xC0"
},
#line 18 "entities.gperf"
      {"Agrave;", "\\xC0"
},
      {""}, {""}, {""},
#line 986 "entities.gperf"
      {"duhar;", "\\u296F"
},
#line 1604 "entities.gperf"
      {"nvdash;", "\\u22AC"
},
      {""}, {""}, {""},
#line 771 "entities.gperf"
      {"boxHd;", "\\u2564"
},
#line 1100 "entities.gperf"
      {"gammad;", "\\u03DD"
},
      {""},
#line 362 "entities.gperf"
      {"NotNestedGreaterGreater;", "\\u2AA2\\u0338"
},
      {""}, {""},
#line 537 "entities.gperf"
      {"Tcaron;", "\\u0164"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1338 "entities.gperf"
      {"lgE;", "\\u2A91"
},
#line 39 "entities.gperf"
      {"Beta;", "\\u0392"
},
#line 198 "entities.gperf"
      {"Hcirc;", "\\u0124"
},
      {""},
#line 363 "entities.gperf"
      {"NotNestedLessLess;", "\\u2AA1\\u0338"
},
#line 536 "entities.gperf"
      {"Tau;", "\\u03A4"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 787 "entities.gperf"
      {"boxdl;", "\\u2510"
},
#line 2157 "entities.gperf"
      {"veebar;", "\\u22BB"
},
#line 511 "entities.gperf"
      {"SquareSubsetEqual;", "\\u2291"
},
      {""},
#line 1187 "entities.gperf"
      {"icirc", "\\xEE"
},
#line 1188 "entities.gperf"
      {"icirc;", "\\xEE"
},
      {""}, {""}, {""}, {""}, {""},
#line 514 "entities.gperf"
      {"SquareUnion;", "\\u2294"
},
      {""},
#line 1129 "entities.gperf"
      {"gnapprox;", "\\u2A8A"
},
#line 1564 "entities.gperf"
      {"nsce;", "\\u2AB0\\u0338"
},
      {""}, {""}, {""},
#line 1354 "entities.gperf"
      {"lnapprox;", "\\u2A89"
},
      {""}, {""},
#line 2225 "entities.gperf"
      {"zcaron;", "\\u017E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1751 "entities.gperf"
      {"qint;", "\\u2A0C"
},
      {""}, {""}, {""}, {""}, {""},
#line 624 "entities.gperf"
      {"Ycirc;", "\\u0176"
},
      {""}, {""}, {""},
#line 2220 "entities.gperf"
      {"yscr;", "\\U0001D4CE"
},
#line 1340 "entities.gperf"
      {"lharu;", "\\u21BC"
},
      {""}, {""}, {""}, {""},
#line 685 "entities.gperf"
      {"angst;", "\\xC5"
},
#line 1214 "entities.gperf"
      {"inodot;", "\\u0131"
},
      {""}, {""},
#line 512 "entities.gperf"
      {"SquareSuperset;", "\\u2290"
},
#line 889 "entities.gperf"
      {"cross;", "\\u2717"
},
      {""}, {""}, {""},
#line 513 "entities.gperf"
      {"SquareSupersetEqual;", "\\u2292"
},
#line 1068 "entities.gperf"
      {"fltns;", "\\u25B1"
},
      {""},
#line 616 "entities.gperf"
      {"Xi;", "\\u039E"
},
#line 556 "entities.gperf"
      {"Uarrocir;", "\\u2949"
},
      {""},
#line 786 "entities.gperf"
      {"boxdR;", "\\u2552"
},
#line 1341 "entities.gperf"
      {"lharul;", "\\u296A"
},
      {""},
#line 828 "entities.gperf"
      {"capbrcup;", "\\u2A49"
},
      {""}, {""}, {""}, {""}, {""},
#line 25 "entities.gperf"
      {"Aring", "\\xC5"
},
#line 26 "entities.gperf"
      {"Aring;", "\\xC5"
},
      {""}, {""}, {""}, {""},
#line 1093 "entities.gperf"
      {"frasl;", "\\u2044"
},
      {""}, {""}, {""}, {""},
#line 1301 "entities.gperf"
      {"ldquo;", "\\u201C"
},
#line 1302 "entities.gperf"
      {"ldquor;", "\\u201E"
},
#line 1554 "entities.gperf"
      {"npreceq;", "\\u2AAF\\u0338"
},
      {""},
#line 1326 "entities.gperf"
      {"lesg;", "\\u22DA\\uFE00"
},
#line 813 "entities.gperf"
      {"bsemi;", "\\u204F"
},
#line 1619 "entities.gperf"
      {"nwnear;", "\\u2927"
},
#line 702 "entities.gperf"
      {"asympeq;", "\\u224D"
},
      {""}, {""},
#line 803 "entities.gperf"
      {"boxvL;", "\\u2561"
},
      {""}, {""}, {""}, {""}, {""},
#line 1370 "entities.gperf"
      {"loplus;", "\\u2A2D"
},
      {""}, {""},
#line 666 "entities.gperf"
      {"andd;", "\\u2A5C"
},
      {""},
#line 232 "entities.gperf"
      {"Itilde;", "\\u0128"
},
      {""}, {""}, {""}, {""},
#line 190 "entities.gperf"
      {"GreaterLess;", "\\u2277"
},
      {""}, {""},
#line 969 "entities.gperf"
      {"dotsquare;", "\\u22A1"
},
      {""},
#line 905 "entities.gperf"
      {"cupcup;", "\\u2A4A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1590 "entities.gperf"
      {"ntilde", "\\xF1"
},
#line 1591 "entities.gperf"
      {"ntilde;", "\\xF1"
},
      {""}, {""}, {""}, {""}, {""},
#line 1578 "entities.gperf"
      {"nsubset;", "\\u2282\\u20D2"
},
      {""}, {""}, {""},
#line 1382 "entities.gperf"
      {"lrhard;", "\\u296D"
},
      {""},
#line 1217 "entities.gperf"
      {"integers;", "\\u2124"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 542 "entities.gperf"
      {"Theta;", "\\u0398"
},
      {""}, {""},
#line 1252 "entities.gperf"
      {"kfr;", "\\U0001D528"
},
      {""}, {""}, {""},
#line 373 "entities.gperf"
      {"NotSquareSuperset;", "\\u2290\\u0338"
},
      {""}, {""}, {""}, {""},
#line 374 "entities.gperf"
      {"NotSquareSupersetEqual;", "\\u22E3"
},
      {""},
#line 1273 "entities.gperf"
      {"laquo", "\\xAB"
},
#line 1274 "entities.gperf"
      {"laquo;", "\\xAB"
},
#line 857 "entities.gperf"
      {"circeq;", "\\u2257"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1510 "entities.gperf"
      {"ni;", "\\u220B"
},
      {""}, {""}, {""}, {""}, {""},
#line 1511 "entities.gperf"
      {"nis;", "\\u22FC"
},
#line 286 "entities.gperf"
      {"Leftarrow;", "\\u21D0"
},
      {""}, {""}, {""},
#line 967 "entities.gperf"
      {"dotminus;", "\\u2238"
},
#line 1447 "entities.gperf"
      {"mscr;", "\\U0001D4C2"
},
      {""}, {""}, {""},
#line 1418 "entities.gperf"
      {"map;", "\\u21A6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1311 "entities.gperf"
      {"leftleftarrows;", "\\u21C7"
},
      {""},
#line 1385 "entities.gperf"
      {"lsaquo;", "\\u2039"
},
      {""},
#line 1513 "entities.gperf"
      {"niv;", "\\u220B"
},
      {""}, {""}, {""}, {""}, {""},
#line 250 "entities.gperf"
      {"Kscr;", "\\U0001D4A6"
},
      {""}, {""}, {""}, {""},
#line 348 "entities.gperf"
      {"NotGreaterLess;", "\\u2279"
},
      {""},
#line 105 "entities.gperf"
      {"DoubleContourIntegral;", "\\u222F"
},
      {""},
#line 61 "entities.gperf"
      {"Chi;", "\\u03A7"
},
      {""}, {""}, {""}, {""}, {""},
#line 500 "entities.gperf"
      {"ShortDownArrow;", "\\u2193"
},
#line 722 "entities.gperf"
      {"bdquo;", "\\u201E"
},
      {""}, {""},
#line 794 "entities.gperf"
      {"boxminus;", "\\u229F"
},
#line 534 "entities.gperf"
      {"TScy;", "\\u0426"
},
#line 1527 "entities.gperf"
      {"nlsim;", "\\u2274"
},
      {""},
#line 117 "entities.gperf"
      {"DoubleUpDownArrow;", "\\u21D5"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1514 "entities.gperf"
      {"njcy;", "\\u045A"
},
#line 1481 "entities.gperf"
      {"ncong;", "\\u2247"
},
      {""}, {""}, {""}, {""}, {""},
#line 2176 "entities.gperf"
      {"wedbar;", "\\u2A5F"
},
      {""}, {""},
#line 2231 "entities.gperf"
      {"zhcy;", "\\u0436"
},
#line 42 "entities.gperf"
      {"Breve;", "\\u02D8"
},
      {""},
#line 1096 "entities.gperf"
      {"gE;", "\\u2267"
},
#line 1528 "entities.gperf"
      {"nlt;", "\\u226E"
},
#line 2025 "entities.gperf"
      {"tbrk;", "\\u23B4"
},
      {""},
#line 715 "entities.gperf"
      {"barvee;", "\\u22BD"
},
#line 1262 "entities.gperf"
      {"lE;", "\\u2266"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1104 "entities.gperf"
      {"gcy;", "\\u0433"
},
      {""},
#line 236 "entities.gperf"
      {"Jcirc;", "\\u0134"
},
      {""}, {""},
#line 1299 "entities.gperf"
      {"lcy;", "\\u043B"
},
      {""}, {""}, {""}, {""},
#line 1000 "entities.gperf"
      {"ecy;", "\\u044D"
},
      {""}, {""}, {""},
#line 582 "entities.gperf"
      {"Uparrow;", "\\u21D1"
},
      {""},
#line 917 "entities.gperf"
      {"curvearrowleft;", "\\u21B6"
},
#line 1560 "entities.gperf"
      {"nrtri;", "\\u22EB"
},
      {""}, {""},
#line 650 "entities.gperf"
      {"acy;", "\\u0430"
},
      {""}, {""}, {""}, {""},
#line 1241 "entities.gperf"
      {"jcy;", "\\u0439"
},
#line 2221 "entities.gperf"
      {"yucy;", "\\u044E"
},
      {""},
#line 1113 "entities.gperf"
      {"gesdot;", "\\u2A80"
},
      {""},
#line 561 "entities.gperf"
      {"Ucy;", "\\u0423"
},
      {""},
#line 1042 "entities.gperf"
      {"erDot;", "\\u2253"
},
#line 1323 "entities.gperf"
      {"lesdot;", "\\u2A7F"
},
      {""}, {""}, {""},
#line 1517 "entities.gperf"
      {"nlarr;", "\\u219A"
},
      {""}, {""},
#line 2052 "entities.gperf"
      {"top;", "\\u22A4"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1163 "entities.gperf"
      {"harrw;", "\\u21AD"
},
      {""},
#line 2193 "entities.gperf"
      {"xi;", "\\u03BE"
},
#line 934 "entities.gperf"
      {"dcy;", "\\u0434"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 568 "entities.gperf"
      {"UnderBrace;", "\\u23DF"
},
#line 1612 "entities.gperf"
      {"nvrArr;", "\\u2903"
},
#line 569 "entities.gperf"
      {"UnderBracket;", "\\u23B5"
},
#line 1325 "entities.gperf"
      {"lesdotor;", "\\u2A83"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 497 "entities.gperf"
      {"Scirc;", "\\u015C"
},
#line 1327 "entities.gperf"
      {"lesges;", "\\u2A93"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 736 "entities.gperf"
      {"bigoplus;", "\\u2A01"
},
      {""}, {""},
#line 1462 "entities.gperf"
      {"nVdash;", "\\u22AE"
},
#line 1756 "entities.gperf"
      {"quatint;", "\\u2A16"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1579 "entities.gperf"
      {"nsubseteq;", "\\u2288"
},
#line 1580 "entities.gperf"
      {"nsubseteqq;", "\\u2AC5\\u0338"
},
      {""}, {""}, {""},
#line 57 "entities.gperf"
      {"Cdot;", "\\u010A"
},
      {""}, {""}, {""}, {""}, {""},
#line 899 "entities.gperf"
      {"cuesc;", "\\u22DF"
},
      {""}, {""},
#line 1058 "entities.gperf"
      {"fcy;", "\\u0444"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 747 "entities.gperf"
      {"blacksquare;", "\\u25AA"
},
      {""}, {""},
#line 212 "entities.gperf"
      {"Icirc", "\\xCE"
},
#line 213 "entities.gperf"
      {"Icirc;", "\\xCE"
},
      {""}, {""},
#line 796 "entities.gperf"
      {"boxtimes;", "\\u22A0"
},
      {""},
#line 779 "entities.gperf"
      {"boxVL;", "\\u2563"
},
      {""}, {""},
#line 2154 "entities.gperf"
      {"vcy;", "\\u0432"
},
#line 2042 "entities.gperf"
      {"thorn", "\\xFE"
},
#line 2043 "entities.gperf"
      {"thorn;", "\\xFE"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 488 "entities.gperf"
      {"Rsh;", "\\u21B1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 361 "entities.gperf"
      {"NotLessTilde;", "\\u2274"
},
      {""}, {""}, {""}, {""}, {""},
#line 721 "entities.gperf"
      {"bcy;", "\\u0431"
},
      {""},
#line 389 "entities.gperf"
      {"Ntilde", "\\xD1"
},
#line 390 "entities.gperf"
      {"Ntilde;", "\\xD1"
},
      {""}, {""},
#line 693 "entities.gperf"
      {"apid;", "\\u224B"
},
      {""},
#line 1493 "entities.gperf"
      {"nesear;", "\\u2928"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 988 "entities.gperf"
      {"dzcy;", "\\u045F"
},
      {""},
#line 1400 "entities.gperf"
      {"lthree;", "\\u22CB"
},
      {""}, {""}, {""}, {""}, {""},
#line 8 "entities.gperf"
      {"AMP", "&"
},
      {""}, {""}, {""},
#line 1423 "entities.gperf"
      {"marker;", "\\u25AE"
},
      {""},
#line 9 "entities.gperf"
      {"AMP;", "&"
},
      {""},
#line 1757 "entities.gperf"
      {"quest;", "?"
},
      {""}, {""},
#line 1519 "entities.gperf"
      {"nle;", "\\u2270"
},
#line 43 "entities.gperf"
      {"Bscr;", "\\u212C"
},
#line 2195 "entities.gperf"
      {"xlarr;", "\\u27F5"
},
#line 1009 "entities.gperf"
      {"egsdot;", "\\u2A98"
},
#line 274 "entities.gperf"
      {"LeftTee;", "\\u22A3"
},
#line 1263 "entities.gperf"
      {"lEg;", "\\u2A8B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 948 "entities.gperf"
      {"diamond;", "\\u22C4"
},
#line 2031 "entities.gperf"
      {"tfr;", "\\U0001D531"
},
#line 78 "entities.gperf"
      {"Cscr;", "\\U0001D49E"
},
      {""}, {""}, {""},
#line 49 "entities.gperf"
      {"Cap;", "\\u22D2"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 2207 "entities.gperf"
      {"xutri;", "\\u25B3"
},
      {""}, {""},
#line 165 "entities.gperf"
      {"Fcy;", "\\u0424"
},
#line 1167 "entities.gperf"
      {"heartsuit;", "\\u2665"
},
      {""}, {""}, {""}, {""}, {""},
#line 29 "entities.gperf"
      {"Atilde", "\\xC3"
},
#line 30 "entities.gperf"
      {"Atilde;", "\\xC3"
},
      {""},
#line 1189 "entities.gperf"
      {"icy;", "\\u0438"
},
      {""}, {""},
#line 1182 "entities.gperf"
      {"hybull;", "\\u2043"
},
      {""}, {""}, {""},
#line 1541 "entities.gperf"
      {"notni;", "\\u220C"
},
      {""}, {""}, {""},
#line 865 "entities.gperf"
      {"cire;", "\\u2257"
},
#line 176 "entities.gperf"
      {"Gamma;", "\\u0393"
},
      {""}, {""}, {""},
#line 2057 "entities.gperf"
      {"tosa;", "\\u2929"
},
#line 1261 "entities.gperf"
      {"lBarr;", "\\u290E"
},
      {""}, {""},
#line 1482 "entities.gperf"
      {"ncongdot;", "\\u2A6D\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 625 "entities.gperf"
      {"Ycy;", "\\u042B"
},
      {""},
#line 990 "entities.gperf"
      {"eDDot;", "\\u2A77"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 952 "entities.gperf"
      {"digamma;", "\\u03DD"
},
      {""}, {""},
#line 1258 "entities.gperf"
      {"lAarr;", "\\u21DA"
},
      {""}, {""}, {""},
#line 141 "entities.gperf"
      {"Ecirc", "\\xCA"
},
#line 142 "entities.gperf"
      {"Ecirc;", "\\xCA"
},
      {""}, {""}, {""},
#line 1956 "entities.gperf"
      {"star;", "\\u2606"
},
#line 1003 "entities.gperf"
      {"efDot;", "\\u2252"
},
      {""}, {""}, {""},
#line 1259 "entities.gperf"
      {"lArr;", "\\u21D0"
},
#line 2187 "entities.gperf"
      {"xcirc;", "\\u25EF"
},
      {""}, {""}, {""}, {""},
#line 1121 "entities.gperf"
      {"gimel;", "\\u2137"
},
      {""}, {""}, {""},
#line 1934 "entities.gperf"
      {"spar;", "\\u2225"
},
#line 502 "entities.gperf"
      {"ShortRightArrow;", "\\u2192"
},
      {""}, {""},
#line 261 "entities.gperf"
      {"Lcy;", "\\u041B"
},
      {""},
#line 180 "entities.gperf"
      {"Gcirc;", "\\u011C"
},
      {""}, {""},
#line 1987 "entities.gperf"
      {"sum;", "\\u2211"
},
#line 2134 "entities.gperf"
      {"vBar;", "\\u2AE8"
},
      {""},
#line 949 "entities.gperf"
      {"diamondsuit;", "\\u2666"
},
#line 225 "entities.gperf"
      {"Intersection;", "\\u22C2"
},
      {""}, {""},
#line 2135 "entities.gperf"
      {"vBarv;", "\\u2AE9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1600 "entities.gperf"
      {"numsp;", "\\u2007"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 924 "entities.gperf"
      {"dArr;", "\\u21D3"
},
      {""},
#line 1444 "entities.gperf"
      {"models;", "\\u22A7"
},
#line 1114 "entities.gperf"
      {"gesdoto;", "\\u2A82"
},
#line 1995 "entities.gperf"
      {"sup;", "\\u2283"
},
#line 1156 "entities.gperf"
      {"hArr;", "\\u21D4"
},
      {""},
#line 1755 "entities.gperf"
      {"quaternions;", "\\u210D"
},
#line 1324 "entities.gperf"
      {"lesdoto;", "\\u2A81"
},
#line 1498 "entities.gperf"
      {"ngE;", "\\u2267\\u0338"
},
      {""}, {""}, {""}, {""},
#line 1989 "entities.gperf"
      {"sup1", "\\xB9"
},
#line 1990 "entities.gperf"
      {"sup1;", "\\xB9"
},
#line 1951 "entities.gperf"
      {"srarr;", "\\u2192"
},
      {""}, {""},
#line 1991 "entities.gperf"
      {"sup2", "\\xB2"
},
#line 1992 "entities.gperf"
      {"sup2;", "\\xB2"
},
      {""}, {""}, {""},
#line 1993 "entities.gperf"
      {"sup3", "\\xB3"
},
#line 1994 "entities.gperf"
      {"sup3;", "\\xB3"
},
      {""}, {""}, {""},
#line 312 "entities.gperf"
      {"Mcy;", "\\u041C"
},
      {""},
#line 2018 "entities.gperf"
      {"swarr;", "\\u2199"
},
      {""}, {""},
#line 116 "entities.gperf"
      {"DoubleUpArrow;", "\\u21D1"
},
      {""}, {""},
#line 52 "entities.gperf"
      {"Ccaron;", "\\u010C"
},
#line 1549 "entities.gperf"
      {"npolint;", "\\u2A14"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1372 "entities.gperf"
      {"lowast;", "\\u2217"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 371 "entities.gperf"
      {"NotSquareSubset;", "\\u228F\\u0338"
},
      {""}, {""}, {""},
#line 2133 "entities.gperf"
      {"vArr;", "\\u21D5"
},
#line 372 "entities.gperf"
      {"NotSquareSubsetEqual;", "\\u22E2"
},
      {""}, {""}, {""},
#line 1522 "entities.gperf"
      {"nleq;", "\\u2270"
},
#line 1523 "entities.gperf"
      {"nleqq;", "\\u2266\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 192 "entities.gperf"
      {"GreaterTilde;", "\\u2273"
},
#line 528 "entities.gperf"
      {"SupersetEqual;", "\\u2287"
},
      {""},
#line 869 "entities.gperf"
      {"clubs;", "\\u2663"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 90 "entities.gperf"
      {"Dcy;", "\\u0414"
},
      {""}, {""}, {""},
#line 58 "entities.gperf"
      {"Cedilla;", "\\xB8"
},
#line 644 "entities.gperf"
      {"acE;", "\\u223E\\u0333"
},
      {""}, {""},
#line 609 "entities.gperf"
      {"Vvdash;", "\\u22AA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 520 "entities.gperf"
      {"Succeeds;", "\\u227B"
},
#line 1518 "entities.gperf"
      {"nldr;", "\\u2025"
},
      {""}, {""}, {""}, {""},
#line 243 "entities.gperf"
      {"KHcy;", "\\u0425"
},
#line 585 "entities.gperf"
      {"UpperRightArrow;", "\\u2197"
},
      {""}, {""}, {""}, {""},
#line 1199 "entities.gperf"
      {"iiint;", "\\u222D"
},
      {""},
#line 408 "entities.gperf"
      {"Or;", "\\u2A54"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 196 "entities.gperf"
      {"Hacek;", "\\u02C7"
},
      {""}, {""},
#line 237 "entities.gperf"
      {"Jcy;", "\\u0419"
},
#line 1069 "entities.gperf"
      {"fnof;", "\\u0192"
},
      {""},
#line 177 "entities.gperf"
      {"Gammad;", "\\u03DC"
},
      {""}, {""},
#line 2051 "entities.gperf"
      {"toea;", "\\u2928"
},
      {""}, {""}, {""},
#line 1947 "entities.gperf"
      {"squ;", "\\u25A1"
},
#line 13 "entities.gperf"
      {"Acirc", "\\xC2"
},
#line 14 "entities.gperf"
      {"Acirc;", "\\xC2"
},
#line 2206 "entities.gperf"
      {"xuplus;", "\\u2A04"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 80 "entities.gperf"
      {"CupCap;", "\\u224D"
},
      {""}, {""}, {""}, {""},
#line 2032 "entities.gperf"
      {"there4;", "\\u2234"
},
      {""}, {""},
#line 1330 "entities.gperf"
      {"lesseqgtr;", "\\u22DA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 425 "entities.gperf"
      {"Pi;", "\\u03A0"
},
      {""}, {""}, {""}, {""}, {""},
#line 1408 "entities.gperf"
      {"lurdshar;", "\\u294A"
},
#line 1134 "entities.gperf"
      {"gopf;", "\\U0001D558"
},
      {""}, {""}, {""},
#line 498 "entities.gperf"
      {"Scy;", "\\u0421"
},
#line 1369 "entities.gperf"
      {"lopf;", "\\U0001D55D"
},
      {""},
#line 961 "entities.gperf"
      {"dlcrop;", "\\u230D"
},
      {""}, {""},
#line 1025 "entities.gperf"
      {"eopf;", "\\U0001D556"
},
      {""}, {""}, {""}, {""},
#line 883 "entities.gperf"
      {"copf;", "\\U0001D554"
},
      {""}, {""}, {""}, {""},
#line 688 "entities.gperf"
      {"aopf;", "\\U0001D552"
},
#line 1897 "entities.gperf"
      {"sharp;", "\\u266F"
},
#line 745 "entities.gperf"
      {"bkarow;", "\\u290D"
},
      {""}, {""},
#line 1244 "entities.gperf"
      {"jopf;", "\\U0001D55B"
},
      {""}, {""},
#line 347 "entities.gperf"
      {"NotGreaterGreater;", "\\u226B\\u0338"
},
#line 1895 "entities.gperf"
      {"sfr;", "\\U0001D530"
},
#line 574 "entities.gperf"
      {"Uopf;", "\\U0001D54C"
},
      {""},
#line 960 "entities.gperf"
      {"dlcorn;", "\\u231E"
},
#line 99 "entities.gperf"
      {"Diamond;", "\\u22C4"
},
      {""}, {""},
#line 257 "entities.gperf"
      {"Laplacetrf;", "\\u2112"
},
      {""}, {""},
#line 415 "entities.gperf"
      {"Ouml", "\\xD6"
},
#line 416 "entities.gperf"
      {"Ouml;", "\\xD6"
},
      {""},
#line 2200 "entities.gperf"
      {"xoplus;", "\\u2A01"
},
      {""}, {""}, {""},
#line 1471 "entities.gperf"
      {"natur;", "\\u266E"
},
#line 529 "entities.gperf"
      {"Supset;", "\\u22D1"
},
      {""},
#line 214 "entities.gperf"
      {"Icy;", "\\u0418"
},
#line 963 "entities.gperf"
      {"dopf;", "\\U0001D555"
},
      {""},
#line 2205 "entities.gperf"
      {"xsqcup;", "\\u2A06"
},
      {""},
#line 1041 "entities.gperf"
      {"eqvparsl;", "\\u29E5"
},
#line 1177 "entities.gperf"
      {"hopf;", "\\U0001D559"
},
      {""}, {""}, {""}, {""}, {""},
#line 284 "entities.gperf"
      {"LeftVector;", "\\u21BC"
},
#line 1953 "entities.gperf"
      {"ssetmn;", "\\u2216"
},
#line 1618 "entities.gperf"
      {"nwarrow;", "\\u2196"
},
      {""}, {""},
#line 345 "entities.gperf"
      {"NotGreaterEqual;", "\\u2271"
},
      {""}, {""},
#line 1484 "entities.gperf"
      {"ncy;", "\\u043D"
},
      {""},
#line 2006 "entities.gperf"
      {"supne;", "\\u228B"
},
      {""}, {""}, {""}, {""},
#line 2177 "entities.gperf"
      {"wedge;", "\\u2227"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1198 "entities.gperf"
      {"iiiint;", "\\u2A0C"
},
      {""}, {""},
#line 443 "entities.gperf"
      {"Qopf;", "\\u211A"
},
      {""}, {""}, {""}, {""}, {""},
#line 1960 "entities.gperf"
      {"strns;", "\\xAF"
},
#line 2058 "entities.gperf"
      {"tprime;", "\\u2034"
},
      {""}, {""},
#line 1070 "entities.gperf"
      {"fopf;", "\\U0001D557"
},
      {""}, {""}, {""},
#line 633 "entities.gperf"
      {"Zcy;", "\\u0417"
},
      {""}, {""}, {""}, {""}, {""},
#line 2181 "entities.gperf"
      {"wopf;", "\\U0001D568"
},
      {""}, {""},
#line 881 "entities.gperf"
      {"congdot;", "\\u2A6D"
},
      {""}, {""},
#line 610 "entities.gperf"
      {"Wcirc;", "\\u0174"
},
      {""}, {""}, {""},
#line 2166 "entities.gperf"
      {"vopf;", "\\U0001D567"
},
#line 770 "entities.gperf"
      {"boxHU;", "\\u2569"
},
#line 1561 "entities.gperf"
      {"nrtrie;", "\\u22ED"
},
#line 735 "entities.gperf"
      {"bigodot;", "\\u2A00"
},
      {""}, {""},
#line 171 "entities.gperf"
      {"Fouriertrf;", "\\u2131"
},
      {""}, {""}, {""}, {""},
#line 1201 "entities.gperf"
      {"iiota;", "\\u2129"
},
      {""}, {""},
#line 1266 "entities.gperf"
      {"laemptyv;", "\\u29B4"
},
#line 1269 "entities.gperf"
      {"lang;", "\\u27E8"
},
      {""},
#line 684 "entities.gperf"
      {"angsph;", "\\u2222"
},
      {""}, {""},
#line 119 "entities.gperf"
      {"DownArrow;", "\\u2193"
},
#line 955 "entities.gperf"
      {"divide", "\\xF7"
},
#line 956 "entities.gperf"
      {"divide;", "\\xF7"
},
      {""},
#line 710 "entities.gperf"
      {"backcong;", "\\u224C"
},
#line 760 "entities.gperf"
      {"bopf;", "\\U0001D553"
},
#line 436 "entities.gperf"
      {"Proportion;", "\\u2237"
},
      {""}, {""},
#line 1074 "entities.gperf"
      {"fpartint;", "\\u2A0D"
},
#line 1524 "entities.gperf"
      {"nleqslant;", "\\u2A7D\\u0338"
},
      {""},
#line 1278 "entities.gperf"
      {"larrfs;", "\\u291D"
},
#line 120 "entities.gperf"
      {"DownArrowBar;", "\\u2913"
},
      {""},
#line 1021 "entities.gperf"
      {"emsp;", "\\u2003"
},
      {""}, {""},
#line 662 "entities.gperf"
      {"amp", "&"
},
      {""}, {""}, {""}, {""}, {""},
#line 663 "entities.gperf"
      {"amp;", "&"
},
      {""}, {""}, {""}, {""}, {""},
#line 45 "entities.gperf"
      {"CHcy;", "\\u0427"
},
      {""},
#line 1020 "entities.gperf"
      {"emsp14;", "\\u2005"
},
      {""}, {""},
#line 2033 "entities.gperf"
      {"therefore;", "\\u2234"
},
      {""},
#line 2178 "entities.gperf"
      {"wedgeq;", "\\u2259"
},
#line 1538 "entities.gperf"
      {"notinva;", "\\u2209"
},
      {""},
#line 1053 "entities.gperf"
      {"excl;", "!"
},
      {""}, {""}, {""}, {""},
#line 1894 "entities.gperf"
      {"sext;", "\\u2736"
},
      {""},
#line 490 "entities.gperf"
      {"SHCHcy;", "\\u0429"
},
      {""},
#line 454 "entities.gperf"
      {"Rcy;", "\\u0420"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2005 "entities.gperf"
      {"supnE;", "\\u2ACC"
},
      {""}, {""},
#line 143 "entities.gperf"
      {"Ecy;", "\\u042D"
},
#line 201 "entities.gperf"
      {"Hopf;", "\\u210D"
},
      {""}, {""}, {""}, {""},
#line 169 "entities.gperf"
      {"Fopf;", "\\U0001D53D"
},
      {""}, {""}, {""}, {""},
#line 1890 "entities.gperf"
      {"semi;", ";"
},
      {""},
#line 1019 "entities.gperf"
      {"emsp13;", "\\u2004"
},
      {""}, {""},
#line 1223 "entities.gperf"
      {"iopf;", "\\U0001D55A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 181 "entities.gperf"
      {"Gcy;", "\\u0413"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1257 "entities.gperf"
      {"kscr;", "\\U0001D4C0"
},
#line 797 "entities.gperf"
      {"boxuL;", "\\u255B"
},
      {""},
#line 1847 "entities.gperf"
      {"rpar;", ")"
},
#line 1346 "entities.gperf"
      {"llcorner;", "\\u231E"
},
#line 627 "entities.gperf"
      {"Yopf;", "\\U0001D550"
},
      {""},
#line 1174 "entities.gperf"
      {"homtht;", "\\u223B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 832 "entities.gperf"
      {"caps;", "\\u2229\\uFE00"
},
#line 2142 "entities.gperf"
      {"varpi;", "\\u03D6"
},
#line 831 "entities.gperf"
      {"capdot;", "\\u2A40"
},
      {""}, {""}, {""}, {""},
#line 599 "entities.gperf"
      {"Verbar;", "\\u2016"
},
      {""},
#line 399 "entities.gperf"
      {"Ofr;", "\\U0001D512"
},
      {""}, {""}, {""}, {""},
#line 667 "entities.gperf"
      {"andslope;", "\\u2A58"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1555 "entities.gperf"
      {"nrArr;", "\\u21CF"
},
      {""}, {""}, {""}, {""},
#line 1886 "entities.gperf"
      {"searr;", "\\u2198"
},
#line 1394 "entities.gperf"
      {"lstrok;", "\\u0142"
},
#line 2007 "entities.gperf"
      {"supplus;", "\\u2AC0"
},
      {""},
#line 304 "entities.gperf"
      {"Lopf;", "\\U0001D543"
},
#line 1893 "entities.gperf"
      {"setmn;", "\\u2216"
},
      {""}, {""}, {""}, {""},
#line 1615 "entities.gperf"
      {"nwArr;", "\\u21D6"
},
      {""},
#line 1859 "entities.gperf"
      {"rtri;", "\\u25B9"
},
#line 1850 "entities.gperf"
      {"rrarr;", "\\u21C9"
},
#line 34 "entities.gperf"
      {"Barv;", "\\u2AE7"
},
#line 871 "entities.gperf"
      {"colon;", ":"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 535 "entities.gperf"
      {"Tab;", "\\x09"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1285 "entities.gperf"
      {"latail;", "\\u2919"
},
      {""},
#line 1791 "entities.gperf"
      {"rbarr;", "\\u290D"
},
#line 1752 "entities.gperf"
      {"qopf;", "\\U0001D562"
},
      {""}, {""},
#line 148 "entities.gperf"
      {"Element;", "\\u2208"
},
      {""}, {""}, {""},
#line 1955 "entities.gperf"
      {"sstarf;", "\\u22C6"
},
      {""}, {""}, {""}, {""},
#line 981 "entities.gperf"
      {"dstrok;", "\\u0111"
},
      {""}, {""}, {""}, {""},
#line 1181 "entities.gperf"
      {"hstrok;", "\\u0127"
},
      {""}, {""},
#line 819 "entities.gperf"
      {"bull;", "\\u2022"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 317 "entities.gperf"
      {"Mopf;", "\\U0001D544"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1335 "entities.gperf"
      {"lfloor;", "\\u230A"
},
      {""},
#line 324 "entities.gperf"
      {"Ncy;", "\\u041D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 2053 "entities.gperf"
      {"topbot;", "\\u2336"
},
      {""}, {""}, {""},
#line 1015 "entities.gperf"
      {"emacr;", "\\u0113"
},
#line 1036 "entities.gperf"
      {"eqslantless;", "\\u2A95"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 276 "entities.gperf"
      {"LeftTeeVector;", "\\u295A"
},
#line 789 "entities.gperf"
      {"boxh;", "\\u2500"
},
#line 660 "entities.gperf"
      {"amacr;", "\\u0101"
},
#line 1821 "entities.gperf"
      {"rho;", "\\u03C1"
},
      {""}, {""}, {""}, {""}, {""},
#line 1056 "entities.gperf"
      {"exponentiale;", "\\u2147"
},
      {""}, {""},
#line 566 "entities.gperf"
      {"Umacr;", "\\u016A"
},
      {""}, {""},
#line 2139 "entities.gperf"
      {"varkappa;", "\\u03F0"
},
      {""}, {""},
#line 1402 "entities.gperf"
      {"ltlarr;", "\\u2976"
},
      {""}, {""}, {""}, {""},
#line 1183 "entities.gperf"
      {"hyphen;", "\\u2010"
},
      {""}, {""}, {""},
#line 2213 "entities.gperf"
      {"ycirc;", "\\u0177"
},
#line 1268 "entities.gperf"
      {"lambda;", "\\u03BB"
},
      {""}, {""}, {""}, {""},
#line 926 "entities.gperf"
      {"dagger;", "\\u2020"
},
      {""}, {""},
#line 256 "entities.gperf"
      {"Lang;", "\\u27EA"
},
#line 445 "entities.gperf"
      {"RBarr;", "\\u2910"
},
      {""}, {""},
#line 818 "entities.gperf"
      {"bsolhsub;", "\\u27C8"
},
#line 209 "entities.gperf"
      {"IOcy;", "\\u0401"
},
#line 2202 "entities.gperf"
      {"xrArr;", "\\u27F9"
},
#line 732 "entities.gperf"
      {"bigcap;", "\\u22C2"
},
      {""},
#line 15 "entities.gperf"
      {"Acy;", "\\u0410"
},
#line 101 "entities.gperf"
      {"Dopf;", "\\U0001D53B"
},
      {""}, {""}, {""},
#line 1841 "entities.gperf"
      {"roarr;", "\\u21FE"
},
      {""}, {""}, {""}, {""},
#line 1304 "entities.gperf"
      {"ldrushar;", "\\u294B"
},
#line 75 "entities.gperf"
      {"Coproduct;", "\\u2210"
},
#line 1331 "entities.gperf"
      {"lesseqqgtr;", "\\u2A8B"
},
#line 1949 "entities.gperf"
      {"squarf;", "\\u25AA"
},
      {""}, {""}, {""},
#line 543 "entities.gperf"
      {"ThickSpace;", "\\u205F\\u200A"
},
#line 1233 "entities.gperf"
      {"isinsv;", "\\u22F3"
},
      {""},
#line 433 "entities.gperf"
      {"PrecedesTilde;", "\\u227E"
},
      {""}, {""},
#line 958 "entities.gperf"
      {"divonx;", "\\u22C7"
},
      {""},
#line 2115 "entities.gperf"
      {"upsi;", "\\u03C5"
},
#line 2029 "entities.gperf"
      {"tdot;", "\\u20DB"
},
      {""}, {""}, {""}, {""}, {""},
#line 1507 "entities.gperf"
      {"nhArr;", "\\u21CE"
},
#line 830 "entities.gperf"
      {"capcup;", "\\u2A47"
},
      {""}, {""},
#line 1155 "entities.gperf"
      {"gvnE;", "\\u2269\\uFE00"
},
      {""},
#line 900 "entities.gperf"
      {"cularr;", "\\u21B6"
},
      {""}, {""},
#line 1411 "entities.gperf"
      {"lvnE;", "\\u2268\\uFE00"
},
      {""},
#line 364 "entities.gperf"
      {"NotPrecedes;", "\\u2280"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1218 "entities.gperf"
      {"intercal;", "\\u22BA"
},
#line 239 "entities.gperf"
      {"Jopf;", "\\U0001D541"
},
      {""}, {""}, {""},
#line 1413 "entities.gperf"
      {"macr", "\\xAF"
},
#line 1414 "entities.gperf"
      {"macr;", "\\xAF"
},
      {""},
#line 204 "entities.gperf"
      {"Hstrok;", "\\u0126"
},
      {""},
#line 1860 "entities.gperf"
      {"rtrie;", "\\u22B5"
},
#line 1503 "entities.gperf"
      {"nges;", "\\u2A7E\\u0338"
},
      {""}, {""},
#line 446 "entities.gperf"
      {"REG", "\\xAE"
},
      {""}, {""}, {""}, {""}, {""},
#line 447 "entities.gperf"
      {"REG;", "\\xAE"
},
#line 617 "entities.gperf"
      {"Xopf;", "\\U0001D54F"
},
      {""}, {""}, {""},
#line 1657 "entities.gperf"
      {"or;", "\\u2228"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1795 "entities.gperf"
      {"rbrke;", "\\u298C"
},
#line 1176 "entities.gperf"
      {"hookrightarrow;", "\\u21AA"
},
      {""},
#line 2172 "entities.gperf"
      {"vsupnE;", "\\u2ACC\\uFE00"
},
      {""}, {""}, {""},
#line 920 "entities.gperf"
      {"cuwed;", "\\u22CF"
},
      {""},
#line 1329 "entities.gperf"
      {"lessdot;", "\\u22D6"
},
#line 431 "entities.gperf"
      {"PrecedesEqual;", "\\u2AAF"
},
      {""}, {""},
#line 2137 "entities.gperf"
      {"vangrt;", "\\u299C"
},
      {""}, {""}, {""}, {""},
#line 1817 "entities.gperf"
      {"rfr;", "\\U0001D52F"
},
      {""}, {""},
#line 1669 "entities.gperf"
      {"orv;", "\\u2A5B"
},
      {""},
#line 743 "entities.gperf"
      {"bigvee;", "\\u22C1"
},
#line 1490 "entities.gperf"
      {"nearrow;", "\\u2197"
},
#line 2127 "entities.gperf"
      {"utri;", "\\u25B5"
},
      {""}, {""}, {""},
#line 2130 "entities.gperf"
      {"uuml", "\\xFC"
},
#line 2131 "entities.gperf"
      {"uuml;", "\\xFC"
},
#line 506 "entities.gperf"
      {"Sopf;", "\\U0001D54A"
},
#line 1667 "entities.gperf"
      {"oror;", "\\u2A56"
},
#line 1551 "entities.gperf"
      {"nprcue;", "\\u22E0"
},
      {""}, {""}, {""}, {""}, {""},
#line 1765 "entities.gperf"
      {"rHar;", "\\u2964"
},
      {""}, {""}, {""},
#line 859 "entities.gperf"
      {"circlearrowright;", "\\u21BB"
},
      {""}, {""},
#line 2074 "entities.gperf"
      {"tscr;", "\\U0001D4C9"
},
      {""}, {""}, {""},
#line 861 "entities.gperf"
      {"circledS;", "\\u24C8"
},
#line 1376 "entities.gperf"
      {"lozf;", "\\u29EB"
},
#line 1654 "entities.gperf"
      {"opar;", "\\u29B7"
},
      {""}, {""}, {""}, {""}, {""},
#line 309 "entities.gperf"
      {"Lstrok;", "\\u0141"
},
#line 1758 "entities.gperf"
      {"questeq;", "\\u225F"
},
      {""}, {""}, {""}, {""}, {""},
#line 1011 "entities.gperf"
      {"elinters;", "\\u23E7"
},
#line 2197 "entities.gperf"
      {"xnis;", "\\u22FB"
},
#line 1364 "entities.gperf"
      {"longmapsto;", "\\u27FC"
},
      {""}, {""}, {""},
#line 2129 "entities.gperf"
      {"uuarr;", "\\u21C8"
},
#line 1203 "entities.gperf"
      {"imacr;", "\\u012B"
},
      {""},
#line 282 "entities.gperf"
      {"LeftUpVector;", "\\u21BF"
},
      {""},
#line 229 "entities.gperf"
      {"Iopf;", "\\U0001D540"
},
#line 245 "entities.gperf"
      {"Kappa;", "\\u039A"
},
      {""}, {""},
#line 1107 "entities.gperf"
      {"gel;", "\\u22DB"
},
      {""}, {""}, {""}, {""}, {""},
#line 1999 "entities.gperf"
      {"supe;", "\\u2287"
},
      {""}, {""}, {""}, {""}, {""},
#line 2191 "entities.gperf"
      {"xhArr;", "\\u27FA"
},
#line 1954 "entities.gperf"
      {"ssmile;", "\\u2323"
},
      {""}, {""},
#line 1532 "entities.gperf"
      {"nopf;", "\\U0001D55F"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1658 "entities.gperf"
      {"orarr;", "\\u21BB"
},
      {""}, {""},
#line 1678 "entities.gperf"
      {"ouml", "\\xF6"
},
#line 1679 "entities.gperf"
      {"ouml;", "\\xF6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1254 "entities.gperf"
      {"khcy;", "\\u0445"
},
      {""}, {""}, {""}, {""}, {""},
#line 504 "entities.gperf"
      {"Sigma;", "\\u03A3"
},
      {""},
#line 2070 "entities.gperf"
      {"triplus;", "\\u2A39"
},
#line 1453 "entities.gperf"
      {"nGt;", "\\u226B\\u20D2"
},
#line 2212 "entities.gperf"
      {"yacy;", "\\u044F"
},
      {""},
#line 2039 "entities.gperf"
      {"thinsp;", "\\u2009"
},
      {""}, {""},
#line 638 "entities.gperf"
      {"Zopf;", "\\u2124"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1055 "entities.gperf"
      {"expectation;", "\\u2130"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1673 "entities.gperf"
      {"osol;", "\\u2298"
},
      {""}, {""}, {""},
#line 971 "entities.gperf"
      {"downarrow;", "\\u2193"
},
      {""}, {""}, {""},
#line 539 "entities.gperf"
      {"Tcy;", "\\u0422"
},
      {""},
#line 932 "entities.gperf"
      {"dblac;", "\\u02DD"
},
#line 1094 "entities.gperf"
      {"frown;", "\\u2322"
},
      {""}, {""}, {""}, {""}, {""},
#line 219 "entities.gperf"
      {"Im;", "\\u2111"
},
#line 1843 "entities.gperf"
      {"ropar;", "\\u2986"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 255 "entities.gperf"
      {"Lambda;", "\\u039B"
},
      {""},
#line 422 "entities.gperf"
      {"Pcy;", "\\u041F"
},
      {""},
#line 1328 "entities.gperf"
      {"lessapprox;", "\\u2A85"
},
      {""}, {""},
#line 1620 "entities.gperf"
      {"oS;", "\\u24C8"
},
      {""}, {""}, {""}, {""},
#line 2226 "entities.gperf"
      {"zcy;", "\\u0437"
},
#line 1641 "entities.gperf"
      {"ohm;", "\\u03A9"
},
#line 805 "entities.gperf"
      {"boxvh;", "\\u253C"
},
#line 134 "entities.gperf"
      {"Dstrok;", "\\u0110"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2099 "entities.gperf"
      {"uharr;", "\\u21BE"
},
      {""},
#line 2026 "entities.gperf"
      {"tcaron;", "\\u0165"
},
      {""},
#line 870 "entities.gperf"
      {"clubsuit;", "\\u2663"
},
      {""}, {""},
#line 1291 "entities.gperf"
      {"lbrack;", "["
},
      {""}, {""},
#line 484 "entities.gperf"
      {"Ropf;", "\\u211D"
},
      {""},
#line 1443 "entities.gperf"
      {"mnplus;", "\\u2213"
},
      {""},
#line 2024 "entities.gperf"
      {"tau;", "\\u03C4"
},
      {""}, {""},
#line 562 "entities.gperf"
      {"Udblac;", "\\u0170"
},
      {""}, {""},
#line 1465 "entities.gperf"
      {"nang;", "\\u2220\\u20D2"
},
      {""}, {""}, {""}, {""},
#line 153 "entities.gperf"
      {"Eopf;", "\\U0001D53C"
},
#line 2189 "entities.gperf"
      {"xdtri;", "\\u25BD"
},
      {""}, {""},
#line 46 "entities.gperf"
      {"COPY", "\\xA9"
},
#line 47 "entities.gperf"
      {"COPY;", "\\xA9"
},
      {""},
#line 820 "entities.gperf"
      {"bullet;", "\\u2022"
},
      {""}, {""},
#line 2199 "entities.gperf"
      {"xopf;", "\\U0001D569"
},
      {""},
#line 1253 "entities.gperf"
      {"kgreen;", "\\u0138"
},
#line 1808 "entities.gperf"
      {"real;", "\\u211C"
},
      {""}, {""}, {""}, {""}, {""},
#line 1124 "entities.gperf"
      {"glE;", "\\u2A92"
},
      {""}, {""}, {""}, {""},
#line 1901 "entities.gperf"
      {"shortparallel;", "\\u2225"
},
#line 185 "entities.gperf"
      {"Gopf;", "\\U0001D53E"
},
#line 1487 "entities.gperf"
      {"neArr;", "\\u21D7"
},
      {""},
#line 2095 "entities.gperf"
      {"ufr;", "\\U0001D532"
},
#line 1452 "entities.gperf"
      {"nGg;", "\\u22D9\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1270 "entities.gperf"
      {"langd;", "\\u2991"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 729 "entities.gperf"
      {"beth;", "\\u2136"
},
      {""}, {""}, {""},
#line 2082 "entities.gperf"
      {"uHar;", "\\u2963"
},
      {""}, {""},
#line 86 "entities.gperf"
      {"Dagger;", "\\u2021"
},
#line 901 "entities.gperf"
      {"cularrp;", "\\u293D"
},
#line 595 "entities.gperf"
      {"Vcy;", "\\u0412"
},
      {""}, {""}, {""}, {""}, {""},
#line 2108 "entities.gperf"
      {"uogon;", "\\u0173"
},
      {""}, {""}, {""}, {""},
#line 2098 "entities.gperf"
      {"uharl;", "\\u21BF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1432 "entities.gperf"
      {"mid;", "\\u2223"
},
#line 1881 "entities.gperf"
      {"sdot;", "\\u22C5"
},
#line 55 "entities.gperf"
      {"Ccirc;", "\\u0108"
},
      {""}, {""}, {""},
#line 530 "entities.gperf"
      {"THORN", "\\xDE"
},
#line 531 "entities.gperf"
      {"THORN;", "\\xDE"
},
#line 1424 "entities.gperf"
      {"mcomma;", "\\u2A29"
},
      {""}, {""},
#line 544 "entities.gperf"
      {"ThinSpace;", "\\u2009"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 557 "entities.gperf"
      {"Ubrcy;", "\\u040E"
},
      {""}, {""},
#line 1635 "entities.gperf"
      {"ofr;", "\\U0001D52C"
},
      {""},
#line 1536 "entities.gperf"
      {"notinE;", "\\u22F9\\u0338"
},
      {""}, {""},
#line 2075 "entities.gperf"
      {"tscy;", "\\u0446"
},
      {""}, {""}, {""}, {""},
#line 449 "entities.gperf"
      {"Rang;", "\\u27EB"
},
      {""}, {""}, {""}, {""}, {""},
#line 1813 "entities.gperf"
      {"reg", "\\xAE"
},
      {""}, {""}, {""},
#line 1442 "entities.gperf"
      {"mldr;", "\\u2026"
},
      {""},
#line 1814 "entities.gperf"
      {"reg;", "\\xAE"
},
      {""}, {""}, {""},
#line 73 "entities.gperf"
      {"ContourIntegral;", "\\u222E"
},
      {""}, {""}, {""}, {""},
#line 2034 "entities.gperf"
      {"theta;", "\\u03B8"
},
      {""}, {""},
#line 1839 "entities.gperf"
      {"rnmid;", "\\u2AEE"
},
      {""},
#line 785 "entities.gperf"
      {"boxdL;", "\\u2555"
},
#line 1655 "entities.gperf"
      {"operp;", "\\u29B9"
},
#line 682 "entities.gperf"
      {"angrtvb;", "\\u22BE"
},
#line 2214 "entities.gperf"
      {"ycy;", "\\u044B"
},
      {""},
#line 1463 "entities.gperf"
      {"nabla;", "\\u2207"
},
      {""}, {""}, {""}, {""}, {""},
#line 1948 "entities.gperf"
      {"square;", "\\u25A1"
},
      {""}, {""},
#line 335 "entities.gperf"
      {"Nopf;", "\\u2115"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1332 "entities.gperf"
      {"lessgtr;", "\\u2276"
},
      {""}, {""}, {""},
#line 1373 "entities.gperf"
      {"lowbar;", "_"
},
#line 1375 "entities.gperf"
      {"lozenge;", "\\u25CA"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1610 "entities.gperf"
      {"nvlt;", "<\\u20D2"
},
      {""},
#line 1271 "entities.gperf"
      {"langle;", "\\u27E8"
},
      {""}, {""},
#line 2196 "entities.gperf"
      {"xmap;", "\\u27FC"
},
      {""}, {""},
#line 1854 "entities.gperf"
      {"rsqb;", "]"
},
      {""},
#line 1952 "entities.gperf"
      {"sscr;", "\\U0001D4C8"
},
      {""},
#line 923 "entities.gperf"
      {"cylcty;", "\\u232D"
},
      {""},
#line 1362 "entities.gperf"
      {"longleftarrow;", "\\u27F5"
},
      {""}, {""}, {""}, {""}, {""},
#line 2125 "entities.gperf"
      {"utdot;", "\\u22F0"
},
      {""},
#line 872 "entities.gperf"
      {"colone;", "\\u2254"
},
      {""}, {""},
#line 2068 "entities.gperf"
      {"trie;", "\\u225C"
},
      {""}, {""}, {""}, {""}, {""},
#line 220 "entities.gperf"
      {"Imacr;", "\\u012A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 957 "entities.gperf"
      {"divideontimes;", "\\u22C7"
},
      {""},
#line 772 "entities.gperf"
      {"boxHu;", "\\u2567"
},
      {""},
#line 503 "entities.gperf"
      {"ShortUpArrow;", "\\u2191"
},
      {""},
#line 23 "entities.gperf"
      {"Aopf;", "\\U0001D538"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1811 "entities.gperf"
      {"reals;", "\\u211D"
},
      {""}, {""},
#line 1160 "entities.gperf"
      {"hardcy;", "\\u044A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 414 "entities.gperf"
      {"Otimes;", "\\u2A37"
},
#line 1822 "entities.gperf"
      {"rhov;", "\\u03F1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 781 "entities.gperf"
      {"boxVh;", "\\u256B"
},
      {""},
#line 277 "entities.gperf"
      {"LeftTriangle;", "\\u22B2"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1659 "entities.gperf"
      {"ord;", "\\u2A5D"
},
#line 661 "entities.gperf"
      {"amalg;", "\\u2A3F"
},
      {""},
#line 1867 "entities.gperf"
      {"sc;", "\\u227B"
},
      {""},
#line 1664 "entities.gperf"
      {"ordm", "\\xBA"
},
#line 1665 "entities.gperf"
      {"ordm;", "\\xBA"
},
      {""}, {""}, {""}, {""},
#line 1883 "entities.gperf"
      {"sdote;", "\\u2A66"
},
      {""}, {""},
#line 91 "entities.gperf"
      {"Del;", "\\u2207"
},
      {""}, {""}, {""}, {""},
#line 1425 "entities.gperf"
      {"mcy;", "\\u043C"
},
      {""},
#line 792 "entities.gperf"
      {"boxhd;", "\\u252C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 132 "entities.gperf"
      {"Downarrow;", "\\u21D3"
},
      {""}, {""}, {""}, {""}, {""},
#line 1879 "entities.gperf"
      {"scsim;", "\\u227F"
},
      {""}, {""},
#line 247 "entities.gperf"
      {"Kcy;", "\\u041A"
},
#line 1979 "entities.gperf"
      {"succ;", "\\u227B"
},
      {""}, {""},
#line 279 "entities.gperf"
      {"LeftTriangleEqual;", "\\u22B4"
},
      {""}, {""},
#line 349 "entities.gperf"
      {"NotGreaterSlantEqual;", "\\u2A7E\\u0338"
},
      {""}, {""}, {""}, {""},
#line 1797 "entities.gperf"
      {"rbrkslu;", "\\u2990"
},
#line 195 "entities.gperf"
      {"HARDcy;", "\\u042A"
},
      {""},
#line 1818 "entities.gperf"
      {"rhard;", "\\u21C1"
},
      {""}, {""},
#line 723 "entities.gperf"
      {"becaus;", "\\u2235"
},
      {""},
#line 1961 "entities.gperf"
      {"sub;", "\\u2282"
},
      {""}, {""},
#line 2117 "entities.gperf"
      {"upsilon;", "\\u03C5"
},
      {""}, {""}, {""},
#line 77 "entities.gperf"
      {"Cross;", "\\u2A2F"
},
      {""}, {""},
#line 2235 "entities.gperf"
      {"zwj;", "\\u200D"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1348 "entities.gperf"
      {"lltri;", "\\u25FA"
},
      {""}, {""}, {""},
#line 346 "entities.gperf"
      {"NotGreaterFullEqual;", "\\u2267\\u0338"
},
      {""},
#line 1870 "entities.gperf"
      {"scaron;", "\\u0161"
},
      {""},
#line 860 "entities.gperf"
      {"circledR;", "\\xAE"
},
#line 1869 "entities.gperf"
      {"scap;", "\\u2AB8"
},
#line 611 "entities.gperf"
      {"Wedge;", "\\u22C0"
},
      {""}, {""},
#line 742 "entities.gperf"
      {"biguplus;", "\\u2A04"
},
      {""}, {""},
#line 2170 "entities.gperf"
      {"vsubnE;", "\\u2ACB\\uFE00"
},
      {""},
#line 1668 "entities.gperf"
      {"orslope;", "\\u2A57"
},
      {""},
#line 149 "entities.gperf"
      {"Emacr;", "\\u0112"
},
      {""}, {""},
#line 224 "entities.gperf"
      {"Integral;", "\\u222B"
},
#line 33 "entities.gperf"
      {"Backslash;", "\\u2216"
},
      {""}, {""}, {""}, {""},
#line 111 "entities.gperf"
      {"DoubleLongLeftArrow;", "\\u27F8"
},
      {""}, {""}, {""},
#line 1457 "entities.gperf"
      {"nLl;", "\\u22D8\\u0338"
},
#line 112 "entities.gperf"
      {"DoubleLongLeftRightArrow;", "\\u27FA"
},
#line 108 "entities.gperf"
      {"DoubleLeftArrow;", "\\u21D0"
},
      {""}, {""},
#line 1110 "entities.gperf"
      {"geqslant;", "\\u2A7E"
},
      {""}, {""},
#line 1098 "entities.gperf"
      {"gacute;", "\\u01F5"
},
      {""},
#line 1320 "entities.gperf"
      {"leqslant;", "\\u2A7D"
},
#line 613 "entities.gperf"
      {"Wopf;", "\\U0001D54E"
},
      {""},
#line 1265 "entities.gperf"
      {"lacute;", "\\u013A"
},
      {""}, {""}, {""},
#line 992 "entities.gperf"
      {"eacute", "\\xE9"
},
#line 993 "entities.gperf"
      {"eacute;", "\\xE9"
},
      {""}, {""}, {""}, {""},
#line 825 "entities.gperf"
      {"cacute;", "\\u0107"
},
      {""}, {""}, {""},
#line 640 "entities.gperf"
      {"aacute", "\\xE1"
},
#line 641 "entities.gperf"
      {"aacute;", "\\xE1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 553 "entities.gperf"
      {"Uacute", "\\xDA"
},
#line 554 "entities.gperf"
      {"Uacute;", "\\xDA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 409 "entities.gperf"
      {"Oscr;", "\\U0001D4AA"
},
      {""}, {""}, {""},
#line 921 "entities.gperf"
      {"cwconint;", "\\u2232"
},
      {""}, {""}, {""}, {""},
#line 707 "entities.gperf"
      {"awconint;", "\\u2233"
},
#line 330 "entities.gperf"
      {"NestedLessLess;", "\\u226A"
},
#line 754 "entities.gperf"
      {"blk14;", "\\u2591"
},
      {""}, {""},
#line 383 "entities.gperf"
      {"NotTilde;", "\\u2241"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 755 "entities.gperf"
      {"blk34;", "\\u2593"
},
      {""}, {""}, {""},
#line 1639 "entities.gperf"
      {"ogt;", "\\u29C1"
},
      {""}, {""}, {""}, {""}, {""},
#line 2163 "entities.gperf"
      {"vltri;", "\\u22B2"
},
      {""}, {""}, {""},
#line 549 "entities.gperf"
      {"Topf;", "\\U0001D54B"
},
#line 1935 "entities.gperf"
      {"sqcap;", "\\u2293"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1721 "entities.gperf"
      {"pr;", "\\u227A"
},
      {""}, {""}, {""}, {""},
#line 301 "entities.gperf"
      {"Longleftarrow;", "\\u27F8"
},
      {""},
#line 753 "entities.gperf"
      {"blk12;", "\\u2592"
},
#line 1014 "entities.gperf"
      {"elsdot;", "\\u2A97"
},
      {""}, {""},
#line 1305 "entities.gperf"
      {"ldsh;", "\\u21B2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 873 "entities.gperf"
      {"coloneq;", "\\u2254"
},
      {""},
#line 428 "entities.gperf"
      {"Popf;", "\\u2119"
},
      {""}, {""}, {""}, {""},
#line 1454 "entities.gperf"
      {"nGtv;", "\\u226B\\u0338"
},
      {""}, {""},
#line 896 "entities.gperf"
      {"cudarrl;", "\\u2938"
},
      {""},
#line 2233 "entities.gperf"
      {"zopf;", "\\U0001D56B"
},
      {""},
#line 2209 "entities.gperf"
      {"xwedge;", "\\u22C0"
},
      {""}, {""},
#line 1858 "entities.gperf"
      {"rtimes;", "\\u22CA"
},
#line 1636 "entities.gperf"
      {"ogon;", "\\u02DB"
},
#line 1745 "entities.gperf"
      {"prsim;", "\\u227E"
},
      {""}, {""},
#line 1255 "entities.gperf"
      {"kjcy;", "\\u045C"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1936 "entities.gperf"
      {"sqcaps;", "\\u2293\\uFE00"
},
      {""},
#line 1872 "entities.gperf"
      {"sce;", "\\u2AB0"
},
#line 71 "entities.gperf"
      {"Congruent;", "\\u2261"
},
#line 1412 "entities.gperf"
      {"mDDot;", "\\u223A"
},
      {""},
#line 746 "entities.gperf"
      {"blacklozenge;", "\\u29EB"
},
#line 1840 "entities.gperf"
      {"roang;", "\\u27ED"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1061 "entities.gperf"
      {"fflig;", "\\uFB00"
},
      {""},
#line 1540 "entities.gperf"
      {"notinvc;", "\\u22F6"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1848 "entities.gperf"
      {"rpargt;", "\\u2994"
},
#line 1743 "entities.gperf"
      {"prop;", "\\u221D"
},
      {""}, {""},
#line 36 "entities.gperf"
      {"Bcy;", "\\u0411"
},
      {""},
#line 1866 "entities.gperf"
      {"sbquo;", "\\u201A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1723 "entities.gperf"
      {"prap;", "\\u2AB7"
},
      {""}, {""}, {""},
#line 619 "entities.gperf"
      {"YAcy;", "\\u042F"
},
      {""},
#line 2145 "entities.gperf"
      {"varrho;", "\\u03F1"
},
      {""},
#line 1888 "entities.gperf"
      {"sect", "\\xA7"
},
#line 1889 "entities.gperf"
      {"sect;", "\\xA7"
},
      {""}, {""},
#line 130 "entities.gperf"
      {"DownTee;", "\\u22A4"
},
      {""},
#line 1899 "entities.gperf"
      {"shcy;", "\\u0448"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1613 "entities.gperf"
      {"nvrtrie;", "\\u22B5\\u20D2"
},
#line 523 "entities.gperf"
      {"SucceedsTilde;", "\\u227F"
},
      {""},
#line 1882 "entities.gperf"
      {"sdotb;", "\\u22A1"
},
#line 1927 "entities.gperf"
      {"softcy;", "\\u044C"
},
      {""}, {""}, {""},
#line 20 "entities.gperf"
      {"Amacr;", "\\u0100"
},
#line 518 "entities.gperf"
      {"Subset;", "\\u22D0"
},
      {""}, {""},
#line 607 "entities.gperf"
      {"Vopf;", "\\U0001D54D"
},
#line 1846 "entities.gperf"
      {"rotimes;", "\\u2A35"
},
      {""}, {""}, {""}, {""},
#line 1796 "entities.gperf"
      {"rbrksld;", "\\u298E"
},
#line 1982 "entities.gperf"
      {"succeq;", "\\u2AB0"
},
#line 2003 "entities.gperf"
      {"suplarr;", "\\u297B"
},
#line 427 "entities.gperf"
      {"Poincareplane;", "\\u210C"
},
#line 929 "entities.gperf"
      {"dash;", "\\u2010"
},
#line 1184 "entities.gperf"
      {"iacute", "\\xED"
},
#line 1185 "entities.gperf"
      {"iacute;", "\\xED"
},
      {""}, {""}, {""},
#line 930 "entities.gperf"
      {"dashv;", "\\u22A3"
},
      {""}, {""},
#line 719 "entities.gperf"
      {"bbrktbrk;", "\\u23B6"
},
      {""},
#line 1968 "entities.gperf"
      {"subne;", "\\u228A"
},
#line 867 "entities.gperf"
      {"cirmid;", "\\u2AEF"
},
      {""}, {""}, {""}, {""}, {""},
#line 1744 "entities.gperf"
      {"propto;", "\\u221D"
},
      {""}, {""}, {""}, {""}, {""},
#line 1516 "entities.gperf"
      {"nlE;", "\\u2266\\u0338"
},
      {""},
#line 918 "entities.gperf"
      {"curvearrowright;", "\\u21B7"
},
      {""}, {""}, {""}, {""},
#line 622 "entities.gperf"
      {"Yacute", "\\xDD"
},
#line 623 "entities.gperf"
      {"Yacute;", "\\xDD"
},
      {""},
#line 1593 "entities.gperf"
      {"ntriangleleft;", "\\u22EA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1943 "entities.gperf"
      {"sqsup;", "\\u2290"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 521 "entities.gperf"
      {"SucceedsEqual;", "\\u2AB0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 254 "entities.gperf"
      {"Lacute;", "\\u0139"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2219 "entities.gperf"
      {"yopf;", "\\U0001D56A"
},
      {""},
#line 1145 "entities.gperf"
      {"gtlPar;", "\\u2995"
},
#line 1902 "entities.gperf"
      {"shy", "\\xAD"
},
      {""}, {""},
#line 1248 "entities.gperf"
      {"kappa;", "\\u03BA"
},
      {""},
#line 1852 "entities.gperf"
      {"rscr;", "\\U0001D4C7"
},
#line 1903 "entities.gperf"
      {"shy;", "\\xAD"
},
#line 1312 "entities.gperf"
      {"leftrightarrow;", "\\u2194"
},
#line 1313 "entities.gperf"
      {"leftrightarrows;", "\\u21C6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 651 "entities.gperf"
      {"aelig", "\\xE6"
},
#line 652 "entities.gperf"
      {"aelig;", "\\xE6"
},
      {""}, {""}, {""},
#line 1793 "entities.gperf"
      {"rbrace;", "}"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1153 "entities.gperf"
      {"gtrsim;", "\\u2273"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 962 "entities.gperf"
      {"dollar;", "$"
},
      {""},
#line 1789 "entities.gperf"
      {"ratio;", "\\u2236"
},
#line 1725 "entities.gperf"
      {"pre;", "\\u2AAF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 458 "entities.gperf"
      {"ReverseUpEquilibrium;", "\\u296F"
},
      {""},
#line 1539 "entities.gperf"
      {"notinvb;", "\\u22F7"
},
      {""},
#line 207 "entities.gperf"
      {"IEcy;", "\\u0415"
},
#line 1967 "entities.gperf"
      {"subnE;", "\\u2ACB"
},
#line 552 "entities.gperf"
      {"Tstrok;", "\\u0166"
},
      {""}, {""},
#line 1430 "entities.gperf"
      {"micro", "\\xB5"
},
#line 1431 "entities.gperf"
      {"micro;", "\\xB5"
},
      {""}, {""}, {""},
#line 1595 "entities.gperf"
      {"ntriangleright;", "\\u22EB"
},
      {""},
#line 1596 "entities.gperf"
      {"ntrianglerighteq;", "\\u22ED"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1876 "entities.gperf"
      {"scnap;", "\\u2ABA"
},
      {""},
#line 1776 "entities.gperf"
      {"rarr;", "\\u2192"
},
      {""}, {""}, {""},
#line 1433 "entities.gperf"
      {"midast;", "*"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1441 "entities.gperf"
      {"mlcp;", "\\u2ADB"
},
      {""},
#line 1180 "entities.gperf"
      {"hslash;", "\\u210F"
},
      {""}, {""}, {""},
#line 353 "entities.gperf"
      {"NotLeftTriangle;", "\\u22EA"
},
      {""}, {""},
#line 354 "entities.gperf"
      {"NotLeftTriangleBar;", "\\u29CF\\u0338"
},
      {""},
#line 355 "entities.gperf"
      {"NotLeftTriangleEqual;", "\\u22EC"
},
#line 1347 "entities.gperf"
      {"llhard;", "\\u296B"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 285 "entities.gperf"
      {"LeftVectorBar;", "\\u2952"
},
      {""}, {""}, {""}, {""}, {""},
#line 1786 "entities.gperf"
      {"rarrtl;", "\\u21A3"
},
#line 400 "entities.gperf"
      {"Ograve", "\\xD2"
},
#line 401 "entities.gperf"
      {"Ograve;", "\\xD2"
},
#line 1314 "entities.gperf"
      {"leftrightharpoons;", "\\u21CB"
},
      {""},
#line 1694 "entities.gperf"
      {"pfr;", "\\U0001D52D"
},
#line 862 "entities.gperf"
      {"circledast;", "\\u229B"
},
#line 1601 "entities.gperf"
      {"nvDash;", "\\u22AD"
},
      {""}, {""},
#line 1445 "entities.gperf"
      {"mopf;", "\\U0001D55E"
},
      {""},
#line 313 "entities.gperf"
      {"MediumSpace;", "\\u205F"
},
#line 1676 "entities.gperf"
      {"otimes;", "\\u2297"
},
      {""},
#line 1512 "entities.gperf"
      {"nisd;", "\\u22FA"
},
      {""}, {""},
#line 1969 "entities.gperf"
      {"subplus;", "\\u2ABF"
},
#line 1308 "entities.gperf"
      {"leftarrowtail;", "\\u21A2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1792 "entities.gperf"
      {"rbbrk;", "\\u2773"
},
#line 249 "entities.gperf"
      {"Kopf;", "\\U0001D542"
},
      {""}, {""}, {""}, {""},
#line 1798 "entities.gperf"
      {"rcaron;", "\\u0159"
},
#line 156 "entities.gperf"
      {"EqualTilde;", "\\u2242"
},
      {""},
#line 724 "entities.gperf"
      {"because;", "\\u2235"
},
      {""}, {""},
#line 1594 "entities.gperf"
      {"ntrianglelefteq;", "\\u22EC"
},
      {""}, {""}, {""}, {""},
#line 2121 "entities.gperf"
      {"urcrop;", "\\u230E"
},
#line 1896 "entities.gperf"
      {"sfrown;", "\\u2322"
},
      {""}, {""}, {""},
#line 1151 "entities.gperf"
      {"gtreqqless;", "\\u2A8C"
},
      {""}, {""}, {""}, {""}, {""},
#line 366 "entities.gperf"
      {"NotPrecedesSlantEqual;", "\\u22E0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2000 "entities.gperf"
      {"supedot;", "\\u2AC4"
},
      {""},
#line 1784 "entities.gperf"
      {"rarrpl;", "\\u2945"
},
#line 2119 "entities.gperf"
      {"urcorn;", "\\u231D"
},
      {""}, {""}, {""},
#line 2218 "entities.gperf"
      {"yicy;", "\\u0457"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1631 "entities.gperf"
      {"odot;", "\\u2299"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2050 "entities.gperf"
      {"tint;", "\\u222D"
},
#line 1726 "entities.gperf"
      {"prec;", "\\u227A"
},
      {""}, {""}, {""},
#line 2091 "entities.gperf"
      {"udarr;", "\\u21C5"
},
      {""},
#line 1563 "entities.gperf"
      {"nsccue;", "\\u22E1"
},
#line 1282 "entities.gperf"
      {"larrsim;", "\\u2973"
},
      {""},
#line 1783 "entities.gperf"
      {"rarrlp;", "\\u21AC"
},
      {""}, {""},
#line 911 "entities.gperf"
      {"curlyeqprec;", "\\u22DE"
},
      {""}, {""}, {""},
#line 493 "entities.gperf"
      {"Sacute;", "\\u015A"
},
#line 1746 "entities.gperf"
      {"prurel;", "\\u22B0"
},
#line 2124 "entities.gperf"
      {"uscr;", "\\U0001D4CA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 333 "entities.gperf"
      {"NoBreak;", "\\u2060"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1529 "entities.gperf"
      {"nltri;", "\\u22EA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1945 "entities.gperf"
      {"sqsupset;", "\\u2290"
},
#line 1677 "entities.gperf"
      {"otimesas;", "\\u2A36"
},
#line 1946 "entities.gperf"
      {"sqsupseteq;", "\\u2292"
},
#line 1698 "entities.gperf"
      {"phone;", "\\u260E"
},
      {""},
#line 1842 "entities.gperf"
      {"robrk;", "\\u27E7"
},
      {""},
#line 1623 "entities.gperf"
      {"oast;", "\\u229B"
},
      {""}, {""}, {""}, {""}, {""},
#line 1737 "entities.gperf"
      {"prnap;", "\\u2AB9"
},
      {""}, {""}, {""},
#line 210 "entities.gperf"
      {"Iacute", "\\xCD"
},
#line 211 "entities.gperf"
      {"Iacute;", "\\xCD"
},
      {""}, {""},
#line 287 "entities.gperf"
      {"Leftrightarrow;", "\\u21D4"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 734 "entities.gperf"
      {"bigcup;", "\\u22C3"
},
      {""},
#line 1115 "entities.gperf"
      {"gesdotol;", "\\u2A84"
},
      {""},
#line 88 "entities.gperf"
      {"Dashv;", "\\u2AE4"
},
      {""},
#line 2232 "entities.gperf"
      {"zigrarr;", "\\u21DD"
},
      {""},
#line 1609 "entities.gperf"
      {"nvle;", "\\u2264\\u20D2"
},
#line 2059 "entities.gperf"
      {"trade;", "\\u2122"
},
#line 1464 "entities.gperf"
      {"nacute;", "\\u0144"
},
      {""},
#line 683 "entities.gperf"
      {"angrtvbd;", "\\u299D"
},
      {""}, {""},
#line 711 "entities.gperf"
      {"backepsilon;", "\\u03F6"
},
      {""},
#line 110 "entities.gperf"
      {"DoubleLeftTee;", "\\u2AE4"
},
      {""}, {""}, {""}, {""},
#line 2085 "entities.gperf"
      {"uarr;", "\\u2191"
},
      {""},
#line 1670 "entities.gperf"
      {"oscr;", "\\u2134"
},
      {""},
#line 912 "entities.gperf"
      {"curlyeqsucc;", "\\u22DF"
},
      {""}, {""}, {""}, {""}, {""},
#line 1780 "entities.gperf"
      {"rarrc;", "\\u2933"
},
#line 358 "entities.gperf"
      {"NotLessGreater;", "\\u2278"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 864 "entities.gperf"
      {"circleddash;", "\\u229D"
},
      {""}, {""}, {""}, {""},
#line 631 "entities.gperf"
      {"Zacute;", "\\u0179"
},
      {""}, {""}, {""},
#line 941 "entities.gperf"
      {"delta;", "\\u03B4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 281 "entities.gperf"
      {"LeftUpTeeVector;", "\\u2960"
},
      {""}, {""}, {""}, {""},
#line 1939 "entities.gperf"
      {"sqsub;", "\\u228F"
},
      {""}, {""}, {""}, {""},
#line 283 "entities.gperf"
      {"LeftUpVectorBar;", "\\u2958"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 305 "entities.gperf"
      {"LowerLeftArrow;", "\\u2199"
},
      {""}, {""}, {""},
#line 1984 "entities.gperf"
      {"succneqq;", "\\u2AB6"
},
#line 572 "entities.gperf"
      {"UnionPlus;", "\\u228E"
},
      {""}, {""},
#line 1812 "entities.gperf"
      {"rect;", "\\u25AD"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 106 "entities.gperf"
      {"DoubleDot;", "\\xA8"
},
#line 1209 "entities.gperf"
      {"imped;", "\\u01B5"
},
      {""},
#line 1162 "entities.gperf"
      {"harrcir;", "\\u2948"
},
      {""}, {""}, {""}, {""},
#line 1749 "entities.gperf"
      {"puncsp;", "\\u2008"
},
      {""},
#line 41 "entities.gperf"
      {"Bopf;", "\\U0001D539"
},
      {""}, {""},
#line 936 "entities.gperf"
      {"ddagger;", "\\u2021"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 251 "entities.gperf"
      {"LJcy;", "\\u0409"
},
      {""}, {""}, {""}, {""},
#line 74 "entities.gperf"
      {"Copf;", "\\u2102"
},
#line 1065 "entities.gperf"
      {"fjlig;", "fj"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1171 "entities.gperf"
      {"hksearow;", "\\u2925"
},
#line 338 "entities.gperf"
      {"NotCupCap;", "\\u226D"
},
      {""},
#line 448 "entities.gperf"
      {"Racute;", "\\u0154"
},
      {""}, {""}, {""},
#line 1692 "entities.gperf"
      {"perp;", "\\u22A5"
},
      {""}, {""},
#line 1855 "entities.gperf"
      {"rsquo;", "\\u2019"
},
#line 1856 "entities.gperf"
      {"rsquor;", "\\u2019"
},
      {""}, {""}, {""}, {""},
#line 272 "entities.gperf"
      {"LeftRightArrow;", "\\u2194"
},
#line 138 "entities.gperf"
      {"Eacute", "\\xC9"
},
#line 139 "entities.gperf"
      {"Eacute;", "\\xC9"
},
      {""}, {""}, {""}, {""},
#line 1660 "entities.gperf"
      {"order;", "\\u2134"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1964 "entities.gperf"
      {"sube;", "\\u2286"
},
      {""},
#line 1419 "entities.gperf"
      {"mapsto;", "\\u21A6"
},
      {""}, {""}, {""}, {""}, {""},
#line 2120 "entities.gperf"
      {"urcorner;", "\\u231D"
},
#line 1251 "entities.gperf"
      {"kcy;", "\\u043A"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1028 "entities.gperf"
      {"eplus;", "\\u2A71"
},
      {""}, {""},
#line 1907 "entities.gperf"
      {"sim;", "\\u223C"
},
      {""},
#line 726 "entities.gperf"
      {"bepsi;", "\\u03F6"
},
      {""}, {""}, {""}, {""}, {""},
#line 2054 "entities.gperf"
      {"topcir;", "\\u2AF1"
},
      {""},
#line 1363 "entities.gperf"
      {"longleftrightarrow;", "\\u27F7"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 686 "entities.gperf"
      {"angzarr;", "\\u237C"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 931 "entities.gperf"
      {"dbkarow;", "\\u290F"
},
#line 1800 "entities.gperf"
      {"rceil;", "\\u2309"
},
      {""}, {""},
#line 1461 "entities.gperf"
      {"nVDash;", "\\u22AF"
},
      {""}, {""}, {""},
#line 1957 "entities.gperf"
      {"starf;", "\\u2605"
},
      {""}, {""}, {""}, {""}, {""},
#line 2132 "entities.gperf"
      {"uwangle;", "\\u29A7"
},
      {""}, {""}, {""},
#line 769 "entities.gperf"
      {"boxHD;", "\\u2566"
},
      {""},
#line 1729 "entities.gperf"
      {"preceq;", "\\u2AAF"
},
      {""},
#line 1913 "entities.gperf"
      {"siml;", "\\u2A9D"
},
      {""},
#line 1634 "entities.gperf"
      {"ofcir;", "\\u29BF"
},
      {""},
#line 432 "entities.gperf"
      {"PrecedesSlantEqual;", "\\u227C"
},
#line 66 "entities.gperf"
      {"ClockwiseContourIntegral;", "\\u2232"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 82 "entities.gperf"
      {"DDotrahd;", "\\u2911"
},
#line 1467 "entities.gperf"
      {"napE;", "\\u2A70\\u0338"
},
#line 1202 "entities.gperf"
      {"ijlig;", "\\u0133"
},
      {""}, {""}, {""},
#line 1566 "entities.gperf"
      {"nshortmid;", "\\u2224"
},
      {""},
#line 863 "entities.gperf"
      {"circledcirc;", "\\u229A"
},
      {""}, {""}, {""},
#line 791 "entities.gperf"
      {"boxhU;", "\\u2568"
},
      {""}, {""}, {""},
#line 83 "entities.gperf"
      {"DJcy;", "\\u0402"
},
#line 107 "entities.gperf"
      {"DoubleDownArrow;", "\\u21D3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2138 "entities.gperf"
      {"varepsilon;", "\\u03F5"
},
      {""}, {""}, {""}, {""}, {""},
#line 2153 "entities.gperf"
      {"vartriangleright;", "\\u22B3"
},
      {""},
#line 1778 "entities.gperf"
      {"rarrb;", "\\u21E5"
},
      {""},
#line 1918 "entities.gperf"
      {"slarr;", "\\u2190"
},
      {""},
#line 1040 "entities.gperf"
      {"equivDD;", "\\u2A78"
},
      {""},
#line 2100 "entities.gperf"
      {"uhblk;", "\\u2580"
},
#line 2087 "entities.gperf"
      {"ubreve;", "\\u016D"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1632 "entities.gperf"
      {"odsold;", "\\u29BC"
},
      {""}, {""}, {""},
#line 321 "entities.gperf"
      {"Nacute;", "\\u0143"
},
      {""},
#line 1900 "entities.gperf"
      {"shortmid;", "\\u2223"
},
      {""}, {""}, {""}, {""},
#line 1126 "entities.gperf"
      {"glj;", "\\u2AA4"
},
#line 189 "entities.gperf"
      {"GreaterGreater;", "\\u2AA2"
},
#line 532 "entities.gperf"
      {"TRADE;", "\\u2122"
},
#line 1944 "entities.gperf"
      {"sqsupe;", "\\u2292"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 2096 "entities.gperf"
      {"ugrave", "\\xF9"
},
#line 2097 "entities.gperf"
      {"ugrave;", "\\xF9"
},
      {""}, {""}, {""}, {""},
#line 2040 "entities.gperf"
      {"thkap;", "\\u2248"
},
      {""}, {""}, {""},
#line 1525 "entities.gperf"
      {"nles;", "\\u2A7D\\u0338"
},
#line 412 "entities.gperf"
      {"Otilde", "\\xD5"
},
#line 413 "entities.gperf"
      {"Otilde;", "\\xD5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1690 "entities.gperf"
      {"period;", "."
},
      {""},
#line 2118 "entities.gperf"
      {"upuparrows;", "\\u21C8"
},
      {""}, {""}, {""}, {""}, {""},
#line 10 "entities.gperf"
      {"Aacute", "\\xC1"
},
#line 11 "entities.gperf"
      {"Aacute;", "\\xC1"
},
      {""},
#line 1941 "entities.gperf"
      {"sqsubset;", "\\u228F"
},
#line 1988 "entities.gperf"
      {"sung;", "\\u266A"
},
#line 1942 "entities.gperf"
      {"sqsubseteq;", "\\u2291"
},
      {""}, {""}, {""},
#line 1315 "entities.gperf"
      {"leftrightsquigarrow;", "\\u21AD"
},
#line 1874 "entities.gperf"
      {"scirc;", "\\u015D"
},
#line 914 "entities.gperf"
      {"curlywedge;", "\\u22CF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1350 "entities.gperf"
      {"lmoust;", "\\u23B0"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1422 "entities.gperf"
      {"mapstoup;", "\\u21A5"
},
      {""}, {""}, {""}, {""}, {""},
#line 1748 "entities.gperf"
      {"psi;", "\\u03C8"
},
#line 69 "entities.gperf"
      {"Colon;", "\\u2237"
},
#line 288 "entities.gperf"
      {"LessEqualGreater;", "\\u22DA"
},
      {""}, {""}, {""}, {""},
#line 1637 "entities.gperf"
      {"ograve", "\\xF2"
},
#line 1638 "entities.gperf"
      {"ograve;", "\\xF2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 350 "entities.gperf"
      {"NotGreaterTilde;", "\\u2275"
},
      {""}, {""}, {""}, {""}, {""},
#line 763 "entities.gperf"
      {"bowtie;", "\\u22C8"
},
      {""},
#line 1768 "entities.gperf"
      {"radic;", "\\u221A"
},
      {""},
#line 92 "entities.gperf"
      {"Delta;", "\\u0394"
},
      {""}, {""}, {""}, {""}, {""},
#line 1260 "entities.gperf"
      {"lAtail;", "\\u291B"
},
      {""}, {""},
#line 2122 "entities.gperf"
      {"uring;", "\\u016F"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1932 "entities.gperf"
      {"spades;", "\\u2660"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1915 "entities.gperf"
      {"simne;", "\\u2246"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 302 "entities.gperf"
      {"Longleftrightarrow;", "\\u27FA"
},
      {""}, {""},
#line 1060 "entities.gperf"
      {"ffilig;", "\\uFB03"
},
      {""}, {""}, {""}, {""},
#line 2037 "entities.gperf"
      {"thickapprox;", "\\u2248"
},
      {""},
#line 2028 "entities.gperf"
      {"tcy;", "\\u0442"
},
      {""},
#line 278 "entities.gperf"
      {"LeftTriangleBar;", "\\u29CF"
},
      {""}, {""}, {""}, {""}, {""},
#line 1997 "entities.gperf"
      {"supdot;", "\\u2ABE"
},
      {""}, {""},
#line 1695 "entities.gperf"
      {"phi;", "\\u03C6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 381 "entities.gperf"
      {"NotSuperset;", "\\u2283\\u20D2"
},
      {""}, {""}, {""}, {""},
#line 1734 "entities.gperf"
      {"prime;", "\\u2032"
},
#line 327 "entities.gperf"
      {"NegativeThinSpace;", "\\u200B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1437 "entities.gperf"
      {"minus;", "\\u2212"
},
      {""}, {""}, {""}, {""},
#line 1980 "entities.gperf"
      {"succapprox;", "\\u2AB8"
},
      {""}, {""},
#line 738 "entities.gperf"
      {"bigsqcup;", "\\u2A06"
},
      {""}, {""}, {""},
#line 1689 "entities.gperf"
      {"percnt;", "%"
},
      {""}, {""},
#line 1914 "entities.gperf"
      {"simlE;", "\\u2A9F"
},
      {""}, {""}, {""}, {""},
#line 1054 "entities.gperf"
      {"exist;", "\\u2203"
},
      {""}, {""}, {""},
#line 59 "entities.gperf"
      {"CenterDot;", "\\xB7"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 533 "entities.gperf"
      {"TSHcy;", "\\u040B"
},
      {""}, {""}, {""},
#line 1526 "entities.gperf"
      {"nless;", "\\u226E"
},
      {""},
#line 1735 "entities.gperf"
      {"primes;", "\\u2119"
},
      {""}, {""}, {""},
#line 1810 "entities.gperf"
      {"realpart;", "\\u211C"
},
      {""}, {""}, {""}, {""}, {""},
#line 51 "entities.gperf"
      {"Cayleys;", "\\u212D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1719 "entities.gperf"
      {"pound", "\\xA3"
},
#line 1720 "entities.gperf"
      {"pound;", "\\xA3"
},
      {""}, {""},
#line 173 "entities.gperf"
      {"GJcy;", "\\u0403"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1640 "entities.gperf"
      {"ohbar;", "\\u29B5"
},
      {""},
#line 1012 "entities.gperf"
      {"ell;", "\\u2113"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1530 "entities.gperf"
      {"nltrie;", "\\u22EC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 395 "entities.gperf"
      {"Ocirc", "\\xD4"
},
#line 396 "entities.gperf"
      {"Ocirc;", "\\xD4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 291 "entities.gperf"
      {"LessLess;", "\\u2AA1"
},
      {""},
#line 658 "entities.gperf"
      {"aleph;", "\\u2135"
},
#line 1680 "entities.gperf"
      {"ovbar;", "\\u233D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 437 "entities.gperf"
      {"Proportional;", "\\u221D"
},
      {""}, {""},
#line 858 "entities.gperf"
      {"circlearrowleft;", "\\u21BA"
},
#line 2224 "entities.gperf"
      {"zacute;", "\\u017A"
},
#line 1801 "entities.gperf"
      {"rcub;", "}"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 456 "entities.gperf"
      {"ReverseElement;", "\\u220B"
},
      {""}, {""},
#line 716 "entities.gperf"
      {"barwed;", "\\u2305"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 328 "entities.gperf"
      {"NegativeVeryThinSpace;", "\\u200B"
},
      {""}, {""}, {""}, {""}, {""},
#line 1916 "entities.gperf"
      {"simplus;", "\\u2A24"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1731 "entities.gperf"
      {"precneqq;", "\\u2AB5"
},
      {""}, {""}, {""}, {""},
#line 855 "entities.gperf"
      {"cirE;", "\\u29C3"
},
      {""}, {""}, {""}, {""},
#line 1546 "entities.gperf"
      {"nparallel;", "\\u2226"
},
      {""},
#line 1836 "entities.gperf"
      {"rlm;", "\\u200F"
},
#line 56 "entities.gperf"
      {"Cconint;", "\\u2230"
},
      {""}, {""}, {""}, {""},
#line 1542 "entities.gperf"
      {"notniva;", "\\u220C"
},
      {""},
#line 1256 "entities.gperf"
      {"kopf;", "\\U0001D55C"
},
      {""},
#line 1940 "entities.gperf"
      {"sqsube;", "\\u2291"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 275 "entities.gperf"
      {"LeftTeeArrow;", "\\u21A4"
},
      {""},
#line 320 "entities.gperf"
      {"NJcy;", "\\u040A"
},
      {""}, {""}, {""},
#line 730 "entities.gperf"
      {"between;", "\\u226C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1747 "entities.gperf"
      {"pscr;", "\\U0001D4C5"
},
      {""}, {""}, {""},
#line 115 "entities.gperf"
      {"DoubleRightTee;", "\\u22A8"
},
      {""}, {""},
#line 575 "entities.gperf"
      {"UpArrow;", "\\u2191"
},
      {""},
#line 550 "entities.gperf"
      {"TripleDot;", "\\u20DB"
},
      {""}, {""}, {""}, {""}, {""},
#line 1779 "entities.gperf"
      {"rarrbfs;", "\\u2920"
},
      {""}, {""}, {""}, {""}, {""},
#line 1853 "entities.gperf"
      {"rsh;", "\\u21B1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1515 "entities.gperf"
      {"nlArr;", "\\u21CD"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1861 "entities.gperf"
      {"rtrif;", "\\u25B8"
},
      {""}, {""},
#line 1439 "entities.gperf"
      {"minusd;", "\\u2238"
},
      {""}, {""}, {""},
#line 340 "entities.gperf"
      {"NotElement;", "\\u2209"
},
      {""}, {""},
#line 1834 "entities.gperf"
      {"rlarr;", "\\u21C4"
},
      {""}, {""}, {""}, {""}, {""},
#line 1681 "entities.gperf"
      {"par;", "\\u2225"
},
#line 1687 "entities.gperf"
      {"part;", "\\u2202"
},
      {""}, {""}, {""}, {""},
#line 1937 "entities.gperf"
      {"sqcup;", "\\u2294"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1420 "entities.gperf"
      {"mapstodown;", "\\u21A7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2210 "entities.gperf"
      {"yacute", "\\xFD"
},
#line 2211 "entities.gperf"
      {"yacute;", "\\xFD"
},
      {""}, {""}, {""},
#line 1455 "entities.gperf"
      {"nLeftarrow;", "\\u21CD"
},
      {""}, {""}, {""},
#line 2045 "entities.gperf"
      {"times", "\\xD7"
},
#line 2046 "entities.gperf"
      {"times;", "\\xD7"
},
#line 2067 "entities.gperf"
      {"tridot;", "\\u25EC"
},
      {""},
#line 605 "entities.gperf"
      {"VeryThinSpace;", "\\u200A"
},
#line 24 "entities.gperf"
      {"ApplyFunction;", "\\u2061"
},
      {""}, {""}, {""}, {""}, {""},
#line 2126 "entities.gperf"
      {"utilde;", "\\u0169"
},
      {""},
#line 2019 "entities.gperf"
      {"swarrow;", "\\u2199"
},
      {""}, {""}, {""},
#line 1938 "entities.gperf"
      {"sqcups;", "\\u2294\\uFE00"
},
#line 2004 "entities.gperf"
      {"supmult;", "\\u2AC2"
},
#line 1880 "entities.gperf"
      {"scy;", "\\u0441"
},
#line 970 "entities.gperf"
      {"doublebarwedge;", "\\u2306"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1296 "entities.gperf"
      {"lcedil;", "\\u013C"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 386 "entities.gperf"
      {"NotTildeTilde;", "\\u2249"
},
      {""},
#line 837 "entities.gperf"
      {"ccedil", "\\xE7"
},
#line 838 "entities.gperf"
      {"ccedil;", "\\xE7"
},
#line 1970 "entities.gperf"
      {"subrarr;", "\\u2979"
},
      {""}, {""},
#line 1864 "entities.gperf"
      {"rx;", "\\u211E"
},
      {""}, {""}, {""}, {""}, {""},
#line 157 "entities.gperf"
      {"Equilibrium;", "\\u21CC"
},
      {""}, {""}, {""},
#line 2136 "entities.gperf"
      {"vDash;", "\\u22A8"
},
      {""}, {""}, {""}, {""}, {""},
#line 2008 "entities.gperf"
      {"supset;", "\\u2283"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 2194 "entities.gperf"
      {"xlArr;", "\\u27F8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1674 "entities.gperf"
      {"otilde", "\\xF5"
},
#line 1675 "entities.gperf"
      {"otilde;", "\\xF5"
},
      {""},
#line 1777 "entities.gperf"
      {"rarrap;", "\\u2975"
},
#line 329 "entities.gperf"
      {"NestedGreaterGreater;", "\\u226B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1624 "entities.gperf"
      {"ocir;", "\\u229A"
},
      {""}, {""},
#line 384 "entities.gperf"
      {"NotTildeEqual;", "\\u2244"
},
      {""}, {""}, {""},
#line 1574 "entities.gperf"
      {"nsqsupe;", "\\u22E3"
},
      {""},
#line 972 "entities.gperf"
      {"downdownarrows;", "\\u21CA"
},
      {""}, {""}, {""}, {""}, {""},
#line 306 "entities.gperf"
      {"LowerRightArrow;", "\\u2198"
},
      {""},
#line 1803 "entities.gperf"
      {"rdca;", "\\u2937"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2069 "entities.gperf"
      {"triminus;", "\\u2A3A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 989 "entities.gperf"
      {"dzigrarr;", "\\u27FF"
},
#line 1909 "entities.gperf"
      {"sime;", "\\u2243"
},
#line 1910 "entities.gperf"
      {"simeq;", "\\u2243"
},
      {""}, {""}, {""},
#line 292 "entities.gperf"
      {"LessSlantEqual;", "\\u2A7D"
},
#line 2140 "entities.gperf"
      {"varnothing;", "\\u2205"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2123 "entities.gperf"
      {"urtri;", "\\u25F9"
},
#line 1456 "entities.gperf"
      {"nLeftrightarrow;", "\\u21CE"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2128 "entities.gperf"
      {"utrif;", "\\u25B4"
},
      {""}, {""}, {""}, {""},
#line 2055 "entities.gperf"
      {"topf;", "\\U0001D565"
},
      {""}, {""}, {""},
#line 1310 "entities.gperf"
      {"leftharpoonup;", "\\u21BC"
},
      {""},
#line 1204 "entities.gperf"
      {"image;", "\\u2111"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1682 "entities.gperf"
      {"para", "\\xB6"
},
#line 1683 "entities.gperf"
      {"para;", "\\xB6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 70 "entities.gperf"
      {"Colone;", "\\u2A74"
},
      {""}, {""},
#line 1647 "entities.gperf"
      {"olt;", "\\u29C0"
},
      {""}, {""},
#line 1697 "entities.gperf"
      {"phmmat;", "\\u2133"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1983 "entities.gperf"
      {"succnapprox;", "\\u2ABA"
},
      {""}, {""},
#line 1316 "entities.gperf"
      {"leftthreetimes;", "\\u22CB"
},
      {""}, {""}, {""},
#line 741 "entities.gperf"
      {"bigtriangleup;", "\\u25B3"
},
#line 125 "entities.gperf"
      {"DownLeftVector;", "\\u21BD"
},
      {""}, {""},
#line 126 "entities.gperf"
      {"DownLeftVectorBar;", "\\u2956"
},
#line 1892 "entities.gperf"
      {"setminus;", "\\u2216"
},
#line 1365 "entities.gperf"
      {"longrightarrow;", "\\u27F6"
},
      {""}, {""}, {""}, {""}, {""},
#line 2016 "entities.gperf"
      {"swArr;", "\\u21D9"
},
      {""}, {""}, {""}, {""}, {""},
#line 2049 "entities.gperf"
      {"timesd;", "\\u2A30"
},
      {""}, {""}, {""},
#line 793 "entities.gperf"
      {"boxhu;", "\\u2534"
},
      {""}, {""},
#line 397 "entities.gperf"
      {"Ocy;", "\\u041E"
},
      {""},
#line 1696 "entities.gperf"
      {"phiv;", "\\u03D5"
},
      {""},
#line 713 "entities.gperf"
      {"backsim;", "\\u223D"
},
      {""}, {""}, {""},
#line 1643 "entities.gperf"
      {"olarr;", "\\u21BA"
},
#line 205 "entities.gperf"
      {"HumpDownHump;", "\\u224E"
},
#line 522 "entities.gperf"
      {"SucceedsSlantEqual;", "\\u227D"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 2111 "entities.gperf"
      {"updownarrow;", "\\u2195"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2088 "entities.gperf"
      {"ucirc", "\\xFB"
},
#line 2089 "entities.gperf"
      {"ucirc;", "\\xFB"
},
#line 1642 "entities.gperf"
      {"oint;", "\\u222E"
},
      {""}, {""},
#line 1661 "entities.gperf"
      {"orderof;", "\\u2134"
},
      {""}, {""}, {""}, {""},
#line 1819 "entities.gperf"
      {"rharu;", "\\u21C0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1727 "entities.gperf"
      {"precapprox;", "\\u2AB7"
},
      {""}, {""},
#line 1416 "entities.gperf"
      {"malt;", "\\u2720"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1820 "entities.gperf"
      {"rharul;", "\\u296C"
},
      {""},
#line 260 "entities.gperf"
      {"Lcedil;", "\\u013B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 737 "entities.gperf"
      {"bigotimes;", "\\u2A02"
},
      {""}, {""}, {""},
#line 1805 "entities.gperf"
      {"rdquo;", "\\u201D"
},
#line 1806 "entities.gperf"
      {"rdquor;", "\\u201D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 298 "entities.gperf"
      {"LongLeftArrow;", "\\u27F5"
},
      {""}, {""}, {""}, {""}, {""},
#line 1845 "entities.gperf"
      {"roplus;", "\\u2A2E"
},
      {""}, {""},
#line 1965 "entities.gperf"
      {"subedot;", "\\u2AC3"
},
      {""}, {""}, {""}, {""},
#line 733 "entities.gperf"
      {"bigcirc;", "\\u25EF"
},
      {""},
#line 1592 "entities.gperf"
      {"ntlg;", "\\u2278"
},
#line 1625 "entities.gperf"
      {"ocirc", "\\xF4"
},
#line 1626 "entities.gperf"
      {"ocirc;", "\\xF4"
},
      {""},
#line 2009 "entities.gperf"
      {"supseteq;", "\\u2287"
},
#line 2010 "entities.gperf"
      {"supseteqq;", "\\u2AC6"
},
      {""},
#line 1168 "entities.gperf"
      {"hellip;", "\\u2026"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1608 "entities.gperf"
      {"nvlArr;", "\\u2902"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1862 "entities.gperf"
      {"rtriltri;", "\\u29CE"
},
#line 1774 "entities.gperf"
      {"raquo", "\\xBB"
},
#line 1775 "entities.gperf"
      {"raquo;", "\\xBB"
},
      {""}, {""},
#line 48 "entities.gperf"
      {"Cacute;", "\\u0106"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1097 "entities.gperf"
      {"gEl;", "\\u2A8C"
},
      {""}, {""},
#line 1247 "entities.gperf"
      {"jukcy;", "\\u0454"
},
      {""}, {""}, {""}, {""},
#line 2159 "entities.gperf"
      {"vellip;", "\\u22EE"
},
      {""},
#line 1868 "entities.gperf"
      {"scE;", "\\u2AB4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1440 "entities.gperf"
      {"minusdu;", "\\u2A2A"
},
      {""}, {""}, {""},
#line 927 "entities.gperf"
      {"daleth;", "\\u2138"
},
      {""},
#line 104 "entities.gperf"
      {"DotEqual;", "\\u2250"
},
#line 1851 "entities.gperf"
      {"rsaquo;", "\\u203A"
},
#line 113 "entities.gperf"
      {"DoubleLongRightArrow;", "\\u27F9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 122 "entities.gperf"
      {"DownBreve;", "\\u0311"
},
      {""},
#line 2077 "entities.gperf"
      {"tstrok;", "\\u0167"
},
      {""}, {""}, {""}, {""}, {""},
#line 2072 "entities.gperf"
      {"tritime;", "\\u2A3B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 714 "entities.gperf"
      {"backsimeq;", "\\u22CD"
},
      {""}, {""},
#line 1887 "entities.gperf"
      {"searrow;", "\\u2198"
},
      {""}, {""},
#line 1630 "entities.gperf"
      {"odiv;", "\\u2A38"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2071 "entities.gperf"
      {"trisb;", "\\u29CD"
},
#line 163 "entities.gperf"
      {"Exists;", "\\u2203"
},
#line 267 "entities.gperf"
      {"LeftDoubleBracket;", "\\u27E6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1787 "entities.gperf"
      {"rarrw;", "\\u219D"
},
#line 717 "entities.gperf"
      {"barwedge;", "\\u2305"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1802 "entities.gperf"
      {"rcy;", "\\u0440"
},
      {""}, {""},
#line 303 "entities.gperf"
      {"Longrightarrow;", "\\u27F9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1931 "entities.gperf"
      {"sopf;", "\\U0001D564"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 496 "entities.gperf"
      {"Scedil;", "\\u015E"
},
      {""}, {""}, {""}, {""},
#line 280 "entities.gperf"
      {"LeftUpDownVector;", "\\u2951"
},
      {""}, {""},
#line 244 "entities.gperf"
      {"KJcy;", "\\u040C"
},
      {""},
#line 365 "entities.gperf"
      {"NotPrecedesEqual;", "\\u2AAF\\u0338"
},
      {""},
#line 2151 "entities.gperf"
      {"vartheta;", "\\u03D1"
},
      {""}, {""}, {""}, {""},
#line 524 "entities.gperf"
      {"SuchThat;", "\\u220B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 758 "entities.gperf"
      {"bnequiv;", "\\u2261\\u20E5"
},
      {""}, {""}, {""},
#line 1237 "entities.gperf"
      {"iukcy;", "\\u0456"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1950 "entities.gperf"
      {"squf;", "\\u25AA"
},
      {""},
#line 1480 "entities.gperf"
      {"ncedil;", "\\u0146"
},
      {""}, {""},
#line 1722 "entities.gperf"
      {"prE;", "\\u2AB3"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 121 "entities.gperf"
      {"DownArrowUpArrow;", "\\u21F5"
},
      {""}, {""}, {""},
#line 1904 "entities.gperf"
      {"sigma;", "\\u03C3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1064 "entities.gperf"
      {"filig;", "\\uFB01"
},
      {""}, {""}, {""},
#line 300 "entities.gperf"
      {"LongRightArrow;", "\\u27F6"
},
      {""},
#line 1434 "entities.gperf"
      {"midcir;", "\\u2AF0"
},
      {""}, {""},
#line 1857 "entities.gperf"
      {"rthree;", "\\u22CC"
},
      {""},
#line 2023 "entities.gperf"
      {"target;", "\\u2316"
},
      {""}, {""}, {""}, {""}, {""},
#line 1409 "entities.gperf"
      {"luruhar;", "\\u2966"
},
      {""}, {""},
#line 1067 "entities.gperf"
      {"fllig;", "\\uFB02"
},
      {""}, {""}, {""}, {""},
#line 1435 "entities.gperf"
      {"middot", "\\xB7"
},
#line 1436 "entities.gperf"
      {"middot;", "\\xB7"
},
      {""}, {""}, {""}, {""}, {""},
#line 1333 "entities.gperf"
      {"lesssim;", "\\u2272"
},
      {""}, {""}, {""}, {""},
#line 739 "entities.gperf"
      {"bigstar;", "\\u2605"
},
#line 1924 "entities.gperf"
      {"smt;", "\\u2AAA"
},
#line 2011 "entities.gperf"
      {"supsetneq;", "\\u228B"
},
#line 2012 "entities.gperf"
      {"supsetneqq;", "\\u2ACC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1884 "entities.gperf"
      {"seArr;", "\\u21D8"
},
      {""},
#line 37 "entities.gperf"
      {"Because;", "\\u2235"
},
      {""}, {""}, {""}, {""},
#line 435 "entities.gperf"
      {"Product;", "\\u220F"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 314 "entities.gperf"
      {"Mellintrf;", "\\u2133"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2110 "entities.gperf"
      {"uparrow;", "\\u2191"
},
      {""}, {""},
#line 375 "entities.gperf"
      {"NotSubset;", "\\u2282\\u20D2"
},
      {""},
#line 2036 "entities.gperf"
      {"thetav;", "\\u03D1"
},
      {""},
#line 1764 "entities.gperf"
      {"rBarr;", "\\u290F"
},
      {""},
#line 273 "entities.gperf"
      {"LeftRightVector;", "\\u294E"
},
#line 453 "entities.gperf"
      {"Rcedil;", "\\u0156"
},
      {""}, {""}, {""}, {""}, {""},
#line 2090 "entities.gperf"
      {"ucy;", "\\u0443"
},
      {""},
#line 1996 "entities.gperf"
      {"supE;", "\\u2AC6"
},
      {""}, {""},
#line 118 "entities.gperf"
      {"DoubleVerticalBar;", "\\u2225"
},
#line 509 "entities.gperf"
      {"SquareIntersection;", "\\u2293"
},
      {""}, {""}, {""},
#line 1766 "entities.gperf"
      {"race;", "\\u223D\\u0331"
},
      {""}, {""}, {""}, {""}, {""},
#line 1761 "entities.gperf"
      {"rAarr;", "\\u21DB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1349 "entities.gperf"
      {"lmidot;", "\\u0140"
},
      {""}, {""}, {""}, {""}, {""},
#line 1762 "entities.gperf"
      {"rArr;", "\\u21D2"
},
      {""}, {""}, {""},
#line 179 "entities.gperf"
      {"Gcedil;", "\\u0122"
},
      {""},
#line 1928 "entities.gperf"
      {"sol;", "/"
},
#line 405 "entities.gperf"
      {"Oopf;", "\\U0001D546"
},
      {""}, {""}, {""}, {""}, {""},
#line 109 "entities.gperf"
      {"DoubleLeftRightArrow;", "\\u21D4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 462 "entities.gperf"
      {"RightArrow;", "\\u2192"
},
      {""}, {""}, {""}, {""}, {""},
#line 1438 "entities.gperf"
      {"minusb;", "\\u229F"
},
      {""}, {""}, {""}, {""}, {""},
#line 1730 "entities.gperf"
      {"precnapprox;", "\\u2AB9"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1627 "entities.gperf"
      {"ocy;", "\\u043E"
},
#line 1243 "entities.gperf"
      {"jmath;", "\\u0237"
},
#line 1905 "entities.gperf"
      {"sigmaf;", "\\u03C2"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1699 "entities.gperf"
      {"pi;", "\\u03C0"
},
      {""}, {""}, {""},
#line 2149 "entities.gperf"
      {"varsupsetneq;", "\\u228B\\uFE00"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 657 "entities.gperf"
      {"alefsym;", "\\u2135"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1739 "entities.gperf"
      {"prod;", "\\u220F"
},
      {""},
#line 1917 "entities.gperf"
      {"simrarr;", "\\u2972"
},
      {""},
#line 1701 "entities.gperf"
      {"piv;", "\\u03D6"
},
      {""},
#line 242 "entities.gperf"
      {"Jukcy;", "\\u0404"
},
      {""}, {""}, {""}, {""}, {""},
#line 357 "entities.gperf"
      {"NotLessEqual;", "\\u2270"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 385 "entities.gperf"
      {"NotTildeFullEqual;", "\\u2247"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 341 "entities.gperf"
      {"NotEqual;", "\\u2260"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1351 "entities.gperf"
      {"lmoustache;", "\\u23B0"
},
#line 323 "entities.gperf"
      {"Ncedil;", "\\u0145"
},
      {""},
#line 1219 "entities.gperf"
      {"intlarhk;", "\\u2A17"
},
      {""}, {""},
#line 492 "entities.gperf"
      {"SOFTcy;", "\\u042C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1963 "entities.gperf"
      {"subdot;", "\\u2ABD"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 712 "entities.gperf"
      {"backprime;", "\\u2035"
},
      {""}, {""}, {""}, {""}, {""},
#line 659 "entities.gperf"
      {"alpha;", "\\u03B1"
},
      {""},
#line 164 "entities.gperf"
      {"ExponentialE;", "\\u2147"
},
      {""}, {""},
#line 2155 "entities.gperf"
      {"vdash;", "\\u22A2"
},
      {""}, {""}, {""}, {""},
#line 1809 "entities.gperf"
      {"realine;", "\\u211B"
},
      {""}, {""}, {""}, {""}, {""},
#line 1334 "entities.gperf"
      {"lfisht;", "\\u297C"
},
#line 1544 "entities.gperf"
      {"notnivc;", "\\u22FD"
},
      {""}, {""}, {""},
#line 188 "entities.gperf"
      {"GreaterFullEqual;", "\\u2267"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 233 "entities.gperf"
      {"Iukcy;", "\\u0406"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 123 "entities.gperf"
      {"DownLeftRightVector;", "\\u2950"
},
      {""}, {""}, {""}, {""},
#line 1208 "entities.gperf"
      {"imof;", "\\u22B7"
},
#line 1309 "entities.gperf"
      {"leftharpoondown;", "\\u21BD"
},
#line 943 "entities.gperf"
      {"dfisht;", "\\u297F"
},
      {""}, {""}, {""}, {""}, {""},
#line 331 "entities.gperf"
      {"NewLine;", "\\x0A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2081 "entities.gperf"
      {"uArr;", "\\u21D1"
},
      {""},
#line 1207 "entities.gperf"
      {"imath;", "\\u0131"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 635 "entities.gperf"
      {"ZeroWidthSpace;", "\\u200B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 740 "entities.gperf"
      {"bigtriangledown;", "\\u25BD"
},
      {""},
#line 1844 "entities.gperf"
      {"ropf;", "\\U0001D563"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 297 "entities.gperf"
      {"Lmidot;", "\\u013F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1417 "entities.gperf"
      {"maltese;", "\\u2720"
},
      {""}, {""}, {""},
#line 519 "entities.gperf"
      {"SubsetEqual;", "\\u2286"
},
#line 2112 "entities.gperf"
      {"upharpoonleft;", "\\u21BF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 339 "entities.gperf"
      {"NotDoubleVerticalBar;", "\\u2226"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1415 "entities.gperf"
      {"male;", "\\u2642"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 2150 "entities.gperf"
      {"varsupsetneqq;", "\\u2ACC\\uFE00"
},
      {""}, {""},
#line 2047 "entities.gperf"
      {"timesb;", "\\u22A0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2116 "entities.gperf"
      {"upsih;", "\\u03D2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1531 "entities.gperf"
      {"nmid;", "\\u2224"
},
      {""}, {""},
#line 186 "entities.gperf"
      {"GreaterEqual;", "\\u2265"
},
      {""}, {""},
#line 402 "entities.gperf"
      {"Omacr;", "\\u014C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1543 "entities.gperf"
      {"notnivb;", "\\u22FE"
},
#line 2048 "entities.gperf"
      {"timesbar;", "\\u2A31"
},
      {""}, {""}, {""},
#line 1790 "entities.gperf"
      {"rationals;", "\\u211A"
},
      {""}, {""}, {""}, {""},
#line 1666 "entities.gperf"
      {"origof;", "\\u22B6"
},
#line 326 "entities.gperf"
      {"NegativeThickSpace;", "\\u200B"
},
      {""}, {""},
#line 1769 "entities.gperf"
      {"raemptyv;", "\\u29B3"
},
#line 1770 "entities.gperf"
      {"rang;", "\\u27E9"
},
      {""}, {""}, {""},
#line 601 "entities.gperf"
      {"VerticalBar;", "\\u2223"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 2113 "entities.gperf"
      {"upharpoonright;", "\\u21BE"
},
      {""}, {""}, {""}, {""}, {""},
#line 1781 "entities.gperf"
      {"rarrfs;", "\\u291E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1849 "entities.gperf"
      {"rppolint;", "\\u2A12"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 538 "entities.gperf"
      {"Tcedil;", "\\u0162"
},
      {""}, {""}, {""},
#line 790 "entities.gperf"
      {"boxhD;", "\\u2565"
},
      {""},
#line 1573 "entities.gperf"
      {"nsqsube;", "\\u22E2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2103 "entities.gperf"
      {"ulcrop;", "\\u230F"
},
      {""}, {""}, {""}, {""},
#line 2152 "entities.gperf"
      {"vartriangleleft;", "\\u22B2"
},
#line 1646 "entities.gperf"
      {"oline;", "\\u203E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 593 "entities.gperf"
      {"VDash;", "\\u22AB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2101 "entities.gperf"
      {"ulcorn;", "\\u231C"
},
      {""},
#line 1998 "entities.gperf"
      {"supdsub;", "\\u2AD8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 2109 "entities.gperf"
      {"uopf;", "\\U0001D566"
},
      {""}, {""},
#line 1249 "entities.gperf"
      {"kappav;", "\\u03F0"
},
#line 1966 "entities.gperf"
      {"submult;", "\\u2AC1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 464 "entities.gperf"
      {"RightArrowLeftArrow;", "\\u21C4"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1492 "entities.gperf"
      {"nequiv;", "\\u2262"
},
      {""}, {""},
#line 913 "entities.gperf"
      {"curlyvee;", "\\u22CE"
},
#line 1871 "entities.gperf"
      {"sccue;", "\\u227D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1971 "entities.gperf"
      {"subset;", "\\u2282"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1644 "entities.gperf"
      {"olcir;", "\\u29BE"
},
#line 222 "entities.gperf"
      {"Implies;", "\\u21D2"
},
      {""},
#line 269 "entities.gperf"
      {"LeftDownVector;", "\\u21C3"
},
      {""}, {""},
#line 270 "entities.gperf"
      {"LeftDownVectorBar;", "\\u2959"
},
#line 751 "entities.gperf"
      {"blacktriangleright;", "\\u25B8"
},
#line 1788 "entities.gperf"
      {"ratail;", "\\u291A"
},
      {""},
#line 1981 "entities.gperf"
      {"succcurlyeq;", "\\u227D"
},
      {""}, {""}, {""},
#line 1653 "entities.gperf"
      {"oopf;", "\\U0001D560"
},
#line 266 "entities.gperf"
      {"LeftCeiling;", "\\u2308"
},
      {""},
#line 1772 "entities.gperf"
      {"range;", "\\u29A5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1816 "entities.gperf"
      {"rfloor;", "\\u230B"
},
      {""}, {""},
#line 602 "entities.gperf"
      {"VerticalLine;", "|"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1929 "entities.gperf"
      {"solb;", "\\u29C4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1485 "entities.gperf"
      {"ndash;", "\\u2013"
},
#line 1559 "entities.gperf"
      {"nrightarrow;", "\\u219B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1616 "entities.gperf"
      {"nwarhk;", "\\u2923"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 387 "entities.gperf"
      {"NotVerticalBar;", "\\u2224"
},
#line 296 "entities.gperf"
      {"Lleftarrow;", "\\u21DA"
},
      {""}, {""}, {""}, {""}, {""},
#line 2030 "entities.gperf"
      {"telrec;", "\\u2315"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2093 "entities.gperf"
      {"udhar;", "\\u296E"
},
      {""}, {""},
#line 1691 "entities.gperf"
      {"permil;", "\\u2030"
},
      {""}, {""}, {""},
#line 398 "entities.gperf"
      {"Odblac;", "\\u0150"
},
      {""}, {""}, {""}, {""}, {""},
#line 35 "entities.gperf"
      {"Barwed;", "\\u2306"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1919 "entities.gperf"
      {"smallsetminus;", "\\u2216"
},
#line 1925 "entities.gperf"
      {"smte;", "\\u2AAC"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 377 "entities.gperf"
      {"NotSucceeds;", "\\u2281"
},
      {""}, {""}, {""}, {""},
#line 1016 "entities.gperf"
      {"empty;", "\\u2205"
},
      {""}, {""}, {""}, {""}, {""},
#line 200 "entities.gperf"
      {"HilbertSpace;", "\\u210B"
},
#line 1206 "entities.gperf"
      {"imagpart;", "\\u2111"
},
      {""}, {""},
#line 1724 "entities.gperf"
      {"prcue;", "\\u227C"
},
#line 2102 "entities.gperf"
      {"ulcorner;", "\\u231C"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1688 "entities.gperf"
      {"pcy;", "\\u043F"
},
      {""}, {""},
#line 131 "entities.gperf"
      {"DownTeeArrow;", "\\u21A7"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1911 "entities.gperf"
      {"simg;", "\\u2A9E"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 486 "entities.gperf"
      {"Rrightarrow;", "\\u21DB"
},
      {""},
#line 1450 "entities.gperf"
      {"multimap;", "\\u22B8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 457 "entities.gperf"
      {"ReverseEquilibrium;", "\\u21CB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 744 "entities.gperf"
      {"bigwedge;", "\\u22C0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 246 "entities.gperf"
      {"Kcedil;", "\\u0136"
},
#line 1607 "entities.gperf"
      {"nvinfin;", "\\u29DE"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 748 "entities.gperf"
      {"blacktriangle;", "\\u25B4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1972 "entities.gperf"
      {"subseteq;", "\\u2286"
},
#line 1973 "entities.gperf"
      {"subseteqq;", "\\u2AC5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1645 "entities.gperf"
      {"olcross;", "\\u29BB"
},
      {""}, {""},
#line 187 "entities.gperf"
      {"GreaterEqualLess;", "\\u22DB"
},
      {""}, {""},
#line 2105 "entities.gperf"
      {"umacr;", "\\u016B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1865 "entities.gperf"
      {"sacute;", "\\u015B"
},
      {""}, {""},
#line 1662 "entities.gperf"
      {"ordf", "\\xAA"
},
#line 1663 "entities.gperf"
      {"ordf;", "\\xAA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 114 "entities.gperf"
      {"DoubleRightArrow;", "\\u21D2"
},
      {""}, {""}, {""},
#line 1923 "entities.gperf"
      {"smile;", "\\u2323"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1926 "entities.gperf"
      {"smtes;", "\\u2AAC\\uFE00"
},
#line 1648 "entities.gperf"
      {"omacr;", "\\u014D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1908 "entities.gperf"
      {"simdot;", "\\u2A6A"
},
      {""}, {""}, {""},
#line 64 "entities.gperf"
      {"CirclePlus;", "\\u2295"
},
      {""}, {""}, {""},
#line 1794 "entities.gperf"
      {"rbrack;", "]"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1520 "entities.gperf"
      {"nleftarrow;", "\\u219A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 65 "entities.gperf"
      {"CircleTimes;", "\\u2297"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 578 "entities.gperf"
      {"UpDownArrow;", "\\u2195"
},
      {""},
#line 1771 "entities.gperf"
      {"rangd;", "\\u2992"
},
      {""}, {""}, {""}, {""}, {""},
#line 1017 "entities.gperf"
      {"emptyset;", "\\u2205"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 53 "entities.gperf"
      {"Ccedil", "\\xC7"
},
#line 54 "entities.gperf"
      {"Ccedil;", "\\xC7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1912 "entities.gperf"
      {"simgE;", "\\u2AA0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 19 "entities.gperf"
      {"Alpha;", "\\u0391"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 393 "entities.gperf"
      {"Oacute", "\\xD3"
},
#line 394 "entities.gperf"
      {"Oacute;", "\\xD3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1488 "entities.gperf"
      {"nearhk;", "\\u2924"
},
      {""},
#line 127 "entities.gperf"
      {"DownRightTeeVector;", "\\u295F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1693 "entities.gperf"
      {"pertenk;", "\\u2031"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 2147 "entities.gperf"
      {"varsubsetneq;", "\\u228A\\uFE00"
},
      {""}, {""},
#line 1521 "entities.gperf"
      {"nleftrightarrow;", "\\u21AE"
},
#line 2141 "entities.gperf"
      {"varphi;", "\\u03D5"
},
#line 1728 "entities.gperf"
      {"preccurlyeq;", "\\u227C"
},
      {""},
#line 1773 "entities.gperf"
      {"rangle;", "\\u27E9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1974 "entities.gperf"
      {"subsetneq;", "\\u228A"
},
#line 1975 "entities.gperf"
      {"subsetneqq;", "\\u2ACB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2092 "entities.gperf"
      {"udblac;", "\\u0171"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 471 "entities.gperf"
      {"RightTee;", "\\u22A2"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 202 "entities.gperf"
      {"HorizontalLine;", "\\u2500"
},
#line 2013 "entities.gperf"
      {"supsim;", "\\u2AC8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 473 "entities.gperf"
      {"RightTeeVector;", "\\u295B"
},
      {""}, {""}, {""}, {""},
#line 1933 "entities.gperf"
      {"spadesuit;", "\\u2660"
},
      {""}, {""}, {""}, {""},
#line 1158 "entities.gperf"
      {"half;", "\\xBD"
},
      {""}, {""}, {""},
#line 1878 "entities.gperf"
      {"scpolint;", "\\u2A13"
},
      {""}, {""}, {""}, {""}, {""},
#line 1962 "entities.gperf"
      {"subE;", "\\u2AC5"
},
      {""},
#line 1200 "entities.gperf"
      {"iinfin;", "\\u29DC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1629 "entities.gperf"
      {"odblac;", "\\u0151"
},
      {""}, {""}, {""},
#line 974 "entities.gperf"
      {"downharpoonright;", "\\u21C2"
},
      {""}, {""}, {""},
#line 1718 "entities.gperf"
      {"popf;", "\\U0001D561"
},
      {""}, {""}, {""}, {""}, {""},
#line 2015 "entities.gperf"
      {"supsup;", "\\u2AD6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 418 "entities.gperf"
      {"OverBrace;", "\\u23DE"
},
      {""}, {""}, {""}, {""}, {""},
#line 2086 "entities.gperf"
      {"ubrcy;", "\\u045E"
},
#line 1279 "entities.gperf"
      {"larrhk;", "\\u21A9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 483 "entities.gperf"
      {"Rightarrow;", "\\u21D2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 1875 "entities.gperf"
      {"scnE;", "\\u2AB6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 124 "entities.gperf"
      {"DownLeftTeeVector;", "\\u295E"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 62 "entities.gperf"
      {"CircleDot;", "\\u2299"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 596 "entities.gperf"
      {"Vdash;", "\\u22A9"
},
      {""}, {""},
#line 1716 "entities.gperf"
      {"pm;", "\\xB1"
},
      {""}, {""},
#line 1460 "entities.gperf"
      {"nRightarrow;", "\\u21CF"
},
      {""}, {""}, {""}, {""}, {""},
#line 1832 "entities.gperf"
      {"ring;", "\\u02DA"
},
      {""},
#line 1767 "entities.gperf"
      {"racute;", "\\u0155"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 597 "entities.gperf"
      {"Vdashl;", "\\u2AE6"
},
#line 1611 "entities.gperf"
      {"nvltrie;", "\\u22B4\\u20D2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 479 "entities.gperf"
      {"RightUpVector;", "\\u21BE"
},
#line 6 "entities.gperf"
      {"AElig", "\\xC6"
},
#line 7 "entities.gperf"
      {"AElig;", "\\xC6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2148 "entities.gperf"
      {"varsubsetneqq;", "\\u2ACB\\uFE00"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2078 "entities.gperf"
      {"twixt;", "\\u226C"
},
#line 1986 "entities.gperf"
      {"succsim;", "\\u227F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 410 "entities.gperf"
      {"Oslash", "\\xD8"
},
#line 411 "entities.gperf"
      {"Oslash;", "\\xD8"
},
      {""}, {""}, {""}, {""}, {""},
#line 1807 "entities.gperf"
      {"rdsh;", "\\u21B3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 505 "entities.gperf"
      {"SmallCircle;", "\\u2218"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 463 "entities.gperf"
      {"RightArrowBar;", "\\u21E5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 38 "entities.gperf"
      {"Bernoullis;", "\\u212C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 604 "entities.gperf"
      {"VerticalTilde;", "\\u2240"
},
      {""}, {""}, {""}, {""},
#line 342 "entities.gperf"
      {"NotEqualTilde;", "\\u2242\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 382 "entities.gperf"
      {"NotSupersetEqual;", "\\u2289"
},
      {""}, {""}, {""},
#line 1736 "entities.gperf"
      {"prnE;", "\\u2AB5"
},
      {""}, {""},
#line 1835 "entities.gperf"
      {"rlhar;", "\\u21CC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1062 "entities.gperf"
      {"ffllig;", "\\uFB04"
},
#line 2020 "entities.gperf"
      {"swnwar;", "\\u292A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2038 "entities.gperf"
      {"thicksim;", "\\u223C"
},
      {""}, {""}, {""},
#line 2080 "entities.gperf"
      {"twoheadrightarrow;", "\\u21A0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2104 "entities.gperf"
      {"ultri;", "\\u25F8"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 419 "entities.gperf"
      {"OverBracket;", "\\u23B4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1303 "entities.gperf"
      {"ldrdhar;", "\\u2967"
},
      {""}, {""},
#line 1426 "entities.gperf"
      {"mdash;", "\\u2014"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1172 "entities.gperf"
      {"hkswarow;", "\\u2926"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 128 "entities.gperf"
      {"DownRightVector;", "\\u21C1"
},
      {""},
#line 404 "entities.gperf"
      {"Omicron;", "\\u039F"
},
#line 129 "entities.gperf"
      {"DownRightVectorBar;", "\\u2957"
},
#line 2083 "entities.gperf"
      {"uacute", "\\xFA"
},
#line 2084 "entities.gperf"
      {"uacute;", "\\xFA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 472 "entities.gperf"
      {"RightTeeArrow;", "\\u21A6"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 417 "entities.gperf"
      {"OverBar;", "\\u203E"
},
#line 1473 "entities.gperf"
      {"naturals;", "\\u2115"
},
      {""}, {""},
#line 1250 "entities.gperf"
      {"kcedil;", "\\u0137"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 478 "entities.gperf"
      {"RightUpTeeVector;", "\\u295C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 749 "entities.gperf"
      {"blacktriangledown;", "\\u25BE"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 343 "entities.gperf"
      {"NotExists;", "\\u2204"
},
#line 208 "entities.gperf"
      {"IJlig;", "\\u0132"
},
#line 290 "entities.gperf"
      {"LessGreater;", "\\u2276"
},
      {""}, {""}, {""}, {""},
#line 1621 "entities.gperf"
      {"oacute", "\\xF3"
},
#line 1622 "entities.gperf"
      {"oacute;", "\\xF3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1742 "entities.gperf"
      {"profsurf;", "\\u2313"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1686 "entities.gperf"
      {"parsl;", "\\u2AFD"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 262 "entities.gperf"
      {"LeftAngleBracket;", "\\u27E8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1930 "entities.gperf"
      {"solbar;", "\\u233F"
},
      {""}, {""}, {""}, {""},
#line 63 "entities.gperf"
      {"CircleMinus;", "\\u2296"
},
      {""}, {""}, {""}, {""},
#line 76 "entities.gperf"
      {"CounterClockwiseContourIntegral;", "\\u2233"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2002 "entities.gperf"
      {"suphsub;", "\\u2AD7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 868 "entities.gperf"
      {"cirscir;", "\\u29C2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1472 "entities.gperf"
      {"natural;", "\\u266E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 95 "entities.gperf"
      {"DiacriticalDot;", "\\u02D9"
},
      {""}, {""}, {""}, {""}, {""},
#line 221 "entities.gperf"
      {"ImaginaryI;", "\\u2148"
},
      {""}, {""}, {""}, {""},
#line 576 "entities.gperf"
      {"UpArrowBar;", "\\u2912"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 379 "entities.gperf"
      {"NotSucceedsSlantEqual;", "\\u22E1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1891 "entities.gperf"
      {"seswar;", "\\u2929"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 407 "entities.gperf"
      {"OpenCurlyQuote;", "\\u2018"
},
      {""}, {""},
#line 2056 "entities.gperf"
      {"topfork;", "\\u2ADA"
},
      {""}, {""},
#line 420 "entities.gperf"
      {"OverParenthesis;", "\\u23DC"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 96 "entities.gperf"
      {"DiacriticalDoubleAcute;", "\\u02DD"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1785 "entities.gperf"
      {"rarrsim;", "\\u2974"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2027 "entities.gperf"
      {"tcedil;", "\\u0163"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1833 "entities.gperf"
      {"risingdotseq;", "\\u2253"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1633 "entities.gperf"
      {"oelig;", "\\u0153"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 316 "entities.gperf"
      {"MinusPlus;", "\\u2213"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1898 "entities.gperf"
      {"shchcy;", "\\u0449"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1684 "entities.gperf"
      {"parallel;", "\\u2225"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 461 "entities.gperf"
      {"RightAngleBracket;", "\\u27E9"
},
      {""}, {""}, {""},
#line 1671 "entities.gperf"
      {"oslash", "\\xF8"
},
#line 1672 "entities.gperf"
      {"oslash;", "\\xF8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1733 "entities.gperf"
      {"precsim;", "\\u227E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1567 "entities.gperf"
      {"nshortparallel;", "\\u2226"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 577 "entities.gperf"
      {"UpArrowDownArrow;", "\\u21C5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1985 "entities.gperf"
      {"succnsim;", "\\u22E9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1650 "entities.gperf"
      {"omicron;", "\\u03BF"
},
      {""}, {""}, {""}, {""},
#line 866 "entities.gperf"
      {"cirfnint;", "\\u2A10"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 376 "entities.gperf"
      {"NotSubsetEqual;", "\\u2288"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2021 "entities.gperf"
      {"szlig", "\\xDF"
},
#line 2022 "entities.gperf"
      {"szlig;", "\\xDF"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1906 "entities.gperf"
      {"sigmav;", "\\u03C2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1740 "entities.gperf"
      {"profalar;", "\\u232E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1717 "entities.gperf"
      {"pointint;", "\\u2A15"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1873 "entities.gperf"
      {"scedil;", "\\u015F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 299 "entities.gperf"
      {"LongLeftRightArrow;", "\\u27F7"
},
      {""}, {""}, {""}, {""}, {""},
#line 1837 "entities.gperf"
      {"rmoust;", "\\u23B1"
},
      {""},
#line 2076 "entities.gperf"
      {"tshcy;", "\\u045B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2114 "entities.gperf"
      {"uplus;", "\\u228E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1763 "entities.gperf"
      {"rAtail;", "\\u291C"
},
      {""},
#line 2014 "entities.gperf"
      {"supsub;", "\\u2AD4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1057 "entities.gperf"
      {"fallingdotseq;", "\\u2252"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 50 "entities.gperf"
      {"CapitalDifferentialD;", "\\u2145"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1656 "entities.gperf"
      {"oplus;", "\\u2295"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 268 "entities.gperf"
      {"LeftDownTeeVector;", "\\u2961"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1976 "entities.gperf"
      {"subsim;", "\\u2AC7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 545 "entities.gperf"
      {"Tilde;", "\\u223C"
},
      {""},
#line 603 "entities.gperf"
      {"VerticalSeparator;", "\\u2758"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1421 "entities.gperf"
      {"mapstoleft;", "\\u21A4"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 477 "entities.gperf"
      {"RightUpDownVector;", "\\u294F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 1978 "entities.gperf"
      {"subsup;", "\\u2AD3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1877 "entities.gperf"
      {"scnsim;", "\\u22E9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1704 "entities.gperf"
      {"plankv;", "\\u210F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2035 "entities.gperf"
      {"thetasym;", "\\u03D1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 100 "entities.gperf"
      {"DifferentialD;", "\\u2146"
},
      {""},
#line 351 "entities.gperf"
      {"NotHumpDownHump;", "\\u224E\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2146 "entities.gperf"
      {"varsigma;", "\\u03C2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1705 "entities.gperf"
      {"plus;", "+"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1712 "entities.gperf"
      {"plusmn", "\\xB1"
},
#line 1713 "entities.gperf"
      {"plusmn;", "\\xB1"
},
      {""},
#line 1732 "entities.gperf"
      {"precnsim;", "\\u22E8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 750 "entities.gperf"
      {"blacktriangleleft;", "\\u25C2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1738 "entities.gperf"
      {"prnsim;", "\\u22E8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1799 "entities.gperf"
      {"rcedil;", "\\u0157"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1922 "entities.gperf"
      {"smid;", "\\u2223"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 467 "entities.gperf"
      {"RightDownTeeVector;", "\\u295D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1711 "entities.gperf"
      {"pluse;", "\\u2A72"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1715 "entities.gperf"
      {"plustwo;", "\\u2A27"
},
      {""}, {""}, {""}, {""},
#line 1830 "entities.gperf"
      {"rightsquigarrow;", "\\u219D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 421 "entities.gperf"
      {"PartialD;", "\\u2202"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 68 "entities.gperf"
      {"CloseCurlyQuote;", "\\u2019"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 973 "entities.gperf"
      {"downharpoonleft;", "\\u21C3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 2041 "entities.gperf"
      {"thksim;", "\\u223C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1018 "entities.gperf"
      {"emptyv;", "\\u2205"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 2017 "entities.gperf"
      {"swarhk;", "\\u2926"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 334 "entities.gperf"
      {"NonBreakingSpace;", "\\xA0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 67 "entities.gperf"
      {"CloseCurlyDoubleQuote;", "\\u201D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1707 "entities.gperf"
      {"plusb;", "\\u229E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1205 "entities.gperf"
      {"imagline;", "\\u2110"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 368 "entities.gperf"
      {"NotRightTriangle;", "\\u22EB"
},
      {""}, {""},
#line 369 "entities.gperf"
      {"NotRightTriangleBar;", "\\u29D0\\u0338"
},
      {""},
#line 370 "entities.gperf"
      {"NotRightTriangleEqual;", "\\u22ED"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 2060 "entities.gperf"
      {"triangle;", "\\u25B5"
},
#line 2064 "entities.gperf"
      {"triangleq;", "\\u225C"
},
      {""}, {""},
#line 2062 "entities.gperf"
      {"triangleleft;", "\\u25C3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 2061 "entities.gperf"
      {"triangledown;", "\\u25BF"
},
#line 1827 "entities.gperf"
      {"rightleftarrows;", "\\u21C4"
},
      {""}, {""},
#line 481 "entities.gperf"
      {"RightVector;", "\\u21C0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2063 "entities.gperf"
      {"trianglelefteq;", "\\u22B4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 468 "entities.gperf"
      {"RightDownVector;", "\\u21C2"
},
      {""}, {""},
#line 469 "entities.gperf"
      {"RightDownVectorBar;", "\\u2955"
},
      {""}, {""}, {""},
#line 1710 "entities.gperf"
      {"plusdu;", "\\u2A25"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 378 "entities.gperf"
      {"NotSucceedsEqual;", "\\u2AB0\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1709 "entities.gperf"
      {"plusdo;", "\\u2214"
},
      {""}, {""}, {""}, {""},
#line 367 "entities.gperf"
      {"NotReverseElement;", "\\u220C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 380 "entities.gperf"
      {"NotSucceedsTilde;", "\\u227F\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1828 "entities.gperf"
      {"rightleftharpoons;", "\\u21CC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1921 "entities.gperf"
      {"smeparsl;", "\\u29E4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 406 "entities.gperf"
      {"OpenCurlyDoubleQuote;", "\\u201C"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 1959 "entities.gperf"
      {"straightphi;", "\\u03D5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1885 "entities.gperf"
      {"searhk;", "\\u2925"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1826 "entities.gperf"
      {"rightharpoonup;", "\\u21C0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1651 "entities.gperf"
      {"omid;", "\\u29B6"
},
      {""}, {""}, {""}, {""},
#line 403 "entities.gperf"
      {"Omega;", "\\u03A9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1977 "entities.gperf"
      {"subsub;", "\\u2AD5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 352 "entities.gperf"
      {"NotHumpEqual;", "\\u224F\\u0338"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1838 "entities.gperf"
      {"rmoustache;", "\\u23B1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 1700 "entities.gperf"
      {"pitchfork;", "\\u22D4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2065 "entities.gperf"
      {"triangleright;", "\\u25B9"
},
      {""}, {""}, {""}, {""}, {""},
#line 1815 "entities.gperf"
      {"rfisht;", "\\u297D"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1825 "entities.gperf"
      {"rightharpoondown;", "\\u21C1"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 392 "entities.gperf"
      {"OElig;", "\\u0152"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 289 "entities.gperf"
      {"LessFullEqual;", "\\u2266"
},
      {""},
#line 470 "entities.gperf"
      {"RightFloor;", "\\u230B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 1685 "entities.gperf"
      {"parsim;", "\\u2AF3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1628 "entities.gperf"
      {"odash;", "\\u229D"
},
      {""}, {""}, {""}, {""}, {""},
#line 1702 "entities.gperf"
      {"planck;", "\\u210F"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2066 "entities.gperf"
      {"trianglerighteq;", "\\u22B5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 2094 "entities.gperf"
      {"ufisht;", "\\u297E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2001 "entities.gperf"
      {"suphsol;", "\\u27C9"
},
      {""}, {""}, {""}, {""}, {""},
#line 1427 "entities.gperf"
      {"measuredangle;", "\\u2221"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2044 "entities.gperf"
      {"tilde;", "\\u02DC"
},
      {""},
#line 1652 "entities.gperf"
      {"ominus;", "\\u2296"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 2106 "entities.gperf"
      {"uml", "\\xA8"
},
      {""}, {""}, {""}, {""}, {""},
#line 2107 "entities.gperf"
      {"uml;", "\\xA8"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 150 "entities.gperf"
      {"EmptySmallSquare;", "\\u25FB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 480 "entities.gperf"
      {"RightUpVectorBar;", "\\u2954"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 167 "entities.gperf"
      {"FilledSmallSquare;", "\\u25FC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1823 "entities.gperf"
      {"rightarrow;", "\\u2192"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1649 "entities.gperf"
      {"omega;", "\\u03C9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 2174 "entities.gperf"
      {"vzigzag;", "\\u299A"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1829 "entities.gperf"
      {"rightrightarrows;", "\\u21C9"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 227 "entities.gperf"
      {"InvisibleTimes;", "\\u2062"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 325 "entities.gperf"
      {"NegativeMediumSpace;", "\\u200B"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 426 "entities.gperf"
      {"PlusMinus;", "\\xB1"
},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 98 "entities.gperf"
      {"DiacriticalTilde;", "\\u02DC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 94 "entities.gperf"
      {"DiacriticalAcute;", "\\xB4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 293 "entities.gperf"
      {"LessTilde;", "\\u2272"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 1782 "entities.gperf"
      {"rarrhk;", "\\u21AA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2079 "entities.gperf"
      {"twoheadleftarrow;", "\\u219E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1741 "entities.gperf"
      {"profline;", "\\u2312"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1706 "entities.gperf"
      {"plusacir;", "\\u2A23"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 474 "entities.gperf"
      {"RightTriangle;", "\\u22B3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1920 "entities.gperf"
      {"smashp;", "\\u2A33"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 226 "entities.gperf"
      {"InvisibleComma;", "\\u2063"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1958 "entities.gperf"
      {"straightepsilon;", "\\u03F5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 465 "entities.gperf"
      {"RightCeiling;", "\\u2309"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""},
#line 546 "entities.gperf"
      {"TildeEqual;", "\\u2243"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 482 "entities.gperf"
      {"RightVectorBar;", "\\u2953"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 548 "entities.gperf"
      {"TildeTilde;", "\\u2248"
},
      {""}, {""},
#line 466 "entities.gperf"
      {"RightDoubleBracket;", "\\u27E7"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 97 "entities.gperf"
      {"DiacriticalGrave;", "`"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 168 "entities.gperf"
      {"FilledVerySmallSquare;", "\\u25AA"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 1703 "entities.gperf"
      {"planckh;", "\\u210E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 1714 "entities.gperf"
      {"plussim;", "\\u2A26"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1708 "entities.gperf"
      {"pluscir;", "\\u2A22"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 151 "entities.gperf"
      {"EmptyVerySmallSquare;", "\\u25AB"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1863 "entities.gperf"
      {"ruluhar;", "\\u2968"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 579 "entities.gperf"
      {"UpEquilibrium;", "\\u296E"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 489 "entities.gperf"
      {"RuleDelayed;", "\\u29F4"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""},
#line 547 "entities.gperf"
      {"TildeFullEqual;", "\\u2245"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 1824 "entities.gperf"
      {"rightarrowtail;", "\\u21A3"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 476 "entities.gperf"
      {"RightTriangleEqual;", "\\u22B5"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""},
#line 1831 "entities.gperf"
      {"rightthreetimes;", "\\u22CC"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 475 "entities.gperf"
      {"RightTriangleBar;", "\\u29D0"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""},
#line 2073 "entities.gperf"
      {"trpezium;", "\\u23E2"
},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 1804 "entities.gperf"
      {"rdldhar;", "\\u2969"
}
    };

    if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
        register unsigned int key = hash(str, len);

        if (key <= MAX_HASH_VALUE)
        {
            register const char* s = wordlist[key].name;

            if (*str == *s && !strcmp(str + 1, s + 1))
                return &wordlist[key];
        }
    }
    return 0;
}
#line 2237 "entities.gperf"

