#include <stdio.h>

int error_count = 0;
extern int yyparse();

void main()
{
	printf("***MiniC parsing begins\n");
	yyparse();
	printf("Parsing ends.***\n");

	printf("\n--- %d error(s) detected.\n", error_count);
}