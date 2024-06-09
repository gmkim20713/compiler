#include <stdio.h>
#include <stdlib.h>
#include "parser_tab.h"
#include "sym_table_lab.h"

char param_list[MAX_PARAM_COUNT][2][MAX_STRING_LENGTH]; //함수 파라미터 정보 저장
int param_idx = 0;
int line_number = 0;
int error_count = 0;
extern int sym_table_index;
extern Identifier identifier_list[SYM_TABLE_SIZE];
extern int yyparse();
extern void init_sym_table(); // sym_table_lab에서 가져온 함수. symboltable 초기화
extern int symtable(Identifier id);

/*함수 선언 시에 추가된 파라미터를 param_list에 임시 저장*/
void add_param_list(char* name, char* type) {
    strcpy(param_list[param_idx][0], name);
    strcpy(param_list[param_idx++][1], type);
}

/*parser에서 입력받은 identifier를 symbol table에 추가*/
int add_symbol_table(char* category, char* name, char* type, char* block, int is_const) {
    Identifier id;

    strcpy(id.category, category);
    strcpy(id.name, name);
    strcpy(id.type, type);
    strcpy(id.block, block);
    strcpy(id.parameters, param_list);
    id.line_number = line_number;
    id.is_const = is_const;

    //printf("New identifier: (%s, %s, %s, %s, %d)\n", category, name, type, block, line_number);
    //함수인 경우
    if (category == "function") {
        param_idx = 0;
    }

    return !symtable(id);
}

/* symbol table 출력 */
void print_symbol_table() {
    printf("==================================================\n");
    printf("Category\tName\tType\tBlock\tConst\n");
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

    printf("\n%d error(s) detected.\n", error_count);
    print_symbol_table();
}