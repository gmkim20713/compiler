#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sym_table_lab.h"
#include "hash_func.h"
#include "parser_tab.h"

char separators[] = " ,;\t\n\r\n";
char str_pool[MAX_STR_POOL];
// sym_table ����
// StringPoolIndex | Length | Line
int sym_table[SYM_TABLE_SIZE][3];
Identifier identifier_list[SYM_TABLE_SIZE];
extern line_number;

#define isLetter(x) ( ((x) >= 'a' && (x) <='z') || ((x) >= 'A' && (x) <= 'Z') || ((x) == '_')) 
#define isDigit(x) ( (x) >= '0' && (x) <= '9' )

HTpointer HT[HASH_TABLE_SIZE];

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
    printf("Index\tStrPool\tLength\tLine\tSymbol\n");
    for (i = 0; i < SYM_TABLE_SIZE; i++) {
        if (sym_table[i][0] != -1) {
            printf("[%d]\t%d\t%d\t%d\t%s\n", i, sym_table[i][0], sym_table[i][1], sym_table[i][2], str_pool + sym_table[i][0]);
        }
    }
}

HTpointer lookup_hash_table(char* sym, int hscode) {
    HTpointer entry = HT[hscode];

    // ü�̴׵� ����Ʈ�� Ž��
    while (entry != NULL) {
        if (strcmp(str_pool + (sym_table[entry->index][0]), sym) == 0) {
            return entry; // ã�� �׸� ��ȯ
        }
        entry = entry->next;
    }
    return NULL; // �׸��� ã�� ���� ���
}

void add_hash_table(int id_index, int hscode) {
    // �� �׸� ���� �� �ʱ�ȭ
    HTpointer newEntry = (HTpointer)malloc(sizeof(HTentry));
    if (newEntry == NULL) {
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }
    newEntry->index = id_index;
    newEntry->next = NULL;

    if (HT[hscode] == NULL) {
        // ù ��° �׸����� �߰�
        HT[hscode] = newEntry;
    }
    else {
        // �̹� �׸��� ������, ����Ʈ�� �� �տ� �߰�
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

int sym_table_index = 0;
int str_pool_index = 0;
int symtable(Identifier id) {
    int hash_value = 0;
    char* ident = id.name;
    int len = sizeof(ident) / sizeof(char);

    if (str_pool_index + len > MAX_STR_POOL) {
        //�ؽ� ���
        //�ߺ��� �ĺ��� ������ ��� ��� ����
        //�ߺ��� �ĺ��ڰ� �������� ���� ���� �����÷ο� ���� �߻���Ű�� ����
        hash_value = divisionMethod(ident, HASH_TABLE_SIZE);

        HTpointer htp = lookup_hash_table(ident, hash_value);
        if (htp == NULL) {
            return 1; //string pool overflow
        }
        return 3; //already exist
    }

    hash_value = divisionMethod(ident, HASH_TABLE_SIZE);

    HTpointer htp = lookup_hash_table(ident, hash_value);
    if (htp == NULL) {
        if (sym_table_index == SYM_TABLE_SIZE) {
            return 2; //symbol table overflow
        }

        strcpy_s(str_pool + str_pool_index, MAX_STR_POOL, ident);

        add_hash_table(sym_table_index, hash_value);

        identifier_list[sym_table_index] = id;
        sym_table[sym_table_index][0] = str_pool_index;
        sym_table[sym_table_index][1] = len;
        sym_table[sym_table_index++][2] = line_number;

        str_pool[str_pool_index + len] = '\0';
        str_pool_index += len + 1;

        return 0;
    }

    return 4;
}

int check_sym_table(char* name, char* block) {
    printf("%s, %s\n", name, block);
    int hscode = divisionMethod(name, HASH_TABLE_SIZE);
    HTpointer entry = HT[hscode];

    while (entry != NULL) {
        if (strcmp(identifier_list[entry->index].name, name) == 0 && (strcmp(identifier_list[entry->index].block, block) == 0 || strcmp(identifier_list[entry->index].category, "function") == 0) || identifier_list[entry->index].is_const) {
            return 1; // ã�� �׸� ��ȯ
        }
        entry = entry->next;
    }
    return 0; // �׸��� ã�� ���� ���
}
