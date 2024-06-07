#pragma once

#define SYM_TABLE_SIZE	100
#define HASH_TABLE_SIZE 11

#define MAX_STRING_LENGTH 100 // ����Ǵ� �ִ� ���ڿ� ����
#define MAX_PARAM_COUNT 100

typedef struct {
    char category[MAX_STRING_LENGTH]; // ���� �Ǵ� �Ķ���� �Ǵ� �Լ�
    char name[MAX_STRING_LENGTH]; // ���� �Ǵ� �Ķ���� �̸�
    char type[MAX_STRING_LENGTH]; // ���� �Ǵ� �Ķ���� Ÿ��
    char block[MAX_STRING_LENGTH]; // ����� �� (��: �Լ� ������ ��� �Լ� �̸�, ���� ������ ��� "global" ��)
    char parameters[2][MAX_STRING_LENGTH]; // �Ķ���� ��� (��: "int a, float b")
    int line_number; // ����� �� ��ȣ
} Identifier;