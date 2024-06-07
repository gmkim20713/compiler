
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	TIDENT	258
#define	TNUMBER	259
#define	TCONST	260
#define	TELSE	261
#define	TIF	262
#define	TEIF	263
#define	TINT	264
#define	TRETURN	265
#define	TVOID	266
#define	TWHILE	267
#define	TASSIGN	268
#define	TADDASSIGN	269
#define	TSUBASSIGN	270
#define	TMULASSIGN	271
#define	TDIVASSIGN	272
#define	TMODASSIGN	273
#define	TOR	274
#define	TAND	275
#define	TEQUAL	276
#define	TNOTEQU	277
#define	TGREAT	278
#define	TLESS	279
#define	TGREATE	280
#define	TLESSE	281
#define	TINC	282
#define	TDEC	283
#define	TADD	284
#define	TSUB	285
#define	TMUL	286
#define	TDIV	287
#define	TMOD	288
#define	TNOT	289
#define	TLPAREN	290
#define	TRPAREN	291
#define	TLBRACE	292
#define	TRBRACE	293
#define	TLBRACKET	294
#define	TRBRACKET	295
#define	TCOMMA	296
#define	TSEMICOLON	297
#define	TFLOAT	298
#define	TDECIMAL	299
#define	LOWER_THAN_ELSE	300

#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>

#define MAX_STRING_LENGTH 1000 // 예상되는 최대 문자열 길이
#define MAX_PARAM_COUNT 100

char tmp_name[MAX_STRING_LENGTH];
char tmp_type[MAX_STRING_LENGTH];
char function_name[MAX_STRING_LENGTH];
char function_type[MAX_STRING_LENGTH];


/*yacc source for Mini C */
void semantic(int);
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



#define	YYFINAL		163
#define	YYFLAG		-32768
#define	YYNTBASE	46

#define YYTRANSLATE(x) ((unsigned)(x) <= 300 ? yytranslate[x] : 91)

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
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    18,    20,    22,
    25,    27,    29,    31,    33,    35,    37,    39,    43,    47,
    49,    50,    52,    56,    59,    64,    66,    67,    69,    72,
    76,    80,    82,    86,    88,    92,    96,    98,   103,   108,
   110,   111,   113,   114,   116,   119,   121,   123,   125,   127,
   129,   132,   135,   137,   138,   144,   152,   157,   163,   168,
   172,   176,   178,   180,   184,   188,   192,   196,   200,   204,
   206,   210,   212,   216,   218,   222,   226,   228,   232,   236,
   240,   244,   246,   250,   254,   256,   260,   264,   268,   270,
   273,   276,   279,   282,   284,   289,   294,   297,   300,   302,
   303,   305,   307,   311,   313,   315,   317
};

static const short yyrhs[] = {    47,
     0,    48,     0,    47,    48,     0,    49,     0,    64,     0,
    50,    61,     0,    51,    56,    57,     0,    52,     0,    53,
     0,    52,    53,     0,    54,     0,    55,     0,     5,     0,
     9,     0,    43,     0,    11,     0,     3,     0,    35,    58,
    36,     0,    35,    58,     1,     0,    59,     0,     0,    60,
     0,    59,    41,    60,     0,    51,    67,     0,    37,    62,
    69,    38,     0,    63,     0,     0,    64,     0,    63,    64,
     0,    51,    65,    42,     0,    51,    65,     1,     0,    66,
     0,    65,    41,    66,     0,    67,     0,    67,    13,     4,
     0,    67,    13,    44,     0,     3,     0,     3,    39,    68,
    40,     0,     3,    39,    68,     1,     0,     4,     0,     0,
    70,     0,     0,    71,     0,    70,    71,     0,    61,     0,
    72,     0,    74,     0,    75,     0,    76,     0,    73,    42,
     0,    73,     1,     0,    77,     0,     0,     7,    35,    77,
    36,    71,     0,     7,    35,    77,    36,    71,     6,    71,
     0,     7,    35,    77,     1,     0,    12,    35,    77,    36,
    71,     0,    12,    35,    77,     1,     0,    10,    73,    42,
     0,    10,    73,     1,     0,    78,     0,    79,     0,    85,
    13,    78,     0,    85,    14,    78,     0,    85,    15,    78,
     0,    85,    16,    78,     0,    85,    17,    78,     0,    85,
    18,    78,     0,    80,     0,    79,    19,    80,     0,    81,
     0,    80,    20,    81,     0,    82,     0,    81,    21,    82,
     0,    81,    22,    82,     0,    83,     0,    82,    23,    83,
     0,    82,    24,    83,     0,    82,    25,    83,     0,    82,
    26,    83,     0,    84,     0,    83,    29,    84,     0,    83,
    30,    84,     0,    85,     0,    84,    31,    85,     0,    84,
    32,    85,     0,    84,    33,    85,     0,    86,     0,    30,
    85,     0,    34,    85,     0,    27,    85,     0,    28,    85,
     0,    90,     0,    86,    39,    77,    40,     0,    86,    35,
    87,    36,     0,    86,    27,     0,    86,    28,     0,    88,
     0,     0,    89,     0,    78,     0,    89,    41,    78,     0,
     3,     0,     4,     0,    44,     0,    35,    77,    36,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    30,    31,    32,    33,    34,    35,    36,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,   100,   101,   102,   103,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,   141,   142
};

static const char * const yytname[] = {   "$","error","$undefined.","TIDENT",
"TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN","TVOID","TWHILE","TASSIGN",
"TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN","TMODASSIGN","TOR","TAND",
"TEQUAL","TNOTEQU","TGREAT","TLESS","TGREATE","TLESSE","TINC","TDEC","TADD",
"TSUB","TMUL","TDIV","TMOD","TNOT","TLPAREN","TRPAREN","TLBRACE","TRBRACE","TLBRACKET",
"TRBRACKET","TCOMMA","TSEMICOLON","TFLOAT","TDECIMAL","LOWER_THAN_ELSE","mini_c",
"translation_unit","external_dcl","function_def","function_header","dcl_spec",
"dcl_specifiers","dcl_specifier","type_qualifier","type_specifier","function_name",
"formal_param","opt_formal_param","formal_param_list","param_dcl","compound_st",
"opt_dcl_list","declaration_list","declaration","init_dcl_list","init_declarator",
"declarator","opt_number","opt_stat_list","statement_list","statement","expression_st",
"opt_expression","if_st","while_st","return_st","expression","assignment_exp",
"logical_or_exp","logical_and_exp","equality_exp","relational_exp","additive_exp",
"multiplicative_exp","unary_exp","postfix_exp","opt_actual_param","actual_param",
"actual_param_list","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    46,    47,    47,    48,    48,    49,    50,    51,    52,    52,
    53,    53,    54,    55,    55,    55,    56,    57,    57,    58,
    58,    59,    59,    60,    61,    62,    62,    63,    63,    64,
    64,    65,    65,    66,    66,    66,    67,    67,    67,    68,
    68,    69,    69,    70,    70,    71,    71,    71,    71,    71,
    72,    72,    73,    73,    74,    74,    74,    75,    75,    76,
    76,    77,    78,    78,    78,    78,    78,    78,    78,    79,
    79,    80,    80,    81,    81,    81,    82,    82,    82,    82,
    82,    83,    83,    83,    84,    84,    84,    84,    85,    85,
    85,    85,    85,    86,    86,    86,    86,    86,    87,    87,
    88,    89,    89,    90,    90,    90,    90
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     3,     1,     1,     2,
     1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
     0,     1,     3,     2,     4,     1,     0,     1,     2,     3,
     3,     1,     3,     1,     3,     3,     1,     4,     4,     1,
     0,     1,     0,     1,     2,     1,     1,     1,     1,     1,
     2,     2,     1,     0,     5,     7,     4,     5,     4,     3,
     3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
     3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
     3,     1,     3,     3,     1,     3,     3,     3,     1,     2,
     2,     2,     2,     1,     4,     4,     2,     2,     1,     0,
     1,     1,     3,     1,     1,     1,     3
};

static const short yydefact[] = {     0,
    13,    14,    16,    15,     1,     2,     4,     0,     0,     8,
     9,    11,    12,     5,     3,    27,     6,    37,     0,     0,
    32,    34,    10,     0,    54,    26,    28,    41,    21,     7,
    31,     0,    30,     0,    37,   104,   105,     0,    54,     0,
     0,     0,     0,     0,     0,   106,    46,     0,    54,    44,
    47,     0,    48,    49,    50,    53,    62,    63,    70,    72,
    74,    77,    82,    85,    89,    94,    29,    40,     0,     0,
     0,    20,    22,    33,    35,    36,     0,     0,     0,    92,
    93,    90,    91,     0,    25,    45,    52,    51,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    97,    98,   100,
     0,    39,    38,    24,    19,    18,     0,     0,    61,    60,
     0,   107,    71,    85,    73,    75,    76,    78,    79,    80,
    81,    83,    84,    86,    87,    88,    64,    65,    66,    67,
    68,    69,   102,     0,    99,   101,     0,    23,    57,    54,
    59,    54,    96,     0,    95,    55,    58,   103,    54,    56,
     0,     0,     0
};

static const short yydefgoto[] = {   161,
     5,     6,     7,     8,     9,    10,    11,    12,    13,    19,
    30,    71,    72,    73,    47,    25,    26,    14,    20,    21,
    22,    69,    48,    49,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
   144,   145,   146,    66
};

static const short yypact[] = {   118,
-32768,-32768,-32768,-32768,   118,-32768,-32768,   -24,    38,   118,
-32768,-32768,-32768,-32768,-32768,   118,-32768,   -14,    11,     6,
-32768,    18,-32768,    47,    62,   118,-32768,    71,   118,-32768,
-32768,    47,-32768,    20,    56,-32768,-32768,    72,     5,    77,
     5,     5,     5,     5,     5,-32768,-32768,    83,    81,-32768,
-32768,    28,-32768,-32768,-32768,-32768,-32768,   105,   106,    22,
   107,    75,    -5,    65,    59,-32768,-32768,-32768,    36,    47,
     9,    87,-32768,-32768,-32768,-32768,     5,    29,     5,-32768,
-32768,-32768,-32768,   100,-32768,-32768,-32768,-32768,     5,     5,
     5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
     5,     5,     5,     5,     5,     5,     5,-32768,-32768,     5,
     5,-32768,-32768,-32768,-32768,-32768,   118,    37,-32768,-32768,
    41,-32768,   106,-32768,    22,   107,   107,    75,    75,    75,
    75,    -5,    -5,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   103,-32768,   102,   112,-32768,-32768,   110,
-32768,   110,-32768,     5,-32768,   140,-32768,-32768,   110,-32768,
   153,   155,-32768
};

static const short yypgoto[] = {-32768,
-32768,   151,-32768,-32768,   -15,-32768,   147,-32768,-32768,-32768,
-32768,-32768,-32768,    42,   150,-32768,-32768,    -4,-32768,   128,
    92,-32768,-32768,-32768,   -49,-32768,   124,-32768,-32768,-32768,
   -43,   -87,-32768,    76,    74,    43,    55,    44,   -38,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		165


static const short yytable[] = {    86,
    24,    84,    80,    81,    82,    83,    31,    36,    37,   115,
    24,    27,    16,    70,   137,   138,   139,   140,   141,   142,
   -17,    67,   143,    75,    28,    99,   100,   101,    87,   119,
    34,    41,    42,   118,    43,   121,   112,   149,    44,    45,
    18,   151,    91,    92,   116,    29,    32,    33,    46,    35,
   124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
   134,   135,   136,    76,    36,    37,   158,   147,    38,    88,
   120,    39,   150,    40,    68,   113,   152,   102,   103,   104,
   105,   106,   107,    36,    37,   108,   109,    38,    41,    42,
    39,    43,    40,   110,    28,    44,    45,   111,    16,   -43,
   156,    70,   157,    97,    98,    46,    77,    41,    42,   160,
    43,    79,    36,    37,    44,    45,    38,    16,   -42,    39,
    85,    40,     1,    89,    46,    90,     2,   117,     3,    93,
    94,    95,    96,   126,   127,   122,    41,    42,   153,    43,
   132,   133,   154,    44,    45,   159,    16,   128,   129,   130,
   131,   155,   162,    46,   163,    15,    23,    17,   148,    74,
     4,   114,    78,   125,   123
};

static const short yycheck[] = {    49,
    16,    45,    41,    42,    43,    44,     1,     3,     4,     1,
    26,    16,    37,    29,   102,   103,   104,   105,   106,   107,
    35,    26,   110,     4,    39,    31,    32,    33,     1,     1,
    13,    27,    28,    77,    30,    79,     1,     1,    34,    35,
     3,     1,    21,    22,    36,    35,    41,    42,    44,     3,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   100,   101,    44,     3,     4,   154,   111,     7,    42,
    42,    10,    36,    12,     4,    40,    36,    13,    14,    15,
    16,    17,    18,     3,     4,    27,    28,     7,    27,    28,
    10,    30,    12,    35,    39,    34,    35,    39,    37,    38,
   150,   117,   152,    29,    30,    44,    35,    27,    28,   159,
    30,    35,     3,     4,    34,    35,     7,    37,    38,    10,
    38,    12,     5,    19,    44,    20,     9,    41,    11,    23,
    24,    25,    26,    91,    92,    36,    27,    28,    36,    30,
    97,    98,    41,    34,    35,     6,    37,    93,    94,    95,
    96,    40,     0,    44,     0,     5,    10,     8,   117,    32,
    43,    70,    39,    90,    89
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
{ semantic(1); ;
    break;}
case 2:
#line 31 "parser.y"
{ semantic(2); ;
    break;}
case 3:
#line 32 "parser.y"
{ semantic(3); ;
    break;}
case 4:
#line 33 "parser.y"
{ semantic(4); ;
    break;}
case 5:
#line 34 "parser.y"
{ semantic(5); ;
    break;}
case 6:
#line 35 "parser.y"
{ semantic(6); ;
    break;}
case 7:
#line 36 "parser.y"
{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("Already exists");
								  } else {
								    semantic(7);
								  };
    break;}
case 8:
#line 41 "parser.y"
{ strcpy(tmp_name, yytext); semantic(8); ;
    break;}
case 9:
#line 42 "parser.y"
{ semantic(9); ;
    break;}
case 10:
#line 43 "parser.y"
{ semantic(10); ;
    break;}
case 11:
#line 44 "parser.y"
{ semantic(11); ;
    break;}
case 12:
#line 45 "parser.y"
{ semantic(12); ;
    break;}
case 13:
#line 46 "parser.y"
{ semantic(13); ;
    break;}
case 14:
#line 47 "parser.y"
{ strcpy(tmp_type, yytext); semantic(14); ;
    break;}
case 15:
#line 48 "parser.y"
{ strcpy(tmp_type, yytext); semantic(100); ;
    break;}
case 16:
#line 49 "parser.y"
{ strcpy(tmp_type, yytext); semantic(15); ;
    break;}
case 17:
#line 50 "parser.y"
{ strcpy(function_name, tmp_name); strcpy(function_type, tmp_type); semantic(16); ;
    break;}
case 18:
#line 51 "parser.y"
{ semantic(17); ;
    break;}
case 19:
#line 52 "parser.y"
{ yyerror("ERROR : right parentheses type not matching"); ;
    break;}
case 20:
#line 53 "parser.y"
{ semantic(18); ;
    break;}
case 21:
#line 54 "parser.y"
{ semantic(19); ;
    break;}
case 22:
#line 55 "parser.y"
{ add_param_list(tmp_name, tmp_type); printf("%s, %s\n", tmp_type, tmp_name); semantic(20); ;
    break;}
case 23:
#line 56 "parser.y"
{ add_param_list(tmp_name, tmp_type); semantic(21); ;
    break;}
case 24:
#line 57 "parser.y"
{ semantic(22); ;
    break;}
case 25:
#line 58 "parser.y"
{ semantic(23); ;
    break;}
case 26:
#line 59 "parser.y"
{ semantic(24); ;
    break;}
case 27:
#line 60 "parser.y"
{ semantic(25); ;
    break;}
case 28:
#line 61 "parser.y"
{ semantic(26); ;
    break;}
case 29:
#line 62 "parser.y"
{ semantic(27); ;
    break;}
case 30:
#line 63 "parser.y"
{ semantic(28); ;
    break;}
case 31:
#line 64 "parser.y"
{ yyerror("ERROR : semicoln missing in declaration statement"); ;
    break;}
case 32:
#line 65 "parser.y"
{ semantic(29); ;
    break;}
case 33:
#line 66 "parser.y"
{ semantic(30); ;
    break;}
case 34:
#line 67 "parser.y"
{ semantic(31); ;
    break;}
case 35:
#line 68 "parser.y"
{ semantic(32); ;
    break;}
case 36:
#line 69 "parser.y"
{ semantic(102); ;
    break;}
case 37:
#line 70 "parser.y"
{ add_symbol_table("identifier", tmp_name, tmp_type, function_name); semantic(33); ;
    break;}
case 38:
#line 71 "parser.y"
{ add_symbol_table("identifier", tmp_name, strcat(tmp_type, " array"), function_name); semantic(34); ;
    break;}
case 39:
#line 72 "parser.y"
{ add_symbol_table("identifier", tmp_name, tmp_type, function_name); yyerrok; yyerror("ERROR : right bracket type not matching"); ;
    break;}
case 40:
#line 73 "parser.y"
{ semantic(35); ;
    break;}
case 41:
#line 74 "parser.y"
{ semantic(36); ;
    break;}
case 42:
#line 75 "parser.y"
{ semantic(37); ;
    break;}
case 43:
#line 76 "parser.y"
{ semantic(38); ;
    break;}
case 44:
#line 77 "parser.y"
{ semantic(39); ;
    break;}
case 45:
#line 78 "parser.y"
{ semantic(40); ;
    break;}
case 46:
#line 79 "parser.y"
{ semantic(41); ;
    break;}
case 47:
#line 80 "parser.y"
{ semantic(42); ;
    break;}
case 48:
#line 81 "parser.y"
{ semantic(43); ;
    break;}
case 49:
#line 82 "parser.y"
{ semantic(44); ;
    break;}
case 50:
#line 83 "parser.y"
{ semantic(45); ;
    break;}
case 51:
#line 85 "parser.y"
{ semantic(46); ;
    break;}
case 52:
#line 86 "parser.y"
{ yyerror("ERROR : semicoln missing in expression statement"); ;
    break;}
case 53:
#line 87 "parser.y"
{ semantic(47); ;
    break;}
case 54:
#line 88 "parser.y"
{ semantic(48);;
    break;}
case 55:
#line 89 "parser.y"
{ semantic(49); ;
    break;}
case 56:
#line 90 "parser.y"
{ semantic(50); ;
    break;}
case 57:
#line 91 "parser.y"
{ yyerror("ERROR : right parentheses type not matching in if statement"); ;
    break;}
case 58:
#line 92 "parser.y"
{ semantic(51); ;
    break;}
case 59:
#line 93 "parser.y"
{ yyerror("ERROR : right parentheses type not matching in while statement"); ;
    break;}
case 60:
#line 94 "parser.y"
{ semantic(52); ;
    break;}
case 61:
#line 95 "parser.y"
{ yyerror("[ERROR : semicolon missing in return statement"); ;
    break;}
case 62:
#line 96 "parser.y"
{ semantic(53); ;
    break;}
case 63:
#line 97 "parser.y"
{ semantic(54); ;
    break;}
case 64:
#line 98 "parser.y"
{ semantic(55); ;
    break;}
case 65:
#line 99 "parser.y"
{ semantic(56); ;
    break;}
case 66:
#line 100 "parser.y"
{ semantic(57); ;
    break;}
case 67:
#line 101 "parser.y"
{ semantic(58); ;
    break;}
case 68:
#line 102 "parser.y"
{ semantic(59); ;
    break;}
case 69:
#line 103 "parser.y"
{ semantic(60); ;
    break;}
case 70:
#line 105 "parser.y"
{ semantic(61); ;
    break;}
case 71:
#line 106 "parser.y"
{ semantic(62); ;
    break;}
case 72:
#line 107 "parser.y"
{ semantic(63); ;
    break;}
case 73:
#line 108 "parser.y"
{ semantic(64); ;
    break;}
case 74:
#line 109 "parser.y"
{ semantic(65); ;
    break;}
case 75:
#line 110 "parser.y"
{ semantic(66); ;
    break;}
case 76:
#line 111 "parser.y"
{ semantic(67); ;
    break;}
case 77:
#line 112 "parser.y"
{ semantic(68); ;
    break;}
case 78:
#line 113 "parser.y"
{ semantic(69); ;
    break;}
case 79:
#line 114 "parser.y"
{ semantic(70); ;
    break;}
case 80:
#line 115 "parser.y"
{ semantic(71); ;
    break;}
case 81:
#line 116 "parser.y"
{ semantic(72); ;
    break;}
case 82:
#line 117 "parser.y"
{ semantic(73); ;
    break;}
case 83:
#line 118 "parser.y"
{ semantic(74); ;
    break;}
case 84:
#line 119 "parser.y"
{ semantic(75); ;
    break;}
case 85:
#line 120 "parser.y"
{ semantic(76); ;
    break;}
case 86:
#line 121 "parser.y"
{ semantic(77); ;
    break;}
case 87:
#line 122 "parser.y"
{ semantic(78); ;
    break;}
case 88:
#line 123 "parser.y"
{ semantic(79); ;
    break;}
case 89:
#line 124 "parser.y"
{ semantic(80); ;
    break;}
case 90:
#line 125 "parser.y"
{ semantic(81); ;
    break;}
case 91:
#line 126 "parser.y"
{ semantic(82); ;
    break;}
case 92:
#line 127 "parser.y"
{ semantic(83); ;
    break;}
case 93:
#line 128 "parser.y"
{ semantic(84); ;
    break;}
case 94:
#line 129 "parser.y"
{ semantic(85); ;
    break;}
case 95:
#line 130 "parser.y"
{ semantic(86); ;
    break;}
case 96:
#line 131 "parser.y"
{ semantic(87); ;
    break;}
case 97:
#line 132 "parser.y"
{ semantic(88); ;
    break;}
case 98:
#line 133 "parser.y"
{ semantic(89); ;
    break;}
case 99:
#line 134 "parser.y"
{ semantic(90); ;
    break;}
case 100:
#line 135 "parser.y"
{ semantic(91); ;
    break;}
case 101:
#line 136 "parser.y"
{ semantic(92); ;
    break;}
case 102:
#line 137 "parser.y"
{ semantic(93); ;
    break;}
case 103:
#line 138 "parser.y"
{ semantic(94); ;
    break;}
case 104:
#line 139 "parser.y"
{ semantic(95); ;
    break;}
case 105:
#line 140 "parser.y"
{ semantic(96); ;
    break;}
case 106:
#line 141 "parser.y"
{ semantic(101); ;
    break;}
case 107:
#line 142 "parser.y"
{ semantic(97); ;
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
#line 143 "parser.y"

void semantic(int n)
{
	printf("reduced rule number = %d\n", n);
}