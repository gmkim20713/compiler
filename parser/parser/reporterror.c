#include <stdio.h>

extern int error_count;

void yyerror(const char* s)
{
	printf("%s\n", s);
	error_count++;
}