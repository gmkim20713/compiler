#include <stdio.h>
#include <stdlib.h>
#include "parser_tab.h"
#include "sym_table_lab.h"

char param_list[MAX_PARAM_COUNT][2][MAX_STRING_LENGTH];
int param_idx = 0;
int line_number = 0;
int error_count = 0;
extern int sym_table_index;
extern Identifier identifier_list[SYM_TABLE_SIZE];
extern int yyparse();
extern int init_sym_table(); // sym_table_lab에서 가져온 함수. symboltable 초기화
extern int symtable(char* yytext, Identifier id);

void add_param_list(char* name, char* type) {
    strcpy(param_list[param_idx][0], name);
    strcpy(param_list[param_idx++][1], type);
}

int add_symbol_table(char* category, char* name, char* type, char* block) {
    Identifier id;

    strcpy(id.category, category);
    strcpy(id.name, name);
    strcpy(id.type, type);
    strcpy(id.block, block);
    strcpy(id.parameters, param_list);
    id.line_number = line_number;

    printf("New identifier: (%s, %s, %s, %s, %d)\n", category, name, type, block, line_number);
    //함수인 경우
    if (category == "function") {
        printf("Parameters(name, type)[%d]: ", param_idx);
        for (int i = 0; i < param_idx; i++) {
            printf("(%s, %s)\t", param_list[i][0], param_list[i][1]);
        }
        printf("\n");

        param_idx = 0;
    }

    return symtable(name, id);
}
void print_symbol_table() {
    printf("================================\n");
    for (int i = 0; i < sym_table_index; i++) {
        Identifier id = identifier_list[i];
        printf("%s\t%s\t%s\t%s\t%d\n", id.category, id.name, id.type, id.block, id.line_number);
    }
}
//bool is_assignable() {}
void main()
{
    init_sym_table();
	printf("***MiniC parsing begins\n");
	yyparse();
	printf("Parsing ends.***\n");

	printf("\n--- %d error(s) detected.\n", error_count);
    print_symbol_table();
}