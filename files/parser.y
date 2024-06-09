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
mini_c			: translation_unit				{ semantic(1); };
translation_unit	    	: external_dcl				{ semantic(2); }
			| translation_unit external_dcl		{ semantic(3); };
external_dcl		: function_def				{ semantic(4); }
			| declaration				{ semantic(5); }
			| TIDENT TSEMICOLON			
			| TIDENT error				{ yyerror("Missing semicolon for external declaration"); };
function_def		: function_header compound_st		{ strcpy(function_name, ""); semantic(6); }
			| short_function_header TSEMICOLON		{ strcpy(function_name, ""); semantic(300); }
			| function_header error			{ yyerror("Missing semicolon for function definition"); };
short_function_header	: dcl_spec function_name short_formal_param	{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(7);
								  }  };
short_formal_param		: TLPAREN short_opt_formal_param TRPAREN	{};
short_opt_formal_param	: type_specifier				{ add_param_list("(null}", tmp_type); }
			| type_specifier TCOMMA short_opt_formal_param	{ add_param_list("(null}", tmp_type); };
function_header	        	: dcl_spec function_name formal_param	{ if(!add_symbol_table("function", function_name, function_type, function_name)) {
								    yyerror("ERROR : already exists");
								  } else {
								    semantic(7);
								  }  };
dcl_spec			: dcl_specifiers				{ strcpy(tmp_name, yytext); semantic(8); };
dcl_specifiers		: dcl_specifier				{ semantic(9); }
			| dcl_specifiers dcl_specifier			{ semantic(10); };
dcl_specifier		: type_qualifier				{ semantic(11); }
			| type_specifier				{ semantic(12); };
type_qualifier		: TCONST					{ tmp_const = 1; semantic(13); };
type_specifier		: TINT					{ strcpy(tmp_type, yytext); semantic(14); }
			| TFLOAT					{ strcpy(tmp_type, yytext); semantic(100); }
			| TVOID					{ strcpy(tmp_type, yytext); semantic(15); };
function_name		: TIDENT					{ strcpy(function_name, tmp_name); strcpy(function_type, tmp_type); semantic(16); };
formal_param		: TLPAREN opt_formal_param TRPAREN	{ semantic(17); }
			| TLPAREN opt_formal_param		{ yyerror("Not closed parenthesis for formal parameter"); };
opt_formal_param 	        	: formal_param_list				{ semantic(18); }
			|					{ semantic(19); };
formal_param_list       	: param_dcl				{ add_param_list(tmp_name, tmp_type); semantic(20); }
			| formal_param_list TCOMMA param_dcl	{ add_param_list(tmp_name, tmp_type); semantic(21); }
			| formal_param_list param_dcl		{ yyerror("Missing comma for formal param list"); };
param_dcl		: dcl_spec declarator			{ semantic(22); };
compound_st		: TLBRACE opt_dcl_list opt_stat_list TRBRACE	{ semantic(23); }
			| TLBRACE opt_dcl_list opt_stat_list error	{ yyerror("Not closed brace for compound statement"); };
opt_dcl_list		: declaration_list				{ semantic(24); }
			|					{ semantic(25); };
declaration_list		: declaration				{ semantic(26); }
			| declaration_list declaration			{ semantic(27); };
declaration		: dcl_spec init_dcl_list TSEMICOLON		{ semantic(28); }
			| dcl_spec init_dcl_list error			{ yyerror("Missing semicolon for declaration"); };
init_dcl_list		: init_declarator				{ semantic(29); }
			| init_dcl_list TCOMMA init_declarator		{ semantic(30); }
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
declarator			: TIDENT					{ strcpy(tmp_name, prev_yytext); semantic(33); }
			| TIDENT TLBRACKET opt_number TRBRACKET	{ strcpy(tmp_name, prev_yytext); semantic(34); }
			| TIDENT TLBRACKET opt_number error		{ yyerror("Not closed bracket for declarator"); };
opt_number		: TNUMBER				{ semantic(35); }
			|					{ semantic(36); };
opt_stat_list		: statement_list				{ semantic(37); }
			|					{ semantic(38); };
statement_list		: statement				{ semantic(39); }
			| statement_list statement			{ semantic(40); };
statement		: compound_st				{ semantic(41); }
			| expression_st				{ semantic(42); }
			| if_st					{ semantic(43); }
			| while_st					{ semantic(44); }
			| return_st				{ semantic(45); }
			;
expression_st	    	: opt_expression TSEMICOLON		{ semantic(46); }
			| expression error				{ yyerror("Missing semicolon for expression statement"); };
opt_expression	        	: expression				{ semantic(47); }
			|					{ semantic(48); };
if_st			: TIF TLPAREN expression TRPAREN statement %prec LOWER_THAN_ELSE	{ semantic(49); }
			| TIF TLPAREN expression TRPAREN statement TELSE statement		{ semantic(50); };
while_st		    	: TWHILE TLPAREN expression TRPAREN statement			{ semantic(51); }
			| TWHILE TLPAREN expression error statement	{ yyerror("Not closed parenthesis for while statement"); }
			| TWHILE TLPAREN TRPAREN statement	{ yyerror("Condition doesn't exists for while statment"); };
return_st			: TRETURN opt_expression TSEMICOLON	{ semantic(52); }
			| TRETURN opt_expression error		{ yyerror("Missing semicolon for return statement"); };
expression		: assignment_exp 				{ semantic(53); }; 
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
not_assignable_exp	: TNUMBER TASSIGN assignment_exp		{ yyerror("ERROR: Left side cannot be a number"); }
			| TNUMBER TADDASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); }
			| TNUMBER TSUBASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); }
			| TNUMBER TMULASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); }
			| TNUMBER TDIVASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); }
			| TNUMBER TMODASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a number"); }
			| TDECIMAL TASSIGN assignment_exp		{ yyerror("ERROR: Left side cannot be a decimal point"); }
			| TDECIMAL TADDASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); }
			| TDECIMAL TSUBASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); }
			| TDECIMAL TMULASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); }
			| TDECIMAL TDIVASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); }
			| TDECIMAL TMODASSIGN assignment_exp	{ yyerror("ERROR: Left side cannot be a decimal point"); }
			;
logical_or_exp   	    	: logical_and_exp         			{ semantic(61); }
   			| logical_or_exp TOR logical_and_exp   	{ semantic(62); };
logical_and_exp   	        	: equality_exp         			{ semantic(63); }
     			| logical_and_exp TAND equality_exp   	{ semantic(64); };
equality_exp   		: relational_exp         			{ semantic(65); }
      			| equality_exp TEQUAL relational_exp   	{ semantic(66); }
     			| equality_exp TNOTEQU relational_exp   	{ semantic(67); };
relational_exp             	: additive_exp                             		{ semantic(68); }
      			| relational_exp TGREAT additive_exp   	{ semantic(69); }
      			| relational_exp TLESS additive_exp   		{ semantic(70); }
      			| relational_exp TGREATE additive_exp   	{ semantic(71); }
      			| relational_exp TLESSE additive_exp   		{ semantic(72); };
additive_exp   	    	: multiplicative_exp         			{ semantic(73); }
      			| additive_exp TADD multiplicative_exp   	{ semantic(74); }
      			| additive_exp TSUB multiplicative_exp   	{ semantic(75); };
multiplicative_exp          	: unary_exp         				{ semantic(76); }
     			| multiplicative_exp TMUL unary_exp      	{ semantic(77); }
      			| multiplicative_exp TDIV unary_exp   		{ semantic(78); }
      			| multiplicative_exp TMOD unary_exp   	{ semantic(79); };
unary_exp   		: postfix_exp         			{ semantic(80); }
      			| TSUB unary_exp         			{ semantic(81); }
      			| TNOT unary_exp        			{ semantic(82); }
      			| TINC unary_exp         			{ semantic(83); }
      			| TDEC unary_exp         			{ semantic(84); };
postfix_exp 		: primary_exp 				{ semantic(85); }
			| postfix_exp TLBRACKET expression TRBRACKET 	{ semantic(86); }
			| postfix_exp TLBRACKET expression error		{ yyerror("Not closed bracket for postfix expression"); }
			| postfix_exp TLPAREN opt_actual_param TRPAREN	{ semantic(87); }
			| postfix_exp TLPAREN opt_actual_param error		{ yyerror("Not closed parenthesis for postfix expression"); };
			| postfix_exp TINC 				{ semantic(88); }
			| postfix_exp TDEC				{ semantic(89); };
opt_actual_param 	        	: actual_param 				{ semantic(90); }
			| 					{ semantic(91); };
actual_param 		: actual_param_list 				{ semantic(92); };
actual_param_list 	        	: assignment_exp 				{ semantic(93); }
			| actual_param_list TCOMMA assignment_exp 	{ semantic(94); };
left_hand			: TIDENT					{ if (!check_sym_table(prev_yytext, function_name)) {yyerror("ERROR: not defined");} else {semantic(95);} };
primary_exp 		: left_hand				{ semantic(510); }
			| TNUMBER 				{ semantic(96); }
			| TDECIMAL				{ semantic(97); }
			| TLPAREN expression TRPAREN 		{ semantic(98); }
			| TLPAREN expression error			{ yyerror("Not closed parenthesis for primary parameter"); };
%%
void semantic(int n)
{
	// printf("reduced rule number = %d\n", n);
}
