#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void test() {
	Contact con;
	InitContact(&con);
	int input = 0;
	do {
		Menu();
		printf("����������ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case _EXIT:
			printf("�����˳�ͨѶ¼!\n");
			break;
		case _ADD:
			//printf("_ADD!\n");
			AddContact(&con);
			break;
		case _DEL:
			//printf("_DEL!\n");
			DelContact(&con);
			break;
		case _SEARCH:
			//printf("_SEARCH!\n");
			SearchContact(&con);
			break;
		case _MODIFY:
			//printf("_MODIFY!\n");
			ModifyContact(&con);
			break;
		case _SORT:
			//printf("_SORT!\n");
			SortContact(&con);
			break;
		case _PRINT:
			//printf("_PRINT!\n");
			PrintContact(&con);
			break;
		default:
			printf("���������������,����������!\n");
			break;
		}
	} while (input);
	printf("���˳�ͨѶ¼!\n");
}
int main() {
	test();
	return 0;
}