
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
#define	TNOTASSIGNABLE	302
#define	LOWER_THAN_ELSE	303

#line 1 "parser.y"

#include <stdio.h>
#include <ctype.h>
#include <malloc.h>
#include "sym_table_lab.h"

char *prev_yytext; // yytext 문자열 저장
char tmp_name[MAX_STRING_LENGTH]; // identifier 이름 임시 저장
char tmp_type[MAX_STRING_LENGTH]; // idntifier 타입 임시 저장
char function_name[MAX_STRING_LENGTH]; // 함수(블록) 이름 임시 저장
char function_type[MAX_STRING_LENGTH]; // 함수(블록) 이름 임시 저장
int tmp_const; // const 여부 임시 저장

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



#define	YYFINAL		213
#define	YYFLAG		-32768
#define	YYNTBASE	49

#define YYTRANSLATE(x) ((unsigned)(x) <= 303 ? yytranslate[x] : 100)

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
    46,    47,    48
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     7,     9,    11,    14,    17,    20,    23,
    26,    30,    34,    36,    40,    44,    46,    48,    51,    53,
    55,    57,    59,    61,    63,    65,    69,    72,    74,    75,
    77,    81,    84,    87,    92,    97,    99,   100,   102,   105,
   109,   113,   115,   119,   122,   124,   128,   132,   134,   139,
   144,   146,   147,   149,   150,   152,   155,   157,   159,   161,
   163,   165,   168,   171,   173,   174,   180,   188,   194,   200,
   205,   209,   213,   215,   217,   219,   221,   225,   229,   233,
   237,   241,   245,   249,   253,   257,   261,   265,   269,   273,
   277,   281,   285,   289,   293,   295,   299,   301,   305,   307,
   311,   315,   317,   321,   325,   329,   333,   335,   339,   343,
   345,   349,   353,   357,   359,   362,   365,   368,   371,   373,
   378,   383,   388,   393,   396,   399,   401,   402,   404,   406,
   410,   412,   414,   416,   418,   422
};

static const short yyrhs[] = {    50,
     0,    51,     0,    50,    51,     0,    52,     0,    70,     0,
     5,    44,     0,     5,     1,     0,    56,    67,     0,    53,
    44,     0,    56,     1,     0,    57,    62,    54,     0,    37,
    55,    38,     0,    61,     0,    61,    43,    55,     0,    57,
    62,    63,     0,    58,     0,    59,     0,    58,    59,     0,
    60,     0,    61,     0,     7,     0,    11,     0,    45,     0,
    13,     0,     5,     0,    37,    64,    38,     0,    37,    64,
     0,    65,     0,     0,    66,     0,    65,    43,    66,     0,
    65,    66,     0,    57,    73,     0,    39,    68,    75,    40,
     0,    39,    68,    75,     1,     0,    69,     0,     0,    70,
     0,    69,    70,     0,    57,    71,    44,     0,    57,    71,
     1,     0,    72,     0,    71,    43,    72,     0,    71,    72,
     0,    73,     0,    73,    15,     6,     0,    73,    15,    46,
     0,     5,     0,     5,    41,    74,    42,     0,     5,    41,
    74,     1,     0,     6,     0,     0,    76,     0,     0,    77,
     0,    76,    77,     0,    67,     0,    78,     0,    80,     0,
    81,     0,    82,     0,    79,    44,     0,    83,     1,     0,
    83,     0,     0,     9,    37,    83,    38,    77,     0,     9,
    37,    83,    38,    77,     8,    77,     0,    14,    37,    83,
    38,    77,     0,    14,    37,    83,     1,    77,     0,    14,
    37,    38,    77,     0,    12,    79,    44,     0,    12,    79,
     1,     0,    84,     0,    87,     0,    85,     0,    86,     0,
    98,    15,    84,     0,    98,    16,    84,     0,    98,    17,
    84,     0,    98,    18,    84,     0,    98,    19,    84,     0,
    98,    20,    84,     0,     6,    15,    84,     0,     6,    16,
    84,     0,     6,    17,    84,     0,     6,    18,    84,     0,
     6,    19,    84,     0,     6,    20,    84,     0,    46,    15,
    84,     0,    46,    16,    84,     0,    46,    17,    84,     0,
    46,    18,    84,     0,    46,    19,    84,     0,    46,    20,
    84,     0,    88,     0,    87,    21,    88,     0,    89,     0,
    88,    22,    89,     0,    90,     0,    89,    23,    90,     0,
    89,    24,    90,     0,    91,     0,    90,    25,    91,     0,
    90,    26,    91,     0,    90,    27,    91,     0,    90,    28,
    91,     0,    92,     0,    91,    31,    92,     0,    91,    32,
    92,     0,    93,     0,    92,    33,    93,     0,    92,    34,
    93,     0,    92,    35,    93,     0,    94,     0,    32,    93,
     0,    36,    93,     0,    29,    93,     0,    30,    93,     0,
    99,     0,    94,    41,    83,    42,     0,    94,    41,    83,
     1,     0,    94,    37,    95,    38,     0,    94,    37,    95,
     1,     0,    94,    29,     0,    94,    30,     0,    96,     0,
     0,    97,     0,    84,     0,    97,    43,    84,     0,     5,
     0,    98,     0,     6,     0,    46,     0,    37,    83,    38,
     0,    37,    83,     1,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    45,    46,    47,    48,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    87,    92,    97,    98,    99,
   100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
   110,   112,   113,   114,   115,   116,   117,   118,   119,   120,
   121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
   131,   132,   134,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,   186,   187,   188
};

static const char * const yytname[] = {   "$","error","$undefined.","TERROR",
"TCOMMENT","TIDENT","TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN",
"TVOID","TWHILE","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TOR","TAND","TEQUAL","TNOTEQU","TGREAT","TLESS","TGREATE","TLESSE",
"TINC","TDEC","TADD","TSUB","TMUL","TDIV","TMOD","TNOT","TLPAREN","TRPAREN",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TCOMMA","TSEMICOLON","TFLOAT","TDECIMAL",
"TNOTASSIGNABLE","LOWER_THAN_ELSE","mini_c","translation_unit","external_dcl",
"function_def","short_function_header","short_formal_param","short_opt_formal_param",
"function_header","dcl_spec","dcl_specifiers","dcl_specifier","type_qualifier",
"type_specifier","function_name","formal_param","opt_formal_param","formal_param_list",
"param_dcl","compound_st","opt_dcl_list","declaration_list","declaration","init_dcl_list",
"init_declarator","declarator","opt_number","opt_stat_list","statement_list",
"statement","expression_st","opt_expression","if_st","while_st","return_st",
"expression","assignment_exp","assignable_exp","not_assignable_exp","logical_or_exp",
"logical_and_exp","equality_exp","relational_exp","additive_exp","multiplicative_exp",
"unary_exp","postfix_exp","opt_actual_param","actual_param","actual_param_list",
"left_hand","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    49,    50,    50,    51,    51,    51,    51,    52,    52,    52,
    53,    54,    55,    55,    56,    57,    58,    58,    59,    59,
    60,    61,    61,    61,    62,    63,    63,    64,    64,    65,
    65,    65,    66,    67,    67,    68,    68,    69,    69,    70,
    70,    71,    71,    71,    72,    72,    72,    73,    73,    73,
    74,    74,    75,    75,    76,    76,    77,    77,    77,    77,
    77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
    82,    82,    83,    84,    84,    84,    85,    85,    85,    85,
    85,    85,    86,    86,    86,    86,    86,    86,    86,    86,
    86,    86,    86,    86,    87,    87,    88,    88,    89,    89,
    89,    90,    90,    90,    90,    90,    91,    91,    91,    92,
    92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
    94,    94,    94,    94,    94,    95,    95,    96,    97,    97,
    98,    99,    99,    99,    99,    99
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     3,     1,     3,     3,     1,     1,     2,     1,     1,
     1,     1,     1,     1,     1,     3,     2,     1,     0,     1,
     3,     2,     2,     4,     4,     1,     0,     1,     2,     3,
     3,     1,     3,     2,     1,     3,     3,     1,     4,     4,
     1,     0,     1,     0,     1,     2,     1,     1,     1,     1,
     1,     2,     2,     1,     0,     5,     7,     5,     5,     4,
     3,     3,     1,     1,     1,     1,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     3,     1,     3,     1,     3,
     3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
     3,     3,     3,     1,     2,     2,     2,     2,     1,     4,
     4,     4,     4,     2,     2,     1,     0,     1,     1,     3,
     1,     1,     1,     1,     3,     3
};

static const short yydefact[] = {     0,
     0,    21,    22,    24,    23,     1,     2,     4,     0,     0,
     0,    16,    17,    19,    20,     5,     7,     6,     3,     9,
    10,    37,     8,    48,     0,     0,    42,    45,    18,     0,
    54,    36,    38,    52,    29,    11,    15,    41,    48,     0,
    40,    44,     0,   131,   133,     0,    65,     0,     0,     0,
     0,     0,     0,   134,    57,     0,    53,    55,    58,     0,
    59,    60,    61,     0,    73,    75,    76,    74,    95,    97,
    99,   102,   107,   110,   114,   132,   119,    39,    51,     0,
     0,     0,    20,    27,    28,    30,    43,    46,    47,     0,
     0,     0,     0,     0,     0,     0,     0,    64,     0,   133,
   134,   117,   132,   118,   115,   116,     0,     0,     0,     0,
     0,     0,     0,    35,    34,    56,    62,    63,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   124,   125,   127,     0,     0,     0,     0,     0,     0,
     0,    50,    49,    12,    33,     0,    26,     0,    32,    83,
    84,    85,    86,    87,    88,     0,    72,    71,    65,     0,
   136,   135,    89,    90,    91,    92,    93,    94,    96,    98,
   100,   101,   103,   104,   105,   106,   108,   109,   111,   112,
   113,   129,     0,   126,   128,     0,    77,    78,    79,    80,
    81,    82,    14,    13,    31,    65,    70,    65,    65,   123,
   122,     0,   121,   120,    66,    69,    68,   130,    65,    67,
     0,     0,     0
};

static const short yydefgoto[] = {   211,
     6,     7,     8,     9,    36,    81,    10,    82,    12,    13,
    14,    15,    25,    37,    84,    85,    86,    55,    31,    32,
    16,    26,    27,    28,    80,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   183,   184,   185,    76,    77
};

static const short yypact[] = {   103,
    14,-32768,-32768,-32768,-32768,   103,-32768,-32768,     0,    38,
    41,    29,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    29,-32768,    -6,    25,    28,-32768,    49,-32768,    89,
   114,    29,-32768,   118,    29,-32768,-32768,-32768,    86,    89,
-32768,-32768,    24,-32768,   155,   101,   161,   117,   172,   172,
   172,   172,   161,   195,-32768,    16,   114,-32768,-32768,    96,
-32768,-32768,-32768,    15,-32768,-32768,-32768,   124,   135,   108,
   109,     6,   196,-32768,    92,   204,-32768,-32768,-32768,    31,
   123,    89,    87,   127,   104,-32768,-32768,-32768,-32768,   161,
   161,   161,   161,   161,   161,   161,    17,-32768,    63,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    40,   161,   161,   161,
   161,   161,   161,-32768,-32768,-32768,-32768,-32768,   172,   172,
   172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
   172,-32768,-32768,   161,   161,   161,   161,   161,   161,   161,
   161,-32768,-32768,-32768,-32768,    52,-32768,    29,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   130,-32768,-32768,   150,    65,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   135,   108,
   109,   109,     6,     6,     6,     6,   196,   196,-32768,-32768,
-32768,-32768,    66,-32768,   133,    33,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   138,-32768,   150,-32768,   150,   150,-32768,
-32768,   161,-32768,-32768,   180,-32768,-32768,-32768,   150,-32768,
   192,   194,-32768
};

static const short yypgoto[] = {-32768,
-32768,   193,-32768,-32768,-32768,    54,-32768,   163,-32768,   191,
-32768,   -28,-32768,-32768,-32768,-32768,   -72,   206,-32768,-32768,
    21,-32768,    72,   151,-32768,-32768,-32768,   -57,-32768,   158,
-32768,-32768,-32768,   -39,   -89,-32768,-32768,-32768,    98,   112,
   -67,   102,    56,   -24,-32768,-32768,-32768,-32768,   -40,-32768
};


#define	YYLAST		233


static const short yytable[] = {   116,
   150,   151,   152,   153,   154,   155,    83,    98,   103,   103,
   103,   103,   149,   107,    17,   118,   114,   157,   163,   164,
   165,   166,   167,   168,   102,   104,   105,   106,    38,    88,
   -25,   142,    39,   203,    34,     2,   127,   128,    21,     3,
   161,     4,    33,    20,   182,    24,   187,   188,   189,   190,
   191,   192,    78,   171,   172,   115,   156,    18,   -64,   160,
   158,    35,     3,    43,     4,   198,   200,    44,    45,    89,
    40,    41,   143,     5,   204,   195,    22,   162,   103,   103,
   103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
   103,    49,    50,    39,    51,   186,     5,    42,    52,    53,
   159,   197,   199,   201,   179,   180,   181,     1,    54,     2,
     2,    87,   208,     3,     3,     4,     4,   194,    44,    45,
   132,   133,    46,    79,   -13,    47,    34,    48,   134,   146,
   121,   122,   135,   123,   124,   125,   126,    96,   205,   117,
   206,   207,    49,    50,   119,    51,   148,     5,     5,    52,
    53,   210,    22,    99,    44,    45,   120,   -65,    46,    54,
   144,    47,    11,    48,   147,    44,    45,   196,    11,    90,
    91,    92,    93,    94,    95,   202,    44,   100,    49,    50,
   146,    51,   177,   178,    30,    52,    53,   209,    22,    49,
    50,   212,    51,   213,    30,    54,    52,    53,    19,   193,
    49,    50,    29,    51,    97,     0,    54,    52,    53,   108,
   109,   110,   111,   112,   113,    23,   169,   101,   136,   137,
   138,   139,   140,   141,   173,   174,   175,   176,   129,   130,
   131,   170,   145
};

static const short yycheck[] = {    57,
    90,    91,    92,    93,    94,    95,    35,    47,    49,    50,
    51,    52,    85,    53,     1,     1,     1,     1,   108,   109,
   110,   111,   112,   113,    49,    50,    51,    52,     1,     6,
    37,     1,     5,     1,    41,     7,    31,    32,     1,    11,
     1,    13,    22,    44,   134,     5,   136,   137,   138,   139,
   140,   141,    32,   121,   122,    40,    96,    44,    44,    99,
    44,    37,    11,    15,    13,     1,     1,     5,     6,    46,
    43,    44,    42,    45,    42,   148,    39,    38,   119,   120,
   121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
   131,    29,    30,     5,    32,   135,    45,    26,    36,    37,
    38,   159,    38,    38,   129,   130,   131,     5,    46,     7,
     7,    40,   202,    11,    11,    13,    13,   146,     5,     6,
    29,    30,     9,     6,    38,    12,    41,    14,    37,    43,
    23,    24,    41,    25,    26,    27,    28,    37,   196,    44,
   198,   199,    29,    30,    21,    32,    43,    45,    45,    36,
    37,   209,    39,    37,     5,     6,    22,    44,     9,    46,
    38,    12,     0,    14,    38,     5,     6,    38,     6,    15,
    16,    17,    18,    19,    20,    43,     5,     6,    29,    30,
    43,    32,   127,   128,    22,    36,    37,     8,    39,    29,
    30,     0,    32,     0,    32,    46,    36,    37,     6,   146,
    29,    30,    12,    32,    47,    -1,    46,    36,    37,    15,
    16,    17,    18,    19,    20,    10,   119,    46,    15,    16,
    17,    18,    19,    20,   123,   124,   125,   126,    33,    34,
    35,   120,    82
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
{ semantic(600); ;
    break;}
case 7:
#line 36 "parser.y"
{ yyerror("ERROR: Missing semicolon for external declaration"); ;
    break;}
case 8:
#line 37 "parser.y"
{ strcpy(function_name, ""); semantic(6); ;
    break;}
case 9:
#line 38 "parser.y"
{ strcpy(function_name, ""); semantic(300); ;
    break;}
case 10:
#line 39 "parser.y"
{ yyerror("ERROR: Missing semicolon for function definition"); ;
    break;}
case 11:
#line 40 "parser.y"
{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(601);
								  }  ;
    break;}
case 12:
#line 45 "parser.y"
{ semantic(602); ;
    break;}
case 13:
#line 46 "parser.y"
{ add_param_list("(null}", tmp_type); semantic(603); ;
    break;}
case 14:
#line 47 "parser.y"
{ add_param_list("(null}", tmp_type); semantic(604); ;
    break;}
case 15:
#line 48 "parser.y"
{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(7);
								  }  ;
    break;}
case 16:
#line 53 "parser.y"
{ strcpy(tmp_name, yytext); semantic(8); ;
    break;}
case 17:
#line 54 "parser.y"
{ semantic(9); ;
    break;}
case 18:
#line 55 "parser.y"
{ semantic(10); ;
    break;}
case 19:
#line 56 "parser.y"
{ semantic(11); ;
    break;}
case 20:
#line 57 "parser.y"
{ semantic(12); ;
    break;}
case 21:
#line 58 "parser.y"
{ tmp_const = 1; semantic(13); ;
    break;}
case 22:
#line 59 "parser.y"
{ strcpy(tmp_type, yytext); semantic(14); ;
    break;}
case 23:
#line 60 "parser.y"
{ strcpy(tmp_type, yytext); semantic(100); ;
    break;}
case 24:
#line 61 "parser.y"
{ strcpy(tmp_type, yytext); semantic(15); ;
    break;}
case 25:
#line 62 "parser.y"
{ strcpy(function_name, tmp_name); strcpy(function_type, tmp_type); semantic(16); ;
    break;}
case 26:
#line 63 "parser.y"
{ semantic(17); ;
    break;}
case 27:
#line 64 "parser.y"
{ yyerror("ERROR: Not closed parenthesis for formal parameter"); ;
    break;}
case 28:
#line 65 "parser.y"
{ semantic(18); ;
    break;}
case 29:
#line 66 "parser.y"
{ semantic(19); ;
    break;}
case 30:
#line 67 "parser.y"
{ add_param_list(tmp_name, tmp_type); semantic(20); ;
    break;}
case 31:
#line 68 "parser.y"
{ add_param_list(tmp_name, tmp_type); semantic(21); ;
    break;}
case 32:
#line 69 "parser.y"
{ yyerror("ERROR: Missing comma for formal param list"); ;
    break;}
case 33:
#line 70 "parser.y"
{ semantic(22); ;
    break;}
case 34:
#line 71 "parser.y"
{ semantic(23); ;
    break;}
case 35:
#line 72 "parser.y"
{ yyerror("ERROR: Not closed brace for compound statement"); ;
    break;}
case 36:
#line 73 "parser.y"
{ semantic(24); ;
    break;}
case 37:
#line 74 "parser.y"
{ semantic(25); ;
    break;}
case 38:
#line 75 "parser.y"
{ semantic(26); ;
    break;}
case 39:
#line 76 "parser.y"
{ semantic(27); ;
    break;}
case 40:
#line 77 "parser.y"
{ semantic(28); ;
    break;}
case 41:
#line 78 "parser.y"
{ yyerror("ERROR: Missing semicolon for declaration"); ;
    break;}
case 42:
#line 79 "parser.y"
{ semantic(29); ;
    break;}
case 43:
#line 80 "parser.y"
{ semantic(30); ;
    break;}
case 44:
#line 81 "parser.y"
{ yyerror("ERROR: Missing comma for init declaration list"); ;
    break;}
case 45:
#line 82 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR: ERROR : already exists");
								  } else {
								    semantic(31);
								  } tmp_const = 0; ;
    break;}
case 46:
#line 87 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR: ERROR : already exists");
								  } else {
								    semantic(32);
								  } tmp_const = 0; ;
    break;}
case 47:
#line 92 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR: ERROR : already exists");
								  } else {
								    semantic(100);
								  } tmp_const = 0; ;
    break;}
case 48:
#line 97 "parser.y"
{ strcpy(tmp_name, prev_yytext); semantic(33); ;
    break;}
case 49:
#line 98 "parser.y"
{ strcpy(tmp_name, prev_yytext); semantic(34); ;
    break;}
case 50:
#line 99 "parser.y"
{ yyerror("ERROR: Not closed bracket for declarator"); ;
    break;}
case 51:
#line 100 "parser.y"
{ semantic(35); ;
    break;}
case 52:
#line 101 "parser.y"
{ semantic(36); ;
    break;}
case 53:
#line 102 "parser.y"
{ semantic(37); ;
    break;}
case 54:
#line 103 "parser.y"
{ semantic(38); ;
    break;}
case 55:
#line 104 "parser.y"
{ semantic(39); ;
    break;}
case 56:
#line 105 "parser.y"
{ semantic(40); ;
    break;}
case 57:
#line 106 "parser.y"
{ semantic(41); ;
    break;}
case 58:
#line 107 "parser.y"
{ semantic(42); ;
    break;}
case 59:
#line 108 "parser.y"
{ semantic(43); ;
    break;}
case 60:
#line 109 "parser.y"
{ semantic(44); ;
    break;}
case 61:
#line 110 "parser.y"
{ semantic(45); ;
    break;}
case 62:
#line 112 "parser.y"
{ semantic(46); ;
    break;}
case 63:
#line 113 "parser.y"
{ yyerror("ERROR: Missing semicolon for expression statement"); ;
    break;}
case 64:
#line 114 "parser.y"
{ semantic(47); ;
    break;}
case 65:
#line 115 "parser.y"
{ semantic(48); ;
    break;}
case 66:
#line 116 "parser.y"
{ semantic(49); ;
    break;}
case 67:
#line 117 "parser.y"
{ semantic(50); ;
    break;}
case 68:
#line 118 "parser.y"
{ semantic(51); ;
    break;}
case 69:
#line 119 "parser.y"
{ yyerror("ERROR: Not closed parenthesis for while statement"); ;
    break;}
case 70:
#line 120 "parser.y"
{ yyerror("ERROR: Condition doesn't exists for while statment"); ;
    break;}
case 71:
#line 121 "parser.y"
{ semantic(52); ;
    break;}
case 72:
#line 122 "parser.y"
{ yyerror("ERROR: Missing semicolon for return statement"); ;
    break;}
case 73:
#line 123 "parser.y"
{ semantic(53); ;
    break;}
case 74:
#line 124 "parser.y"
{ semantic(54); ;
    break;}
case 75:
#line 125 "parser.y"
{ semantic(500); ;
    break;}
case 77:
#line 127 "parser.y"
{ semantic(501); ;
    break;}
case 78:
#line 128 "parser.y"
{ semantic(502); ;
    break;}
case 79:
#line 129 "parser.y"
{ semantic(503); ;
    break;}
case 80:
#line 130 "parser.y"
{ semantic(504); ;
    break;}
case 81:
#line 131 "parser.y"
{ semantic(505); ;
    break;}
case 82:
#line 132 "parser.y"
{ semantic(506); ;
    break;}
case 83:
#line 134 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); ;
    break;}
case 84:
#line 135 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); ;
    break;}
case 85:
#line 136 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); ;
    break;}
case 86:
#line 137 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); ;
    break;}
case 87:
#line 138 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); ;
    break;}
case 88:
#line 139 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); ;
    break;}
case 89:
#line 140 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); ;
    break;}
case 90:
#line 141 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); ;
    break;}
case 91:
#line 142 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); ;
    break;}
case 92:
#line 143 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); ;
    break;}
case 93:
#line 144 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); ;
    break;}
case 94:
#line 145 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); ;
    break;}
case 95:
#line 147 "parser.y"
{ semantic(61); ;
    break;}
case 96:
#line 148 "parser.y"
{ semantic(62); ;
    break;}
case 97:
#line 149 "parser.y"
{ semantic(63); ;
    break;}
case 98:
#line 150 "parser.y"
{ semantic(64); ;
    break;}
case 99:
#line 151 "parser.y"
{ semantic(65); ;
    break;}
case 100:
#line 152 "parser.y"
{ semantic(66); ;
    break;}
case 101:
#line 153 "parser.y"
{ semantic(67); ;
    break;}
case 102:
#line 154 "parser.y"
{ semantic(68); ;
    break;}
case 103:
#line 155 "parser.y"
{ semantic(69); ;
    break;}
case 104:
#line 156 "parser.y"
{ semantic(70); ;
    break;}
case 105:
#line 157 "parser.y"
{ semantic(71); ;
    break;}
case 106:
#line 158 "parser.y"
{ semantic(72); ;
    break;}
case 107:
#line 159 "parser.y"
{ semantic(73); ;
    break;}
case 108:
#line 160 "parser.y"
{ semantic(74); ;
    break;}
case 109:
#line 161 "parser.y"
{ semantic(75); ;
    break;}
case 110:
#line 162 "parser.y"
{ semantic(76); ;
    break;}
case 111:
#line 163 "parser.y"
{ semantic(77); ;
    break;}
case 112:
#line 164 "parser.y"
{ semantic(78); ;
    break;}
case 113:
#line 165 "parser.y"
{ semantic(79); ;
    break;}
case 114:
#line 166 "parser.y"
{ semantic(80); ;
    break;}
case 115:
#line 167 "parser.y"
{ semantic(81); ;
    break;}
case 116:
#line 168 "parser.y"
{ semantic(82); ;
    break;}
case 117:
#line 169 "parser.y"
{ semantic(83); ;
    break;}
case 118:
#line 170 "parser.y"
{ semantic(84); ;
    break;}
case 119:
#line 171 "parser.y"
{ semantic(85); ;
    break;}
case 120:
#line 172 "parser.y"
{ semantic(86); ;
    break;}
case 121:
#line 173 "parser.y"
{ yyerror("ERROR: Not closed bracket for postfix expression"); ;
    break;}
case 122:
#line 174 "parser.y"
{ semantic(87); ;
    break;}
case 123:
#line 175 "parser.y"
{ yyerror("ERROR: Not closed parenthesis for postfix expression"); ;
    break;}
case 124:
#line 176 "parser.y"
{ semantic(88); ;
    break;}
case 125:
#line 177 "parser.y"
{ semantic(89); ;
    break;}
case 126:
#line 178 "parser.y"
{ semantic(90); ;
    break;}
case 127:
#line 179 "parser.y"
{ semantic(91); ;
    break;}
case 128:
#line 180 "parser.y"
{ semantic(92); ;
    break;}
case 129:
#line 181 "parser.y"
{ semantic(93); ;
    break;}
case 130:
#line 182 "parser.y"
{ semantic(94); ;
    break;}
case 131:
#line 183 "parser.y"
{ if (!check_sym_table(prev_yytext, function_name)) {yyerror("ERROR: not defined");} else {semantic(95);} ;
    break;}
case 132:
#line 184 "parser.y"
{ semantic(510); ;
    break;}
case 133:
#line 185 "parser.y"
{ semantic(96); ;
    break;}
case 134:
#line 186 "parser.y"
{ semantic(97); ;
    break;}
case 135:
#line 187 "parser.y"
{ semantic(98); ;
    break;}
case 136:
#line 188 "parser.y"
{ yyerror("ERROR: Not closed parenthesis for primary parameter"); ;
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
#line 189 "parser.y"

void semantic(int n)
{
	// printf("reduced rule number = %d\n", n);
}
