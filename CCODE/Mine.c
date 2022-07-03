#define _CRT_SECURE_NO_WARNINGS 1
#include "Mine.h"//�԰���
void Menu() {
	printf("***********************\n");
	printf("***   MineGame!!!   ***\n");
	printf("***   1.Play Game   ***\n");
	printf("***   0.Exit Game   ***\n");
	printf("***********************\n");
}
void InitBoard(char(*pBoard)[COLS], int rows, char content) {
	assert(pBoard != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < COLS; j++) {
			pBoard[i][j] = content;
		}
	}
}
void DisplayBoard(char(*pBoard)[COLS], int row, int col) {
	assert(pBoard != NULL);
	int i = 0;
	int j = 0;
	printf("*******ɨ����Ϸ*******\n");
	for (i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", pBoard[i][j]);
		}
		printf("\n");
	}
	printf("*******ɨ����Ϸ*******\n");
}
void SetMine(char(*pMineBoard)[COLS], int row, int col) {
	assert(pMineBoard != NULL);
	int count = EASYLEVEL;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (pMineBoard[x][y] == '0') {
			pMineBoard[x][y] = '1';
			count--;
		}
	}
}
static int CountOfMine(char(*pMineBoard)[COLS], int x, int y) {
	assert(pMineBoard != NULL);
	return pMineBoard[x - 1][y] + pMineBoard[x - 1][y + 1] + pMineBoard[x - 1][y - 1] + pMineBoard[x][y - 1] + pMineBoard[x][y + 1] + pMineBoard[x + 1][y - 1] + pMineBoard[x + 1][y] + pMineBoard[x + 1][y + 1] - 8 * '0';
}
void FindMine(char(*pMineBoard)[COLS], char(*pShowBoard)[COLS], int row, int col) {
	assert(pMineBoard != NULL && pShowBoard != NULL);
	int x = 0;
	int y = 0;
	int count = row * col - EASYLEVEL;
	while (count) {
		printf("��������Ҫ�Ų��׵�����:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (pMineBoard[x][y] == '1') {
				printf("���ź��㱻ը����!!!\n");
				DisplayBoard(pMineBoard, row, col);
				break;
			}
			else {
				pShowBoard[x][y] = CountOfMine(pMineBoard, x, y) + '0';
				count--;
				DisplayBoard(pShowBoard, row, col);
			}
		}
		else {
			printf("�����������Ƿ�,��������������!\n");
		}
	}
	if (!count) {
		printf("��ϲ��,�ɹ�ͨ����Ϸ!\n");
		DisplayBoard(pMineBoard, row, col);
	}
}
void MineGame() {
	char mineBoard[ROWS][COLS] = { 0 };
	char showBoard[ROWS][COLS] = { 0 };
	InitBoard(mineBoard, ROWS, '0');
	InitBoard(showBoard, ROWS, '*');
	SetMine(mineBoard, ROW, COL);
	//DisplayBoard(mineBoard, ROW, COL);
	DisplayBoard(showBoard, ROW, COL);
	FindMine(mineBoard, showBoard, ROW, COL);
}