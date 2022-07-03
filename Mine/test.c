#define _CRT_SECURE_NO_WARNINGS 1
#include "Mine.h"//谁用谁包含
void test() {
	int input = 0;
	do
	{
		Menu();
		printf("请输入您的选择<0/1>:");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("正在退出扫雷游戏!\n");
			break;
		case 1:
			//printf("玩扫雷游戏!\n");
			MineGame();
			printf("要不要再玩一把?\n");
			break;
		default:
			printf("您输入的数据有误,请重新输入!\n");
			break;
		}
	} while (input);
	printf("已退出扫雷游戏,欢迎下次来玩游戏!\n");
}
int main() {
	srand((size_t)time(NULL));
	test();
	return 0;
}