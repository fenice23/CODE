#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"
void test() {
	Contact con;
	InitContact(&con);
	int input = 0;
	do {
		Menu();
		printf("请您输入您的选择:>");
		scanf("%d", &input);
		switch (input) {
		case _EXIT:
			DestroyContact(&con);
			printf("正在退出通讯录!\n");
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
			printf("您的输入有误,请重新输入数据!\n");
			break;
		}
	} while (input);
	printf("成功退出!\n");
}
int main() {
	test();
	return 0;
}