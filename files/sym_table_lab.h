#pragma once

#define SYM_TABLE_SIZE	100
#define HASH_TABLE_SIZE 11
#define MAX_STR_POOL	200
#define MAX_STRING_LENGTH 1000 // 예상되는 최대 문자열 길이
#define MAX_PARAM_COUNT 100

void init_sym_table();
void print_sym_table();
void print_hash_table();

typedef struct HTentry* HTpointer;
typedef struct HTentry {
    int index;
    HTpointer next;
}HTentry;

HTpointer lookup_hash_table(char* sym, int hscode);

typedef struct {
    char category[MAX_STRING_LENGTH]; // 변수 또는 파라미터 또는 함수
    char name[MAX_STRING_LENGTH]; // 변수 또는 파라미터 이름
    char type[MAX_STRING_LENGTH]; // 변수 또는 파라미터 타입
    char block[MAX_STRING_LENGTH]; // 선언된 블럭 (예: 함수 내부인 경우 함수 이름, 전역 변수인 경우 "global" 등)
    char parameters[2][MAX_STRING_LENGTH]; // 파라미터 목록 (예: "int a, float b")
    int line_number; // 선언된 줄 번호
    int is_const;
} Identifier;