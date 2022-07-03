#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void test() {
	Contact con;
	InitContact(&con);
	int input = 0;
	do {
		Menu();
		printf("请输入您的选择:>");
		scanf("%d", &input);
		switch (input) {
		case _EXIT:
			printf("正在退出通讯录!\n");
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
			printf("您输入的数据有误,请重新输入!\n");
			break;
		}
	} while (input);
	printf("已退出通讯录!\n");
}
int main() {
	test();
	return 0;
}