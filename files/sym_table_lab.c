#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sym_table_lab.h"
#include "hash_func.h"

char separators[] = " ,;\t\n\r\n";
char str_pool[100];
Identifier identifier_list[SYM_TABLE_SIZE];
int sym_table[SYM_TABLE_SIZE][2];

int index_start = 0;
int index_next = 0;
int hash_value = 0;
int sym_table_index = 0;

#define isLetter(x) ( ((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z') || ((x) == '_')) 
#define isDigit(x) ( (x) >= '0' && (x) <= '9' )

typedef struct HTentry* HTpointer;
typedef struct HTentry {
    int index;
    int count;
    HTpointer next;
}HTentry;

HTpointer HT[HASH_TABLE_SIZE];

// symboltable 초기화
void init_sym_table() {
    int i;
    for (i = 0; i < SYM_TABLE_SIZE; i++) {
        sym_table[i][0] = -1;
        sym_table[i][1] = -1;
    }
}

void print_sym_table() {
    int i;
    printf("\nSymbol Table\n");
    printf("Index\tLength\tSymbol\n");
    for (i = 0; i < SYM_TABLE_SIZE; i++) {
        if (sym_table[i][0] != -1) {
            printf("%d\t%d\t%s\n", sym_table[i][0], sym_table[i][1], str_pool + sym_table[i][0]);
        }
    }
}

HTpointer lookup_hash_table(int id_index, int hscode, Identifier id) {
    HTpointer entry = HT[hscode];

    // 체이닝된 리스트를 탐색
    while (entry != NULL) {
        if (strcmp(str_pool + (entry->index), str_pool + (id_index)) == 0) {
            Identifier cmp_id = identifier_list[entry->count];
            printf("%s %s\n", cmp_id.name, cmp_id.block);
            if (strcmp(cmp_id.name, id.name) == 0 && strcmp(cmp_id.block, id.block) == 0) {
                return entry; // 찾은 항목 반환
            }
        }
        entry = entry->next;
    }
    return NULL; // 항목을 찾지 못한 경우
}

void add_hash_table(int id_index, int hscode) {
    // 새 항목 생성 및 초기화
    HTpointer newEntry = (HTpointer)malloc(sizeof(HTentry));
    if (newEntry == NULL) {
        printf("메모리 할당 실패\n");
        exit(1);
    }
    newEntry->index = id_index;
    newEntry->count = sym_table_index;
    newEntry->next = NULL;

    if (HT[hscode] == NULL) {
        // 첫 번째 항목으로 추가
        HT[hscode] = newEntry;
    }
    else {
        // 이미 항목이 있으면, 리스트의 맨 앞에 추가
        newEntry->next = HT[hscode];
        HT[hscode] = newEntry;
    }
}

void print_hash_table() {
    printf("\nHash Table:\n");
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        HTpointer entry = HT[i];
        if (entry != NULL) {
            printf("[%d]: ", i);
            while (entry != NULL) {
                printf("%d -> ", entry->index);
                entry = entry->next;
            }
            printf("NULL\n");
        }
    }
}

int symtable(char* yytext, Identifier id) {
    printf("%s %s\n", yytext, id.name);
    int result;
    int c; // 읽은 문자를 저장할 변수
    int char_index = 0;
    bool flag_undefined = false;

    while (((c = yytext[char_index++]) != '\0') && (index_next <= sizeof(str_pool) - 1)) { // Token yytext 읽기
        str_pool[index_next++] = (char)c; // 버퍼에 문자 저장
    }

    if (index_next == sizeof(str_pool)) { // error 3 - overflow
        //printf("String Pool Overflow\n");
        index_next = index_start;
        //print_sym_table();
        //print_hash_table();

        return -3;
    }

    str_pool[index_next] = '\0'; // 문자열 종료

    // error 2 - 문자열 중간에 허용되지 않은 문자가 존재할 경우 에러 출력
    if (flag_undefined == true) {
        //printf("Error - Illegal identifier(%s)\n", str_pool + index_start);
        index_next = index_start;
        return -2;
    }
    else if (isDigit(str_pool[index_start])) { // error 2 - 문자열이 숫자로 시작할 경우
        //printf("Error - start with digit (%s)\n", str_pool + index_start); // 에러 출력
        index_next = index_start;
        return -2;
    }
    else if ((int)strlen(str_pool + index_start) >= 15) { // error 1 - 문자열 길이가 15자 이상
        //printf("Error - Exceed\n");
        index_next = index_start;
        return -1;
    }
    else {
        hash_value = divisionMethod(str_pool + index_start, HASH_TABLE_SIZE);

        HTpointer htp = lookup_hash_table(index_start, hash_value, id);
        if (htp == NULL) { // 새로운 올바른 identifier
            add_hash_table(index_start, hash_value);
            sym_table[sym_table_index][0] = index_start;
            sym_table[sym_table_index][1] = (int)strlen(str_pool + index_start);
            identifier_list[sym_table_index++] = id;
            
            //printf("%d\t%s\n", hash_value, str_pool + index_start); // 버퍼의 내용을 화면에 출력
            index_start = ++index_next; // 버퍼 인덱스 초기화
        }
        else { // 이미 존재하는 identifier. symboltable에 추가 X
            printf("%d\t%s (already exists)\n", hash_value, str_pool + index_start); // 버퍼의 내용을 화면에 출력
            index_next = index_start;
            return -4;
        }
    }

    //print_sym_table();
    //print_hash_table();

    return sym_table_index - 1; // symboltable index 리턴
}