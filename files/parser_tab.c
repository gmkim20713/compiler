
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TERROR	258
#define	TCOMMENT	259
#define	TIDENT	260
#define	TNUMBER	261
#define	TCONST	262
#define	TELSE	263
#define	TIF	264
#define	TEIF	265
#define	TINT	266
#define	TRETURN	267
#define	TVOID	268
#define	TWHILE	269
#define	TASSIGN	270
#define	TADDASSIGN	271
#define	TSUBASSIGN	272
#define	TMULASSIGN	273
#define	TDIVASSIGN	274
#define	TMODASSIGN	275
#define	TOR	276
#define	TAND	277
#define	TEQUAL	278
#define	TNOTEQU	279
#define	TGREAT	280
#define	TLESS	281
#define	TGREATE	282
#define	TLESSE	283
#define	TINC	284
#define	TDEC	285
#define	TADD	286
#define	TSUB	287
#define	TMUL	288
#define	TDIV	289
#define	TMOD	290
#define	TNOT	291
#define	TLPAREN	292
#define	TRPAREN	293
#define	TLBRACE	294
#define	TRBRACE	295
#define	TLBRACKET	296
#define	TRBRACKET	297
#define	TCOMMA	298
#define	TSEMICOLON	299
#define	TFLOAT	300
#define	TDECIMAL	301
#define	LOWER_THAN_ELSE	302

#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "sym_table_lab.h"

char *prev_yytext;
char tmp_name[MAX_STRING_LENGTH];
char tmp_type[MAX_STRING_LENGTH];
char function_name[MAX_STRING_LENGTH];
char function_type[MAX_STRING_LENGTH];

/*yacc source for Mini C */
void semantic(int);
extern int check_sym_table(char* name, char* block);
extern char *yytext;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		176
#define	YYFLAG		-32768
#define	YYNTBASE	48

#define YYTRANSLATE(x) ((unsigned)(x) <= 302 ? yytranslate[x] : 93)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    26,    30,    32,    34,    37,    39,    41,    43,    45,    47,
    49,    51,    55,    58,    60,    61,    63,    67,    70,    73,
    78,    83,    85,    86,    88,    91,    95,    99,   101,   105,
   108,   110,   114,   118,   120,   125,   130,   132,   133,   135,
   136,   138,   141,   143,   145,   147,   149,   151,   154,   157,
   159,   160,   166,   174,   180,   186,   191,   195,   199,   201,
   203,   207,   211,   215,   219,   223,   227,   229,   233,   235,
   239,   241,   245,   249,   251,   255,   259,   263,   267,   269,
   273,   277,   279,   283,   287,   291,   293,   296,   299,   302,
   305,   307,   312,   317,   322,   327,   330,   333,   335,   336,
   338,   340,   344,   346,   348,   350,   354
};

static const short yyrhs[] = {    49,
     0,    50,     0,    49,    50,     0,    51,     0,    66,     0,
     5,    44,     0,     5,     1,     0,    52,    63,     0,    52,
    44,     0,    52,     1,     0,    53,    58,    59,     0,    54,
     0,    55,     0,    54,    55,     0,    56,     0,    57,     0,
     7,     0,    11,     0,    45,     0,    13,     0,     5,     0,
    37,    60,    38,     0,    37,    60,     0,    61,     0,     0,
    62,     0,    61,    43,    62,     0,    61,    62,     0,    53,
    69,     0,    39,    64,    71,    40,     0,    39,    64,    71,
     1,     0,    65,     0,     0,    66,     0,    65,    66,     0,
    53,    67,    44,     0,    53,    67,     1,     0,    68,     0,
    67,    43,    68,     0,    67,    68,     0,    69,     0,    69,
    15,     6,     0,    69,    15,    46,     0,     5,     0,     5,
    41,    70,    42,     0,     5,    41,    70,     1,     0,     6,
     0,     0,    72,     0,     0,    73,     0,    72,    73,     0,
    63,     0,    74,     0,    76,     0,    77,     0,    78,     0,
    75,    44,     0,    79,     1,     0,    79,     0,     0,     9,
    37,    79,    38,    73,     0,     9,    37,    79,    38,    73,
     8,    73,     0,    14,    37,    79,    38,    73,     0,    14,
    37,    79,     1,    73,     0,    14,    37,    38,    73,     0,
    12,    75,    44,     0,    12,    75,     1,     0,    80,     0,
    81,     0,    87,    15,    80,     0,    87,    16,    80,     0,
    87,    17,    80,     0,    87,    18,    80,     0,    87,    19,
    80,     0,    87,    20,    80,     0,    82,     0,    81,    21,
    82,     0,    83,     0,    82,    22,    83,     0,    84,     0,
    83,    23,    84,     0,    83,    24,    84,     0,    85,     0,
    84,    25,    85,     0,    84,    26,    85,     0,    84,    27,
    85,     0,    84,    28,    85,     0,    86,     0,    85,    31,
    86,     0,    85,    32,    86,     0,    87,     0,    86,    33,
    87,     0,    86,    34,    87,     0,    86,    35,    87,     0,
    88,     0,    32,    87,     0,    36,    87,     0,    29,    87,
     0,    30,    87,     0,    92,     0,    88,    41,    79,    42,
     0,    88,    41,    79,     1,     0,    88,    37,    89,    38,
     0,    88,    37,    89,     1,     0,    88,    29,     0,    88,
    30,     0,    90,     0,     0,    91,     0,    80,     0,    91,
    43,    80,     0,     5,     0,     6,     0,    46,     0,    37,
    79,    38,     0,    37,    79,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    79,    84,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,   104,   105,   106,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,   122,   124,   125,   126,   127,
   128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   163,   164
};

static const char * const yytname[] = {   "$","error","$undefined.","TERROR",
"TCOMMENT","TIDENT","TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN",
"TVOID","TWHILE","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TOR","TAND","TEQUAL","TNOTEQU","TGREAT","TLESS","TGREATE","TLESSE",
"TINC","TDEC","TADD","TSUB","TMUL","TDIV","TMOD","TNOT","TLPAREN","TRPAREN",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TCOMMA","TSEMICOLON","TFLOAT","TDECIMAL",
"LOWER_THAN_ELSE","mini_c","translation_unit","external_dcl","function_def",
"function_header","dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier",
"type_specifier","function_name","formal_param","opt_formal_param","formal_param_list",
"param_dcl","compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","return_st",
"expression","assignment_exp","logical_or_exp","logical_and_exp","equality_exp",
"relational_exp","additive_exp","multiplicative_exp","unary_exp","postfix_exp",
"opt_actual_param","actual_param","actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    48,    49,    49,    50,    50,    50,    50,    51,    51,    51,
    52,    53,    54,    54,    55,    55,    56,    57,    57,    57,
    58,    59,    59,    60,    60,    61,    61,    61,    62,    63,
    63,    64,    64,    65,    65,    66,    66,    67,    67,    67,
    68,    68,    68,    69,    69,    69,    70,    70,    71,    71,
    72,    72,    73,    73,    73,    73,    73,    74,    74,    75,
    75,    76,    76,    77,    77,    77,    78,    78,    79,    80,
    80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
    83,    83,    83,    84,    84,    84,    84,    84,    85,    85,
    85,    86,    86,    86,    86,    87,    87,    87,    87,    87,
    88,    88,    88,    88,    88,    88,    88,    89,    89,    90,
    91,    91,    92,    92,    92,    92,    92
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     3,     2,     1,     0,     1,     3,     2,     2,     4,
     4,     1,     0,     1,     2,     3,     3,     1,     3,     2,
     1,     3,     3,     1,     4,     4,     1,     0,     1,     0,
     1,     2,     1,     1,     1,     1,     1,     2,     2,     1,
     0,     5,     7,     5,     5,     4,     3,     3,     1,     1,
     3,     3,     3,     3,     3,     3,     1,     3,     1,     3,
     1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
     3,     1,     3,     3,     3,     1,     2,     2,     2,     2,
     1,     4,     4,     4,     4,     2,     2,     1,     0,     1,
     1,     3,     1,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,    17,    18,    20,    19,     1,     2,     4,     0,     0,
    12,    13,    15,    16,     5,     7,     6,     3,    10,    33,
     9,     8,    44,     0,     0,    38,    41,    14,     0,    50,
    32,    34,    48,    25,    11,    37,    44,     0,    36,    40,
     0,   113,   114,     0,    61,     0,     0,     0,     0,     0,
     0,   115,    53,     0,    49,    51,    54,     0,    55,    56,
    57,     0,    69,    70,    77,    79,    81,    84,    89,    92,
    96,   101,    35,    47,     0,     0,    23,    24,    26,    39,
    42,    43,     0,     0,    60,     0,    99,   100,    97,    98,
     0,    31,    30,    52,    58,    59,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   106,   107,   109,     0,    46,
    45,    29,    22,     0,    28,     0,    68,    67,    61,     0,
   117,   116,    78,    92,    80,    82,    83,    85,    86,    87,
    88,    90,    91,    93,    94,    95,    71,    72,    73,    74,
    75,    76,   111,     0,   108,   110,     0,    27,    61,    66,
    61,    61,   105,   104,     0,   103,   102,    62,    65,    64,
   112,    61,    63,     0,     0,     0
};

static const short yydefgoto[] = {   174,
     6,     7,     8,     9,    76,    11,    12,    13,    14,    24,
    35,    77,    78,    79,    53,    30,    31,    15,    25,    26,
    27,    75,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
   154,   155,   156,    72
};

static const short yypact[] = {   123,
     7,-32768,-32768,-32768,-32768,   123,-32768,-32768,     5,    11,
    34,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    34,
-32768,-32768,   -13,   -15,    24,-32768,    16,-32768,    28,    79,
    34,-32768,    29,    34,-32768,-32768,    40,    28,-32768,-32768,
    30,-32768,-32768,     3,    66,    41,    66,    66,    66,    66,
    66,-32768,-32768,    37,    79,-32768,-32768,    48,-32768,-32768,
-32768,    25,-32768,    73,    88,    63,   155,    68,   132,   159,
    60,-32768,-32768,-32768,     8,    28,    67,   128,-32768,-32768,
-32768,-32768,    66,    26,-32768,   126,-32768,-32768,-32768,-32768,
    42,-32768,-32768,-32768,-32768,-32768,    66,    66,    66,    66,
    66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
    66,    66,    66,    66,    66,-32768,-32768,    66,    66,-32768,
-32768,-32768,-32768,    34,-32768,    84,-32768,-32768,   115,    45,
-32768,-32768,    88,-32768,    63,   155,   155,    68,    68,    68,
    68,   132,   132,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    81,-32768,    90,    31,-32768,   115,-32768,
   115,   115,-32768,-32768,    66,-32768,-32768,   118,-32768,-32768,
-32768,   115,-32768,   140,   142,-32768
};

static const short yypgoto[] = {-32768,
-32768,   137,-32768,-32768,    17,-32768,   135,-32768,-32768,-32768,
-32768,-32768,-32768,   -58,   139,-32768,-32768,    -1,-32768,    -4,
    74,-32768,-32768,-32768,   -55,-32768,   104,-32768,-32768,-32768,
   -44,  -100,-32768,    56,    59,    14,    83,    32,   -45,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		187


static const short yytable[] = {    94,
    85,    87,    88,    89,    90,    19,    91,    16,   120,   147,
   148,   149,   150,   151,   152,    23,    10,   153,    32,   125,
    40,    34,    10,   -21,    36,    96,   127,    33,    37,    73,
    41,   166,    37,    80,    74,    81,    29,    92,   126,    83,
     2,   130,   131,    20,     3,   161,     4,    29,    21,   121,
    17,   134,   134,   134,   134,   134,   134,   134,   134,   134,
   134,   144,   145,   146,   171,   158,    38,    39,   -60,   128,
    42,    43,   167,   160,   157,    82,    93,    86,     5,   132,
    33,   163,   162,    42,    43,    99,   100,    44,   116,   117,
    45,    95,    46,    97,    47,    48,   118,    49,   105,   106,
   119,    50,    51,   168,   123,   169,   170,    47,    48,    98,
    49,    52,   136,   137,    50,    51,   173,    20,   164,    42,
    43,   159,   -61,    44,    52,   172,    45,     1,    46,     2,
    42,    43,   165,     3,     2,     4,   142,   143,     3,   175,
     4,   176,    18,    47,    48,    28,    49,    22,    84,   122,
    50,    51,   133,    20,    47,    48,   135,    49,     0,     0,
    52,    50,    51,   129,   107,   108,   109,     5,     0,     0,
   124,    52,     5,   110,   111,   112,   113,   114,   115,   101,
   102,   103,   104,   138,   139,   140,   141
};

static const short yycheck[] = {    55,
    45,    47,    48,    49,    50,     1,    51,     1,     1,   110,
   111,   112,   113,   114,   115,     5,     0,   118,    20,    78,
    25,    37,     6,    37,     1,     1,     1,    41,     5,    31,
    15,     1,     5,    38,     6,     6,    20,     1,    83,    37,
     7,    86,     1,    39,    11,     1,    13,    31,    44,    42,
    44,    97,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   165,   124,    43,    44,    44,    44,
     5,     6,    42,   129,   119,    46,    40,    37,    45,    38,
    41,     1,    38,     5,     6,    23,    24,     9,    29,    30,
    12,    44,    14,    21,    29,    30,    37,    32,    31,    32,
    41,    36,    37,   159,    38,   161,   162,    29,    30,    22,
    32,    46,    99,   100,    36,    37,   172,    39,    38,     5,
     6,    38,    44,     9,    46,     8,    12,     5,    14,     7,
     5,     6,    43,    11,     7,    13,   105,   106,    11,     0,
    13,     0,     6,    29,    30,    11,    32,     9,    45,    76,
    36,    37,    97,    39,    29,    30,    98,    32,    -1,    -1,
    46,    36,    37,    38,    33,    34,    35,    45,    -1,    -1,
    43,    46,    45,    15,    16,    17,    18,    19,    20,    25,
    26,    27,    28,   101,   102,   103,   104
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 30 "parser.y"
{ semantic(1); printf("%s\n", yytext); ;
    break;}
case 2:
#line 31 "parser.y"
{ semantic(2); printf("%s\n", yytext); ;
    break;}
case 3:
#line 32 "parser.y"
{ semantic(3); printf("%s\n", yytext); ;
    break;}
case 4:
#line 33 "parser.y"
{ semantic(4); printf("%s\n", yytext); ;
    break;}
case 5:
#line 34 "parser.y"
{ semantic(5); printf("%s\n", yytext); ;
    break;}
case 7:
#line 36 "parser.y"
{ yyerror("Missing semicolon for external declaration"); ;
    break;}
case 8:
#line 37 "parser.y"
{ strcpy(function_name, ""); semantic(6); printf("%s\n", yytext); ;
    break;}
case 9:
#line 38 "parser.y"
{ strcpy(function_name, ""); semantic(300); printf("%s\n", yytext); ;
    break;}
case 10:
#line 39 "parser.y"
{ yyerror("Missing semicolon for function definition"); ;
    break;}
case 11:
#line 40 "parser.y"
{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(7);
								  }  ;
    break;}
case 12:
#line 45 "parser.y"
{ strcpy(tmp_name, yytext); semantic(8); printf("%s\n", yytext); ;
    break;}
case 13:
#line 46 "parser.y"
{ semantic(9); printf("%s\n", yytext); ;
    break;}
case 14:
#line 47 "parser.y"
{ semantic(10); printf("%s\n", yytext); ;
    break;}
case 15:
#line 48 "parser.y"
{ semantic(11); printf("%s\n", yytext); ;
    break;}
case 16:
#line 49 "parser.y"
{ semantic(12); printf("%s\n", yytext); ;
    break;}
case 17:
#line 50 "parser.y"
{ semantic(13); printf("%s\n", yytext); ;
    break;}
case 18:
#line 51 "parser.y"
{ strcpy(tmp_type, yytext); semantic(14); printf("%s\n", yytext); ;
    break;}
case 19:
#line 52 "parser.y"
{ strcpy(tmp_type, yytext); semantic(100); printf("%s\n", yytext); ;
    break;}
case 20:
#line 53 "parser.y"
{ strcpy(tmp_type, yytext); semantic(15); printf("%s\n", yytext); ;
    break;}
case 21:
#line 54 "parser.y"
{ strcpy(function_name, tmp_name); strcpy(function_type, tmp_type); semantic(16); printf("%s\n", yytext); ;
    break;}
case 22:
#line 55 "parser.y"
{ semantic(17); printf("%s\n", yytext); ;
    break;}
case 23:
#line 56 "parser.y"
{ yyerror("Not closed parenthesis for formal parameter"); ;
    break;}
case 24:
#line 57 "parser.y"
{ semantic(18); printf("%s\n", yytext); ;
    break;}
case 25:
#line 58 "parser.y"
{ semantic(19); printf("%s\n", yytext); ;
    break;}
case 26:
#line 59 "parser.y"
{ add_param_list(tmp_name, tmp_type); printf("%s, %s\n", tmp_type, tmp_name); semantic(20); ;
    break;}
case 27:
#line 60 "parser.y"
{ add_param_list(tmp_name, tmp_type); semantic(21); ;
    break;}
case 28:
#line 61 "parser.y"
{ yyerror("Missing comma for formal param list"); ;
    break;}
case 29:
#line 62 "parser.y"
{ semantic(22); printf("%s\n", yytext); ;
    break;}
case 30:
#line 63 "parser.y"
{ semantic(23); printf("%s\n", yytext); ;
    break;}
case 31:
#line 64 "parser.y"
{ yyerror("Not closed brace for compound statement"); ;
    break;}
case 32:
#line 65 "parser.y"
{ semantic(24); printf("%s\n", yytext); ;
    break;}
case 33:
#line 66 "parser.y"
{ semantic(25); printf("%s\n", yytext); ;
    break;}
case 34:
#line 67 "parser.y"
{ semantic(26); printf("%s\n", yytext); ;
    break;}
case 35:
#line 68 "parser.y"
{ semantic(27); printf("%s\n", yytext); ;
    break;}
case 36:
#line 69 "parser.y"
{ semantic(28); printf("%s\n", yytext); ;
    break;}
case 37:
#line 70 "parser.y"
{ yyerror("Missing semicolon for declaration"); ;
    break;}
case 38:
#line 71 "parser.y"
{ semantic(29); printf("%s\n", yytext); ;
    break;}
case 39:
#line 72 "parser.y"
{ semantic(30); printf("%s\n", yytext); ;
    break;}
case 40:
#line 73 "parser.y"
{ yyerror("Missing comma for init declaration list"); ;
    break;}
case 41:
#line 74 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(31);
								  } ;
    break;}
case 42:
#line 79 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(32);
								  } ;
    break;}
case 43:
#line 84 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(100);
								  } ;
    break;}
case 44:
#line 89 "parser.y"
{ strcpy(tmp_name, prev_yytext); semantic(33); printf("%s\n", yytext); ;
    break;}
case 45:
#line 90 "parser.y"
{ semantic(34); printf("%s\n", yytext); ;
    break;}
case 46:
#line 91 "parser.y"
{ yyerror("Not closed bracket for declarator"); ;
    break;}
case 47:
#line 92 "parser.y"
{ semantic(35); printf("%s\n", yytext); ;
    break;}
case 48:
#line 93 "parser.y"
{ semantic(36); printf("%s\n", yytext); ;
    break;}
case 49:
#line 94 "parser.y"
{ semantic(37); printf("%s\n", yytext); ;
    break;}
case 50:
#line 95 "parser.y"
{ semantic(38); printf("%s\n", yytext); ;
    break;}
case 51:
#line 96 "parser.y"
{ semantic(39); printf("%s\n", yytext); ;
    break;}
case 52:
#line 97 "parser.y"
{ semantic(40); printf("%s\n", yytext); ;
    break;}
case 53:
#line 98 "parser.y"
{ semantic(41); printf("%s\n", yytext); ;
    break;}
case 54:
#line 99 "parser.y"
{ semantic(42); printf("%s\n", yytext); ;
    break;}
case 55:
#line 100 "parser.y"
{ semantic(43); printf("%s\n", yytext); ;
    break;}
case 56:
#line 101 "parser.y"
{ semantic(44); printf("%s\n", yytext); ;
    break;}
case 57:
#line 102 "parser.y"
{ semantic(45); printf("%s\n", yytext); ;
    break;}
case 58:
#line 104 "parser.y"
{ semantic(46); printf("%s\n", yytext); ;
    break;}
case 59:
#line 105 "parser.y"
{ yyerror("Missing semicolon for expression statement"); ;
    break;}
case 60:
#line 106 "parser.y"
{ semantic(47); printf("%s\n", yytext); ;
    break;}
case 61:
#line 107 "parser.y"
{ semantic(48); printf("%s\n", yytext); ;
    break;}
case 62:
#line 108 "parser.y"
{ semantic(49); printf("%s\n", yytext); ;
    break;}
case 63:
#line 109 "parser.y"
{ semantic(50); printf("%s\n", yytext); ;
    break;}
case 64:
#line 110 "parser.y"
{ semantic(51); printf("%s\n", yytext); ;
    break;}
case 65:
#line 111 "parser.y"
{ yyerror("Not closed parenthesis for while statement"); ;
    break;}
case 66:
#line 112 "parser.y"
{ yyerror("Condition doesn't exists for while statment"); ;
    break;}
case 67:
#line 113 "parser.y"
{ semantic(52); printf("%s\n", yytext); ;
    break;}
case 68:
#line 114 "parser.y"
{ yyerror("Missing semicolon for return statement"); ;
    break;}
case 69:
#line 115 "parser.y"
{ semantic(53); printf("%s\n", yytext); ;
    break;}
case 70:
#line 116 "parser.y"
{ semantic(54); printf("%s\n", yytext); ;
    break;}
case 71:
#line 117 "parser.y"
{ semantic(55); printf("%s\n", yytext); ;
    break;}
case 72:
#line 118 "parser.y"
{ semantic(56); printf("%s\n", yytext); ;
    break;}
case 73:
#line 119 "parser.y"
{ semantic(57); printf("%s\n", yytext); ;
    break;}
case 74:
#line 120 "parser.y"
{ semantic(58); printf("%s\n", yytext); ;
    break;}
case 75:
#line 121 "parser.y"
{ semantic(59); printf("%s\n", yytext); ;
    break;}
case 76:
#line 122 "parser.y"
{ semantic(60); printf("%s\n", yytext); ;
    break;}
case 77:
#line 124 "parser.y"
{ semantic(61); printf("%s\n", yytext); ;
    break;}
case 78:
#line 125 "parser.y"
{ semantic(62); printf("%s\n", yytext); ;
    break;}
case 79:
#line 126 "parser.y"
{ semantic(63); printf("%s\n", yytext); ;
    break;}
case 80:
#line 127 "parser.y"
{ semantic(64); printf("%s\n", yytext); ;
    break;}
case 81:
#line 128 "parser.y"
{ semantic(65); printf("%s\n", yytext); ;
    break;}
case 82:
#line 129 "parser.y"
{ semantic(66); printf("%s\n", yytext); ;
    break;}
case 83:
#line 130 "parser.y"
{ semantic(67); printf("%s\n", yytext); ;
    break;}
case 84:
#line 131 "parser.y"
{ semantic(68); printf("%s\n", yytext); ;
    break;}
case 85:
#line 132 "parser.y"
{ semantic(69); printf("%s\n", yytext); ;
    break;}
case 86:
#line 133 "parser.y"
{ semantic(70); printf("%s\n", yytext); ;
    break;}
case 87:
#line 134 "parser.y"
{ semantic(71); printf("%s\n", yytext); ;
    break;}
case 88:
#line 135 "parser.y"
{ semantic(72); printf("%s\n", yytext); ;
    break;}
case 89:
#line 136 "parser.y"
{ semantic(73); printf("%s\n", yytext); ;
    break;}
case 90:
#line 137 "parser.y"
{ semantic(74); printf("%s\n", yytext); ;
    break;}
case 91:
#line 138 "parser.y"
{ semantic(75); printf("%s\n", yytext); ;
    break;}
case 92:
#line 139 "parser.y"
{ semantic(76); printf("%s\n", yytext); ;
    break;}
case 93:
#line 140 "parser.y"
{ semantic(77); printf("%s\n", yytext); ;
    break;}
case 94:
#line 141 "parser.y"
{ semantic(78); printf("%s\n", yytext); ;
    break;}
case 95:
#line 142 "parser.y"
{ semantic(79); printf("%s\n", yytext); ;
    break;}
case 96:
#line 143 "parser.y"
{ semantic(80); printf("%s\n", yytext); ;
    break;}
case 97:
#line 144 "parser.y"
{ semantic(81); printf("%s\n", yytext); ;
    break;}
case 98:
#line 145 "parser.y"
{ semantic(82); printf("%s\n", yytext); ;
    break;}
case 99:
#line 146 "parser.y"
{ semantic(83); printf("%s\n", yytext); ;
    break;}
case 100:
#line 147 "parser.y"
{ semantic(84); printf("%s\n", yytext); ;
    break;}
case 101:
#line 148 "parser.y"
{ semantic(85); printf("%s\n", yytext); ;
    break;}
case 102:
#line 149 "parser.y"
{ semantic(86); printf("%s\n", yytext); ;
    break;}
case 103:
#line 150 "parser.y"
{ yyerror("Not closed bracket for postfix expression"); ;
    break;}
case 104:
#line 151 "parser.y"
{ semantic(87); printf("%s\n", yytext); ;
    break;}
case 105:
#line 152 "parser.y"
{ yyerror("Not closed parenthesis for postfix expression"); ;
    break;}
case 106:
#line 153 "parser.y"
{ semantic(88); printf("%s\n", yytext); ;
    break;}
case 107:
#line 154 "parser.y"
{ semantic(89); printf("%s\n", yytext); ;
    break;}
case 108:
#line 155 "parser.y"
{ semantic(90); printf("%s\n", yytext); ;
    break;}
case 109:
#line 156 "parser.y"
{ semantic(91); printf("%s\n", yytext); ;
    break;}
case 110:
#line 157 "parser.y"
{ semantic(92); printf("%s\n", yytext); ;
    break;}
case 111:
#line 158 "parser.y"
{ semantic(93); printf("%s\n", yytext); ;
    break;}
case 112:
#line 159 "parser.y"
{ semantic(94); printf("%s\n", yytext); ;
    break;}
case 113:
#line 160 "parser.y"
{ if (!check_sym_table(yytext, function_name)) {yyerror("ERROR: not exist");} else {semantic(95);} printf("%s\n", yytext); ;
    break;}
case 114:
#line 161 "parser.y"
{ semantic(96); printf("%s\n", yytext); ;
    break;}
case 115:
#line 162 "parser.y"
{ semantic(97); printf("%s\n", yytext); ;
    break;}
case 116:
#line 163 "parser.y"
{ semantic(98); printf("%s\n", yytext); ;
    break;}
case 117:
#line 164 "parser.y"
{ yyerror("Not closed parenthesis for primary parameter"); ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 165 "parser.y"

void semantic(int n)
{
	printf("reduced rule number = %d\n", n);
}