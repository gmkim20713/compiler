
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
#define	LOWER_THAN_ASSIGN	304

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
int tmp_const;

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



#define	YYFINAL		205
#define	YYFLAG		-32768
#define	YYNTBASE	50

#define YYTRANSLATE(x) ((unsigned)(x) <= 304 ? yytranslate[x] : 98)

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
    46,    47,    48,    49
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
   203,   205,   207,   211,   215,   219,   223,   227,   231,   235,
   239,   243,   247,   251,   255,   259,   263,   267,   271,   275,
   279,   281,   285,   287,   291,   293,   297,   301,   303,   307,
   311,   315,   319,   321,   325,   329,   331,   335,   339,   343,
   345,   348,   351,   354,   357,   359,   364,   369,   374,   379,
   382,   385,   387,   388,   390,   392,   396,   398,   400,   402,
   404,   408
};

static const short yyrhs[] = {    51,
     0,    52,     0,    51,    52,     0,    53,     0,    68,     0,
     5,    44,     0,     5,     1,     0,    54,    65,     0,    54,
    44,     0,    54,     1,     0,    55,    60,    61,     0,    56,
     0,    57,     0,    56,    57,     0,    58,     0,    59,     0,
     7,     0,    11,     0,    45,     0,    13,     0,     5,     0,
    37,    62,    38,     0,    37,    62,     0,    63,     0,     0,
    64,     0,    63,    43,    64,     0,    63,    64,     0,    55,
    71,     0,    39,    66,    73,    40,     0,    39,    66,    73,
     1,     0,    67,     0,     0,    68,     0,    67,    68,     0,
    55,    69,    44,     0,    55,    69,     1,     0,    70,     0,
    69,    43,    70,     0,    69,    70,     0,    71,     0,    71,
    15,     6,     0,    71,    15,    46,     0,     5,     0,     5,
    41,    72,    42,     0,     5,    41,    72,     1,     0,     6,
     0,     0,    74,     0,     0,    75,     0,    74,    75,     0,
    65,     0,    76,     0,    78,     0,    79,     0,    80,     0,
    77,    44,     0,    81,     1,     0,    81,     0,     0,     9,
    37,    81,    38,    75,     0,     9,    37,    81,    38,    75,
     8,    75,     0,    14,    37,    81,    38,    75,     0,    14,
    37,    81,     1,    75,     0,    14,    37,    38,    75,     0,
    12,    77,    44,     0,    12,    77,     1,     0,    82,     0,
    85,     0,    83,     0,    84,     0,    96,    15,    82,     0,
    96,    16,    82,     0,    96,    17,    82,     0,    96,    18,
    82,     0,    96,    19,    82,     0,    96,    20,    82,     0,
     6,    15,    82,     0,     6,    16,    82,     0,     6,    17,
    82,     0,     6,    18,    82,     0,     6,    19,    82,     0,
     6,    20,    82,     0,    46,    15,    82,     0,    46,    16,
    82,     0,    46,    17,    82,     0,    46,    18,    82,     0,
    46,    19,    82,     0,    46,    20,    82,     0,    86,     0,
    85,    21,    86,     0,    87,     0,    86,    22,    87,     0,
    88,     0,    87,    23,    88,     0,    87,    24,    88,     0,
    89,     0,    88,    25,    89,     0,    88,    26,    89,     0,
    88,    27,    89,     0,    88,    28,    89,     0,    90,     0,
    89,    31,    90,     0,    89,    32,    90,     0,    91,     0,
    90,    33,    91,     0,    90,    34,    91,     0,    90,    35,
    91,     0,    92,     0,    32,    91,     0,    36,    91,     0,
    29,    91,     0,    30,    91,     0,    97,     0,    92,    41,
    81,    42,     0,    92,    41,    81,     1,     0,    92,    37,
    93,    38,     0,    92,    37,    93,     1,     0,    92,    29,
     0,    92,    30,     0,    94,     0,     0,    95,     0,    82,
     0,    95,    43,    82,     0,     5,     0,    96,     0,     6,
     0,    46,     0,    37,    81,    38,     0,    37,    81,     1,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    80,    85,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,   103,   105,   106,   107,
   108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
   118,   119,   120,   121,   122,   123,   124,   125,   127,   128,
   129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180
};

static const char * const yytname[] = {   "$","error","$undefined.","TERROR",
"TCOMMENT","TIDENT","TNUMBER","TCONST","TELSE","TIF","TEIF","TINT","TRETURN",
"TVOID","TWHILE","TASSIGN","TADDASSIGN","TSUBASSIGN","TMULASSIGN","TDIVASSIGN",
"TMODASSIGN","TOR","TAND","TEQUAL","TNOTEQU","TGREAT","TLESS","TGREATE","TLESSE",
"TINC","TDEC","TADD","TSUB","TMUL","TDIV","TMOD","TNOT","TLPAREN","TRPAREN",
"TLBRACE","TRBRACE","TLBRACKET","TRBRACKET","TCOMMA","TSEMICOLON","TFLOAT","TDECIMAL",
"TNOTASSIGNABLE","LOWER_THAN_ELSE","LOWER_THAN_ASSIGN","mini_c","translation_unit",
"external_dcl","function_def","function_header","dcl_spec","dcl_specifiers",
"dcl_specifier","type_qualifier","type_specifier","function_name","formal_param",
"opt_formal_param","formal_param_list","param_dcl","compound_st","opt_dcl_list",
"declaration_list","declaration","init_dcl_list","init_declarator","declarator",
"opt_number","opt_stat_list","statement_list","statement","expression_st","opt_expression",
"if_st","while_st","return_st","expression","assignment_exp","assignable_exp",
"not_assignable_exp","logical_or_exp","logical_and_exp","equality_exp","relational_exp",
"additive_exp","multiplicative_exp","unary_exp","postfix_exp","opt_actual_param",
"actual_param","actual_param_list","left_hand","primary_exp",""
};
#endif

static const short yyr1[] = {     0,
    50,    51,    51,    52,    52,    52,    52,    53,    53,    53,
    54,    55,    56,    56,    57,    57,    58,    59,    59,    59,
    60,    61,    61,    62,    62,    63,    63,    63,    64,    65,
    65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
    70,    70,    70,    71,    71,    71,    72,    72,    73,    73,
    74,    74,    75,    75,    75,    75,    75,    76,    76,    77,
    77,    78,    78,    79,    79,    79,    80,    80,    81,    82,
    82,    82,    83,    83,    83,    83,    83,    83,    84,    84,
    84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
    85,    85,    86,    86,    87,    87,    87,    88,    88,    88,
    88,    88,    89,    89,    89,    90,    90,    90,    90,    91,
    91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
    92,    93,    93,    94,    95,    95,    96,    97,    97,    97,
    97,    97
};

static const short yyr2[] = {     0,
     1,     1,     2,     1,     1,     2,     2,     2,     2,     2,
     3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
     1,     3,     2,     1,     0,     1,     3,     2,     2,     4,
     4,     1,     0,     1,     2,     3,     3,     1,     3,     2,
     1,     3,     3,     1,     4,     4,     1,     0,     1,     0,
     1,     2,     1,     1,     1,     1,     1,     2,     2,     1,
     0,     5,     7,     5,     5,     4,     3,     3,     1,     1,
     1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
     3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
     2,     2,     2,     2,     1,     4,     4,     4,     4,     2,
     2,     1,     0,     1,     1,     3,     1,     1,     1,     1,
     3,     3
};

static const short yydefact[] = {     0,
     0,    17,    18,    20,    19,     1,     2,     4,     0,     0,
    12,    13,    15,    16,     5,     7,     6,     3,    10,    33,
     9,     8,    44,     0,     0,    38,    41,    14,     0,    50,
    32,    34,    48,    25,    11,    37,    44,     0,    36,    40,
     0,   127,   129,     0,    61,     0,     0,     0,     0,     0,
     0,   130,    53,     0,    49,    51,    54,     0,    55,    56,
    57,     0,    69,    71,    72,    70,    91,    93,    95,    98,
   103,   106,   110,   128,   115,    35,    47,     0,     0,    23,
    24,    26,    39,    42,    43,     0,     0,     0,     0,     0,
     0,     0,     0,    60,     0,   129,   130,   113,   128,   114,
   111,   112,     0,     0,     0,     0,     0,     0,     0,    31,
    30,    52,    58,    59,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   120,   121,   123,
     0,     0,     0,     0,     0,     0,     0,    46,    45,    29,
    22,     0,    28,    79,    80,    81,    82,    83,    84,     0,
    68,    67,    61,     0,   132,   131,    85,    86,    87,    88,
    89,    90,    92,    94,    96,    97,    99,   100,   101,   102,
   104,   105,   107,   108,   109,   125,     0,   122,   124,     0,
    73,    74,    75,    76,    77,    78,    27,    61,    66,    61,
    61,   119,   118,     0,   117,   116,    62,    65,    64,   126,
    61,    63,     0,     0,     0
};

static const short yydefgoto[] = {   203,
     6,     7,     8,     9,    79,    11,    12,    13,    14,    24,
    35,    80,    81,    82,    53,    30,    31,    15,    25,    26,
    27,    78,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,   177,   178,   179,    74,    75
};

static const short yypact[] = {    25,
    15,-32768,-32768,-32768,-32768,    25,-32768,-32768,    14,    41,
    55,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    55,
-32768,-32768,     0,    26,    28,-32768,    52,-32768,    84,    85,
    55,-32768,    86,    55,-32768,-32768,    54,    84,-32768,-32768,
    50,-32768,   191,    71,   148,    76,   168,   168,   168,   168,
   148,   206,-32768,    34,    85,-32768,-32768,    88,-32768,-32768,
-32768,    16,-32768,-32768,-32768,    99,   112,    19,   164,     8,
   126,-32768,    82,   212,-32768,-32768,-32768,    13,    84,   102,
   175,-32768,-32768,-32768,-32768,   148,   148,   148,   148,   148,
   148,   148,    17,-32768,   120,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    63,   148,   148,   148,   148,   148,   148,-32768,
-32768,-32768,-32768,-32768,   168,   168,   168,   168,   168,   168,
   168,   168,   168,   168,   168,   168,   168,-32768,-32768,   148,
   148,   148,   148,   148,   148,   148,   148,-32768,-32768,-32768,
-32768,    55,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   113,
-32768,-32768,   133,    64,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   112,    19,   164,   164,     8,     8,     8,     8,
   126,   126,-32768,-32768,-32768,-32768,    68,-32768,    94,    33,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   133,-32768,   133,
   133,-32768,-32768,   148,-32768,-32768,   140,-32768,-32768,-32768,
   133,-32768,   155,   167,-32768
};

static const short yypgoto[] = {-32768,
-32768,   158,-32768,-32768,   110,-32768,   157,-32768,-32768,-32768,
-32768,-32768,-32768,   -69,   162,-32768,-32768,    87,-32768,     6,
    96,-32768,-32768,-32768,   -55,-32768,   131,-32768,-32768,-32768,
   -38,   -85,-32768,-32768,-32768,    66,    67,    10,   114,    20,
   -22,-32768,-32768,-32768,-32768,   -39,-32768
};


#define	YYLAST		236


static const short yytable[] = {   112,
   144,   145,   146,   147,   148,   149,    94,    99,    99,    99,
    99,   143,   103,   138,    19,    16,   114,   151,   157,   158,
   159,   160,   161,   162,    98,   100,   101,   102,    36,     1,
    40,     2,    37,   195,   110,     3,   -21,     4,   123,   124,
    33,   117,   118,    83,   176,    23,   181,   182,   183,   184,
   185,   186,    20,   150,   139,    84,   154,    21,    17,   -60,
   152,     2,    34,   155,   190,     3,    41,     4,   192,     5,
    38,    39,   187,   111,   196,    99,    99,    99,    99,    99,
    99,    99,    99,    99,    99,    99,    99,    99,    37,    42,
    43,    77,   180,    44,    33,    85,    45,   189,    46,     5,
   156,   191,   173,   174,   175,   193,    32,    92,   200,    10,
   128,   129,    95,    47,    48,    10,    49,    76,   130,   115,
    50,    51,   131,    20,    42,    43,   165,   166,   -61,    29,
    52,   113,   197,   116,   198,   199,   194,    42,    43,   141,
    29,    44,   171,   172,    45,   202,    46,   201,    47,    48,
   188,    49,    42,    43,   204,    50,    51,   153,   125,   126,
   127,    47,    48,    18,    49,    52,   205,    28,    50,    51,
    22,    20,    42,    96,   140,    93,    47,    48,    52,    49,
   163,     2,   164,    50,    51,     3,     0,     4,   119,   120,
   121,   122,     0,    52,     0,     0,    47,    48,     0,    49,
     0,     0,     0,    50,    51,    86,    87,    88,    89,    90,
    91,     0,     0,    97,     0,     0,     0,   142,     0,     5,
   104,   105,   106,   107,   108,   109,   132,   133,   134,   135,
   136,   137,   167,   168,   169,   170
};

static const short yycheck[] = {    55,
    86,    87,    88,    89,    90,    91,    45,    47,    48,    49,
    50,    81,    51,     1,     1,     1,     1,     1,   104,   105,
   106,   107,   108,   109,    47,    48,    49,    50,     1,     5,
    25,     7,     5,     1,     1,    11,    37,    13,    31,    32,
    41,    23,    24,    38,   130,     5,   132,   133,   134,   135,
   136,   137,    39,    92,    42,     6,    95,    44,    44,    44,
    44,     7,    37,     1,     1,    11,    15,    13,     1,    45,
    43,    44,   142,    40,    42,   115,   116,   117,   118,   119,
   120,   121,   122,   123,   124,   125,   126,   127,     5,     5,
     6,     6,   131,     9,    41,    46,    12,   153,    14,    45,
    38,    38,   125,   126,   127,    38,    20,    37,   194,     0,
    29,    30,    37,    29,    30,     6,    32,    31,    37,    21,
    36,    37,    41,    39,     5,     6,   117,   118,    44,    20,
    46,    44,   188,    22,   190,   191,    43,     5,     6,    38,
    31,     9,   123,   124,    12,   201,    14,     8,    29,    30,
    38,    32,     5,     6,     0,    36,    37,    38,    33,    34,
    35,    29,    30,     6,    32,    46,     0,    11,    36,    37,
     9,    39,     5,     6,    79,    45,    29,    30,    46,    32,
   115,     7,   116,    36,    37,    11,    -1,    13,    25,    26,
    27,    28,    -1,    46,    -1,    -1,    29,    30,    -1,    32,
    -1,    -1,    -1,    36,    37,    15,    16,    17,    18,    19,
    20,    -1,    -1,    46,    -1,    -1,    -1,    43,    -1,    45,
    15,    16,    17,    18,    19,    20,    15,    16,    17,    18,
    19,    20,   119,   120,   121,   122
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
#line 31 "parser.y"
{ semantic(1); printf("%s\n", yytext); ;
    break;}
case 2:
#line 32 "parser.y"
{ semantic(2); printf("%s\n", yytext); ;
    break;}
case 3:
#line 33 "parser.y"
{ semantic(3); printf("%s\n", yytext); ;
    break;}
case 4:
#line 34 "parser.y"
{ semantic(4); printf("%s\n", yytext); ;
    break;}
case 5:
#line 35 "parser.y"
{ semantic(5); printf("%s\n", yytext); ;
    break;}
case 7:
#line 37 "parser.y"
{ yyerror("Missing semicolon for external declaration"); ;
    break;}
case 8:
#line 38 "parser.y"
{ strcpy(function_name, ""); semantic(6); printf("%s\n", yytext); ;
    break;}
case 9:
#line 39 "parser.y"
{ strcpy(function_name, ""); semantic(300); printf("%s\n", yytext); ;
    break;}
case 10:
#line 40 "parser.y"
{ yyerror("Missing semicolon for function definition"); ;
    break;}
case 11:
#line 41 "parser.y"
{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(7);
								  }  ;
    break;}
case 12:
#line 46 "parser.y"
{ strcpy(tmp_name, yytext); semantic(8); printf("%s\n", yytext); ;
    break;}
case 13:
#line 47 "parser.y"
{ semantic(9); printf("%s\n", yytext); ;
    break;}
case 14:
#line 48 "parser.y"
{ semantic(10); printf("%s\n", yytext); ;
    break;}
case 15:
#line 49 "parser.y"
{ semantic(11); printf("%s\n", yytext); ;
    break;}
case 16:
#line 50 "parser.y"
{ semantic(12); printf("%s\n", yytext); ;
    break;}
case 17:
#line 51 "parser.y"
{ tmp_const = 1; semantic(13); printf("%s\n", yytext); ;
    break;}
case 18:
#line 52 "parser.y"
{ strcpy(tmp_type, yytext); semantic(14); printf("%s\n", yytext); ;
    break;}
case 19:
#line 53 "parser.y"
{ strcpy(tmp_type, yytext); semantic(100); printf("%s\n", yytext); ;
    break;}
case 20:
#line 54 "parser.y"
{ strcpy(tmp_type, yytext); semantic(15); printf("%s\n", yytext); ;
    break;}
case 21:
#line 55 "parser.y"
{ strcpy(function_name, tmp_name); strcpy(function_type, tmp_type); semantic(16); printf("%s\n", yytext); ;
    break;}
case 22:
#line 56 "parser.y"
{ semantic(17); printf("%s\n", yytext); ;
    break;}
case 23:
#line 57 "parser.y"
{ yyerror("Not closed parenthesis for formal parameter"); ;
    break;}
case 24:
#line 58 "parser.y"
{ semantic(18); printf("%s\n", yytext); ;
    break;}
case 25:
#line 59 "parser.y"
{ semantic(19); printf("%s\n", yytext); ;
    break;}
case 26:
#line 60 "parser.y"
{ add_param_list(tmp_name, tmp_type); printf("%s, %s\n", tmp_type, tmp_name); semantic(20); ;
    break;}
case 27:
#line 61 "parser.y"
{ add_param_list(tmp_name, tmp_type); semantic(21); ;
    break;}
case 28:
#line 62 "parser.y"
{ yyerror("Missing comma for formal param list"); ;
    break;}
case 29:
#line 63 "parser.y"
{ semantic(22); printf("%s\n", yytext); ;
    break;}
case 30:
#line 64 "parser.y"
{ semantic(23); printf("%s\n", yytext); ;
    break;}
case 31:
#line 65 "parser.y"
{ yyerror("Not closed brace for compound statement"); ;
    break;}
case 32:
#line 66 "parser.y"
{ semantic(24); printf("%s\n", yytext); ;
    break;}
case 33:
#line 67 "parser.y"
{ semantic(25); printf("%s\n", yytext); ;
    break;}
case 34:
#line 68 "parser.y"
{ semantic(26); printf("%s\n", yytext); ;
    break;}
case 35:
#line 69 "parser.y"
{ semantic(27); printf("%s\n", yytext); ;
    break;}
case 36:
#line 70 "parser.y"
{ semantic(28); printf("%s\n", yytext); ;
    break;}
case 37:
#line 71 "parser.y"
{ yyerror("Missing semicolon for declaration"); ;
    break;}
case 38:
#line 72 "parser.y"
{ semantic(29); printf("%s\n", yytext); ;
    break;}
case 39:
#line 73 "parser.y"
{ semantic(30); printf("%s\n", yytext); ;
    break;}
case 40:
#line 74 "parser.y"
{ yyerror("Missing comma for init declaration list"); ;
    break;}
case 41:
#line 75 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(31);
								  } tmp_const = 0; ;
    break;}
case 42:
#line 80 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(32);
								  } tmp_const = 0; ;
    break;}
case 43:
#line 85 "parser.y"
{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(100);
								  } tmp_const = 0; ;
    break;}
case 44:
#line 90 "parser.y"
{ strcpy(tmp_name, prev_yytext); semantic(33); printf("%s\n", yytext); ;
    break;}
case 45:
#line 91 "parser.y"
{ semantic(34); printf("%s\n", yytext); ;
    break;}
case 46:
#line 92 "parser.y"
{ yyerror("Not closed bracket for declarator"); ;
    break;}
case 47:
#line 93 "parser.y"
{ semantic(35); printf("%s\n", yytext); ;
    break;}
case 48:
#line 94 "parser.y"
{ semantic(36); printf("%s\n", yytext); ;
    break;}
case 49:
#line 95 "parser.y"
{ semantic(37); printf("%s\n", yytext); ;
    break;}
case 50:
#line 96 "parser.y"
{ semantic(38); printf("%s\n", yytext); ;
    break;}
case 51:
#line 97 "parser.y"
{ semantic(39); printf("%s\n", yytext); ;
    break;}
case 52:
#line 98 "parser.y"
{ semantic(40); printf("%s\n", yytext); ;
    break;}
case 53:
#line 99 "parser.y"
{ semantic(41); printf("%s\n", yytext); ;
    break;}
case 54:
#line 100 "parser.y"
{ semantic(42); printf("%s\n", yytext); ;
    break;}
case 55:
#line 101 "parser.y"
{ semantic(43); printf("%s\n", yytext); ;
    break;}
case 56:
#line 102 "parser.y"
{ semantic(44); printf("%s\n", yytext); ;
    break;}
case 57:
#line 103 "parser.y"
{ semantic(45); printf("%s\n", yytext); ;
    break;}
case 58:
#line 105 "parser.y"
{ semantic(46); printf("%s\n", yytext); ;
    break;}
case 59:
#line 106 "parser.y"
{ yyerror("Missing semicolon for expression statement"); ;
    break;}
case 60:
#line 107 "parser.y"
{ semantic(47); printf("%s\n", yytext); ;
    break;}
case 61:
#line 108 "parser.y"
{ semantic(48); printf("%s\n", yytext); ;
    break;}
case 62:
#line 109 "parser.y"
{ semantic(49); printf("%s\n", yytext); ;
    break;}
case 63:
#line 110 "parser.y"
{ semantic(50); printf("%s\n", yytext); ;
    break;}
case 64:
#line 111 "parser.y"
{ semantic(51); printf("%s\n", yytext); ;
    break;}
case 65:
#line 112 "parser.y"
{ yyerror("Not closed parenthesis for while statement"); ;
    break;}
case 66:
#line 113 "parser.y"
{ yyerror("Condition doesn't exists for while statment"); ;
    break;}
case 67:
#line 114 "parser.y"
{ semantic(52); printf("%s\n", yytext); ;
    break;}
case 68:
#line 115 "parser.y"
{ yyerror("Missing semicolon for return statement"); ;
    break;}
case 69:
#line 116 "parser.y"
{ semantic(53); printf("%s\n", yytext); ;
    break;}
case 70:
#line 117 "parser.y"
{ semantic(54); ;
    break;}
case 71:
#line 118 "parser.y"
{ semantic(500); ;
    break;}
case 73:
#line 120 "parser.y"
{ semantic(501); ;
    break;}
case 74:
#line 121 "parser.y"
{ semantic(502); ;
    break;}
case 75:
#line 122 "parser.y"
{ semantic(503); ;
    break;}
case 76:
#line 123 "parser.y"
{ semantic(504); ;
    break;}
case 77:
#line 124 "parser.y"
{ semantic(505); ;
    break;}
case 78:
#line 125 "parser.y"
{ semantic(506); ;
    break;}
case 79:
#line 127 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); ;
    break;}
case 80:
#line 128 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); ;
    break;}
case 81:
#line 129 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); ;
    break;}
case 82:
#line 130 "parser.y"
{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); ;
    break;}
case 83:
#line 131 "parser.y"
{ yyerror("ERROR: Left side cannot be a number");; printf("%s\n", yytext); ;
    break;}
case 84:
#line 132 "parser.y"
{ yyerror("ERROR: Left side cannot be a number");; printf("%s\n", yytext); ;
    break;}
case 85:
#line 133 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); ;
    break;}
case 86:
#line 134 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); ;
    break;}
case 87:
#line 135 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); ;
    break;}
case 88:
#line 136 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); ;
    break;}
case 89:
#line 137 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); ;
    break;}
case 90:
#line 138 "parser.y"
{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); ;
    break;}
case 91:
#line 139 "parser.y"
{ semantic(61); printf("%s\n", yytext); ;
    break;}
case 92:
#line 140 "parser.y"
{ semantic(62); printf("%s\n", yytext); ;
    break;}
case 93:
#line 141 "parser.y"
{ semantic(63); printf("%s\n", yytext); ;
    break;}
case 94:
#line 142 "parser.y"
{ semantic(64); printf("%s\n", yytext); ;
    break;}
case 95:
#line 143 "parser.y"
{ semantic(65); printf("%s\n", yytext); ;
    break;}
case 96:
#line 144 "parser.y"
{ semantic(66); printf("%s\n", yytext); ;
    break;}
case 97:
#line 145 "parser.y"
{ semantic(67); printf("%s\n", yytext); ;
    break;}
case 98:
#line 146 "parser.y"
{ semantic(68); printf("%s\n", yytext); ;
    break;}
case 99:
#line 147 "parser.y"
{ semantic(69); printf("%s\n", yytext); ;
    break;}
case 100:
#line 148 "parser.y"
{ semantic(70); printf("%s\n", yytext); ;
    break;}
case 101:
#line 149 "parser.y"
{ semantic(71); printf("%s\n", yytext); ;
    break;}
case 102:
#line 150 "parser.y"
{ semantic(72); printf("%s\n", yytext); ;
    break;}
case 103:
#line 151 "parser.y"
{ semantic(73); printf("%s\n", yytext); ;
    break;}
case 104:
#line 152 "parser.y"
{ semantic(74); printf("%s\n", yytext); ;
    break;}
case 105:
#line 153 "parser.y"
{ semantic(75); printf("%s\n", yytext); ;
    break;}
case 106:
#line 154 "parser.y"
{ semantic(76); printf("%s\n", yytext); ;
    break;}
case 107:
#line 155 "parser.y"
{ semantic(77); printf("%s\n", yytext); ;
    break;}
case 108:
#line 156 "parser.y"
{ semantic(78); printf("%s\n", yytext); ;
    break;}
case 109:
#line 157 "parser.y"
{ semantic(79); printf("%s\n", yytext); ;
    break;}
case 110:
#line 158 "parser.y"
{ semantic(80); printf("%s\n", yytext); ;
    break;}
case 111:
#line 159 "parser.y"
{ semantic(81); printf("%s\n", yytext); ;
    break;}
case 112:
#line 160 "parser.y"
{ semantic(82); printf("%s\n", yytext); ;
    break;}
case 113:
#line 161 "parser.y"
{ semantic(83); printf("%s\n", yytext); ;
    break;}
case 114:
#line 162 "parser.y"
{ semantic(84); printf("%s\n", yytext); ;
    break;}
case 115:
#line 163 "parser.y"
{ semantic(85); printf("%s\n", yytext); ;
    break;}
case 116:
#line 164 "parser.y"
{ semantic(86); printf("%s\n", yytext); ;
    break;}
case 117:
#line 165 "parser.y"
{ yyerror("Not closed bracket for postfix expression"); ;
    break;}
case 118:
#line 166 "parser.y"
{ semantic(87); printf("%s\n", yytext); ;
    break;}
case 119:
#line 167 "parser.y"
{ yyerror("Not closed parenthesis for postfix expression"); ;
    break;}
case 120:
#line 168 "parser.y"
{ semantic(88); printf("%s\n", yytext); ;
    break;}
case 121:
#line 169 "parser.y"
{ semantic(89); printf("%s\n", yytext); ;
    break;}
case 122:
#line 170 "parser.y"
{ semantic(90); printf("%s\n", yytext); ;
    break;}
case 123:
#line 171 "parser.y"
{ semantic(91); printf("%s\n", yytext); ;
    break;}
case 124:
#line 172 "parser.y"
{ semantic(92); printf("%s\n", yytext); ;
    break;}
case 125:
#line 173 "parser.y"
{ semantic(93); printf("%s\n", yytext); ;
    break;}
case 126:
#line 174 "parser.y"
{ semantic(94); printf("%s\n", yytext); ;
    break;}
case 127:
#line 175 "parser.y"
{ if (!check_sym_table(prev_yytext, function_name)) {yyerror("ERROR: not exist");} else {semantic(95);} printf("%s\n", yytext); ;
    break;}
case 128:
#line 176 "parser.y"
{ semantic(510); ;
    break;}
case 129:
#line 177 "parser.y"
{ semantic(96); printf("%s\n", yytext); ;
    break;}
case 130:
#line 178 "parser.y"
{ semantic(97); printf("%s\n", yytext); ;
    break;}
case 131:
#line 179 "parser.y"
{ semantic(98); printf("%s\n", yytext); ;
    break;}
case 132:
#line 180 "parser.y"
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
#line 181 "parser.y"

void semantic(int n)
{
	printf("reduced rule number = %d\n", n);
}