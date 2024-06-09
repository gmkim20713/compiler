#include <stdio.h>

extern int line_number;
extern int error_count;

void yyerror(const char* s)
{
	printf("%d\t\t\t%s\n",line_number, s);
	error_count++;
}