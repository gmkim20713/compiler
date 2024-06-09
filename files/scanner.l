%{
/*lex source for Mini C*/
/*실행을 위해 추가한 부분*/
#include <stdio.h>
#include <stdlib.h>
#include "parser_tab.h"

extern char* prev_yytext;
extern line_number;
extern void yyerror(const char* s);
%}
letter	[a-zA-Z_]
digit	[0-9]
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
"/*"([^*]|"*"+[^*/])*"*"+"/"    		{
                                    			for(int i = 0; i<yyleng; i++)
                                    			{
                                        			if(yytext[i] == '\n')
                                            			line_number++;
                                    			}
                                    			;
                                		} 
"//".*                          		;
{letter}({letter}|{digit})*			{
    							if(yyleng >= 15)
    							{
    								return(TERROR);
    							}
							prev_yytext = (char*)malloc((yyleng + 1) * sizeof(char)); // +1은 NULL 문자를 고려한 것
							strcpy(prev_yytext, yytext);
							printf("In Lex>>%s %s\n", yytext, prev_yytext);
    							return(TIDENT);
						}
[+|-]?([1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]+)?)	return(TNUMBER); //정수 상수
{digit}+"."{digit}+(e[+-]?{digit}+)?		return(TDECIMAL); //실수 상수
{digit}+[A-Za-z0-9_]+			{
							yyerror("ERROR : Illegal digit expression");
							return(TERROR);
					}
"\n"     					line_number++;
[ \t\r]   					;
.                       				{ 
							yyerror("ERROR : Illegal input");
							return(TERROR);
					} 
%%

int yywrap() {
	return 1;
}