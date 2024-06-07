%{
/*lex source for Mini C*/
/*실행을 위해 추가한 부분*/
#include <stdio.h>
#include <stdlib.h>
#include "parser_tab.h"
char* previous_text;
%}
%%
"const"		return(TCONST);
"else"		return(TELSE);
"if"		return(TIF);
"endif"		return(TEIF);
"int"		return(TINT);
"float"		return (TFLOAT);
"return"		return(TRETURN);
"void"		return(TVOID);
"while"		return(TWHILE);
"=="		return(TEQUAL);
"!="		return(TNOTEQU);
"<"		return(TLESS);
"<="		return(TLESSE);
">"		return(TGREAT);
">="		return(TGREATE);
"&&"		return(TAND);
"||"		return(TOR);
"++"		return(TINC);
"--"		return(TDEC);
"="		return(TASSIGN);
"+="		return(TADDASSIGN);
"-="		return(TSUBASSIGN);
"*="		return(TMULASSIGN);
"/="		return(TDIVASSIGN);
"%="		return(TMODASSIGN);
"+"		return(TADD);
"-"		return(TSUB);
"*"		return(TMUL);
"/"		return(TDIV);
"%"		return(TMOD);
"!"		return(TNOT);
"("		return(TLPAREN);
")"		return(TRPAREN);
"{"		return(TLBRACE);
"}"		return(TRBRACE);
"["		return(TLBRACKET);
"]"		return(TRBRACKET);
","		return(TCOMMA);
";"		return(TSEMICOLON);
[A-Za-z_][A-Za-z0-9_]*		{return(TIDENT);}
[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)?	return(TNUMBER);
[0-9]+"."[0-9]+(e[+-]?[0-9]+)?		return(TDECIMAL);
"/*"([^*]|\*+[^*/])*\**"*"	;
"//".*	;
[ \t\n] ;
.		return(yytext[0]);
%%

int yywrap() {
	return 1;
}