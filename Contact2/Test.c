#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void test() {
	Contact con;
	InitContact(&con);
	int input = 0;
	do {
		Menu();
		printf("������������ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case _EXIT:
			DestroyContact(&con);
			printf("�����˳�ͨѶ¼!\n");
			break;
		case _ADD:
			AddContact(&con);
			break;
		case _DEL:
			DelContact(&con);
			break;
		case _SEARCH:
			SearchContact(&con);
			break;
		case _MODIFY:
			ModifyContact(&con);
			break;
		case _SORT:
			SortContact(&con);
			break;
		case _PRINT:
			PrintContact(&con);
			break;
		default:
			printf("������������,��������������!\n");
			break;
		}
	} while (input);
	printf("�ɹ��˳�!\n");
}
int main() {
	test();
	return 0;
}