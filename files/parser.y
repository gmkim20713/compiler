%{
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
%}


%token TERROR TCOMMENT TIDENT TNUMBER TCONST TELSE TIF TEIF TINT TRETURN TVOID TWHILE
%token TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%token TOR TAND TEQUAL TNOTEQU TGREAT TLESS TGREATE TLESSE TINC TDEC
%token TADD TSUB TMUL TDIV TMOD TNOT
%token TLPAREN TRPAREN TLBRACE TRBRACE TLBRACKET TRBRACKET TCOMMA TSEMICOLON
%token TFLOAT TDECIMAL TNOTASSIGNABLE

%nonassoc LOWER_THAN_ELSE LOWER_THAN_ASSIGN
%nonassoc TELSE TASSIGN TADDASSIGN TSUBASSIGN TMULASSIGN TDIVASSIGN TMODASSIGN
%%
mini_c			: translation_unit				{ semantic(1); printf("%s\n", yytext); };
translation_unit	    	: external_dcl				{ semantic(2); printf("%s\n", yytext); }
			| translation_unit external_dcl			{ semantic(3); printf("%s\n", yytext); };
external_dcl		: function_def				{ semantic(4); printf("%s\n", yytext); }
			| declaration				{ semantic(5); printf("%s\n", yytext); }
			| TIDENT TSEMICOLON			
			| TIDENT error				{ yyerror("Missing semicolon for external declaration"); };
function_def		: function_header compound_st		{ strcpy(function_name, ""); semantic(6); printf("%s\n", yytext); }
			| function_header TSEMICOLON		{ strcpy(function_name, ""); semantic(300); printf("%s\n", yytext); }
			| function_header error			{ yyerror("Missing semicolon for function definition"); };
function_header	        	: dcl_spec function_name formal_param	{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(7);
								  }  };
dcl_spec			: dcl_specifiers				{ strcpy(tmp_name, yytext); semantic(8); printf("%s\n", yytext); };
dcl_specifiers		: dcl_specifier				{ semantic(9); printf("%s\n", yytext); }
			| dcl_specifiers dcl_specifier			{ semantic(10); printf("%s\n", yytext); };
dcl_specifier		: type_qualifier				{ semantic(11); printf("%s\n", yytext); }
			| type_specifier				{ semantic(12); printf("%s\n", yytext); };
type_qualifier		: TCONST					{ tmp_const = 1; semantic(13); printf("%s\n", yytext); };
type_specifier		: TINT					{ strcpy(tmp_type, yytext); semantic(14); printf("%s\n", yytext); }
			| TFLOAT					{ strcpy(tmp_type, yytext); semantic(100); printf("%s\n", yytext); }
			| TVOID					{ strcpy(tmp_type, yytext); semantic(15); printf("%s\n", yytext); };
function_name		: TIDENT					{ strcpy(function_name, tmp_name); strcpy(function_type, tmp_type); semantic(16); printf("%s\n", yytext); };
formal_param		: TLPAREN opt_formal_param TRPAREN	{ semantic(17); printf("%s\n", yytext); }
			| TLPAREN opt_formal_param		{ yyerror("Not closed parenthesis for formal parameter"); };
opt_formal_param 	        	: formal_param_list				{ semantic(18); printf("%s\n", yytext); }
			|					{ semantic(19); printf("%s\n", yytext); };
formal_param_list       	: param_dcl				{ add_param_list(tmp_name, tmp_type); printf("%s, %s\n", tmp_type, tmp_name); semantic(20); }
			| formal_param_list TCOMMA param_dcl	{ add_param_list(tmp_name, tmp_type); semantic(21); }
			| formal_param_list param_dcl		{ yyerror("Missing comma for formal param list"); };
param_dcl		: dcl_spec declarator			{ semantic(22); printf("%s\n", yytext); };
compound_st		: TLBRACE opt_dcl_list opt_stat_list TRBRACE	{ semantic(23); printf("%s\n", yytext); }
			| TLBRACE opt_dcl_list opt_stat_list error	{ yyerror("Not closed brace for compound statement"); };
opt_dcl_list		: declaration_list				{ semantic(24); printf("%s\n", yytext); }
			|					{ semantic(25); printf("%s\n", yytext); };
declaration_list		: declaration				{ semantic(26); printf("%s\n", yytext); }
			| declaration_list declaration			{ semantic(27); printf("%s\n", yytext); };
declaration		: dcl_spec init_dcl_list TSEMICOLON		{ semantic(28); printf("%s\n", yytext); }
			| dcl_spec init_dcl_list error			{ yyerror("Missing semicolon for declaration"); };
init_dcl_list		: init_declarator				{ semantic(29); printf("%s\n", yytext); }
			| init_dcl_list TCOMMA init_declarator		{ semantic(30); printf("%s\n", yytext); }
			| init_dcl_list init_declarator			{ yyerror("Missing comma for init declaration list"); };
init_declarator		: declarator				{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(31);
								  } tmp_const = 0; }
			| declarator TASSIGN TNUMBER		{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(32);
								  } tmp_const = 0; }
			| declarator TASSIGN TDECIMAL		{ if(!add_symbol_table("variable", tmp_name, tmp_type, function_name, tmp_const)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(100);
								  } tmp_const = 0; }
declarator			: TIDENT					{ strcpy(tmp_name, prev_yytext); semantic(33); printf("%s\n", yytext); }
			| TIDENT TLBRACKET opt_number TRBRACKET	{ semantic(34); printf("%s\n", yytext); }
			| TIDENT TLBRACKET opt_number error		{ yyerror("Not closed bracket for declarator"); };
opt_number		: TNUMBER				{ semantic(35); printf("%s\n", yytext); }
			|					{ semantic(36); printf("%s\n", yytext); };
opt_stat_list		: statement_list				{ semantic(37); printf("%s\n", yytext); }
			|					{ semantic(38); printf("%s\n", yytext); };
statement_list		: statement				{ semantic(39); printf("%s\n", yytext); }
			| statement_list statement			{ semantic(40); printf("%s\n", yytext); };
statement		: compound_st				{ semantic(41); printf("%s\n", yytext); }
			| expression_st				{ semantic(42); printf("%s\n", yytext); }
			| if_st					{ semantic(43); printf("%s\n", yytext); }
			| while_st					{ semantic(44); printf("%s\n", yytext); }
			| return_st				{ semantic(45); printf("%s\n", yytext); }
			;
expression_st	    	: opt_expression TSEMICOLON		{ semantic(46); printf("%s\n", yytext); }
			| expression error				{ yyerror("Missing semicolon for expression statement"); };
opt_expression	        	: expression				{ semantic(47); printf("%s\n", yytext); }
			|					{ semantic(48); printf("%s\n", yytext); };
if_st			: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE	{ semantic(49); printf("%s\n", yytext); }
			| TIF TLPAREN expression TRPAREN statement TELSE statement		{ semantic(50); printf("%s\n", yytext); };
while_st		    	: TWHILE TLPAREN expression TRPAREN statement			{ semantic(51); printf("%s\n", yytext); }
			| TWHILE TLPAREN expression error statement	{ yyerror("Not closed parenthesis for while statement"); }
			| TWHILE TLPAREN TRPAREN statement	{ yyerror("Condition doesn't exists for while statment"); };
return_st			: TRETURN opt_expression TSEMICOLON	{ semantic(52); printf("%s\n", yytext); }
			| TRETURN opt_expression error		{ yyerror("Missing semicolon for return statement"); };
expression		: assignment_exp 				{ semantic(53); printf("%s\n", yytext); }; 
assignment_exp		: logical_or_exp 				{ semantic(54); }
			| assignable_exp				{ semantic(500); }
			| not_assignable_exp				;
assignable_exp		: left_hand TASSIGN assignment_exp		{ semantic(501); }
			| left_hand TADDASSIGN assignment_exp		{ semantic(502); }
			| left_hand TSUBASSIGN assignment_exp		{ semantic(503); }
			| left_hand TMULASSIGN assignment_exp		{ semantic(504); }
			| left_hand TDIVASSIGN assignment_exp		{ semantic(505); }
			| left_hand TMODASSIGN assignment_exp	{ semantic(506); }
			;
not_assignable_exp		: TNUMBER TASSIGN assignment_exp		{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); }
			| TNUMBER TADDASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); }
			| TNUMBER TSUBASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); }
			| TNUMBER TMULASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); printf("%s\n", yytext); }
			| TNUMBER TDIVASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number");; printf("%s\n", yytext); }
			| TNUMBER TMODASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number");; printf("%s\n", yytext); }
			| TDECIMAL TASSIGN assignment_exp		{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); }
			| TDECIMAL TADDASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); }
			| TDECIMAL TSUBASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); }
			| TDECIMAL TMULASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); }
			| TDECIMAL TDIVASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); }
			| TDECIMAL TMODASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); printf("%s\n", yytext); }
logical_or_exp   	    	: logical_and_exp         			{ semantic(61); printf("%s\n", yytext); }
   			| logical_or_exp TOR logical_and_exp   	{ semantic(62); printf("%s\n", yytext); };
logical_and_exp   	        	: equality_exp         			{ semantic(63); printf("%s\n", yytext); }
     			| logical_and_exp TAND equality_exp   	{ semantic(64); printf("%s\n", yytext); };
equality_exp   		: relational_exp         			{ semantic(65); printf("%s\n", yytext); }
      			| equality_exp TEQUAL relational_exp   	{ semantic(66); printf("%s\n", yytext); }
     			| equality_exp TNOTEQU relational_exp   	{ semantic(67); printf("%s\n", yytext); };
relational_exp             	: additive_exp                             		{ semantic(68); printf("%s\n", yytext); }
      			| relational_exp TGREAT additive_exp   	{ semantic(69); printf("%s\n", yytext); }
      			| relational_exp TLESS additive_exp   		{ semantic(70); printf("%s\n", yytext); }
      			| relational_exp TGREATE additive_exp   	{ semantic(71); printf("%s\n", yytext); }
      			| relational_exp TLESSE additive_exp   		{ semantic(72); printf("%s\n", yytext); };
additive_exp   	    	: multiplicative_exp         			{ semantic(73); printf("%s\n", yytext); }
      			| additive_exp TADD multiplicative_exp   	{ semantic(74); printf("%s\n", yytext); }
      			| additive_exp TSUB multiplicative_exp   	{ semantic(75); printf("%s\n", yytext); };
multiplicative_exp          	: unary_exp         				{ semantic(76); printf("%s\n", yytext); }
     			| multiplicative_exp TMUL unary_exp      	{ semantic(77); printf("%s\n", yytext); }
      			| multiplicative_exp TDIV unary_exp   		{ semantic(78); printf("%s\n", yytext); }
      			| multiplicative_exp TMOD unary_exp   	{ semantic(79); printf("%s\n", yytext); };
unary_exp   		: postfix_exp         			{ semantic(80); printf("%s\n", yytext); }
      			| TSUB unary_exp         			{ semantic(81); printf("%s\n", yytext); }
      			| TNOT unary_exp        			{ semantic(82); printf("%s\n", yytext); }
      			| TINC unary_exp         			{ semantic(83); printf("%s\n", yytext); }
      			| TDEC unary_exp         			{ semantic(84); printf("%s\n", yytext); };
postfix_exp 		: primary_exp 				{ semantic(85); printf("%s\n", yytext); }
			| postfix_exp TLBRACKET expression TRBRACKET 	{ semantic(86); printf("%s\n", yytext); }
			| postfix_exp TLBRACKET expression error		{ yyerror("Not closed bracket for postfix expression"); }
			| postfix_exp TLPAREN opt_actual_param TRPAREN	{ semantic(87); printf("%s\n", yytext); }
			| postfix_exp TLPAREN opt_actual_param error		{ yyerror("Not closed parenthesis for postfix expression"); };
			| postfix_exp TINC 				{ semantic(88); printf("%s\n", yytext); }
			| postfix_exp TDEC				{ semantic(89); printf("%s\n", yytext); };
opt_actual_param 	        	: actual_param 				{ semantic(90); printf("%s\n", yytext); }
			| 					{ semantic(91); printf("%s\n", yytext); };
actual_param 		: actual_param_list 				{ semantic(92); printf("%s\n", yytext); };
actual_param_list 	        	: assignment_exp 				{ semantic(93); printf("%s\n", yytext); }
			| actual_param_list TCOMMA assignment_exp 	{ semantic(94); printf("%s\n", yytext); };
left_hand			: TIDENT					{ if (!check_sym_table(prev_yytext, function_name)) {yyerror("ERROR: not exist");} else {semantic(95);} printf("%s\n", yytext); };
primary_exp 		: left_hand				{ semantic(510); }
			| TNUMBER 				{ semantic(96); printf("%s\n", yytext); }
			| TDECIMAL				{ semantic(97); printf("%s\n", yytext); }
			| TLPAREN expression TRPAREN 		{ semantic(98); printf("%s\n", yytext); }
			| TLPAREN expression error			{ yyerror("Not closed parenthesis for primary parameter"); };
%%
void semantic(int n)
{
	printf("reduced rule number = %d\n", n);
}