#define _CRT_SECURE_NO_WARNINGS 1
#include "Mine.h"//˭��˭����
void test() {
	int input = 0;
	do
	{
		Menu();
		printf("����������ѡ��<0/1>:");
		scanf("%d", &input);
		switch (input) {
		case 0:
			printf("�����˳�ɨ����Ϸ!\n");
			break;
		case 1:
			//printf("��ɨ����Ϸ!\n");
			MineGame();
			printf("Ҫ��Ҫ����һ��?\n");
			break;
		default:
			printf("���������������,����������!\n");
			break;
		}
	} while (input);
	printf("���˳�ɨ����Ϸ,��ӭ�´�������Ϸ!\n");
}
int main() {
	srand((size_t)time(NULL));
	test();
	return 0;
}