#define _CRT_SECURE_NO_WARNINGS 1
#include "threechess.h"
#include <stdio.h>
#include <assert.h>
void Menu() {
	printf("************************\n");
	printf("*****      GAME!   *****\n");
	printf("*****     1.Play   *****\n");
	printf("*****     0.Exit   *****\n");
	printf("************************\n");

}
void InitBoard(char(*pBoard)[COL], int row) {
	assert(pBoard != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < COL; j++) {
			pBoard[i][j] = ' ';
		}
	}
}
void DisplayBoard(char(*pBoard)[COL], int row) {
	assert(pBoard != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < COL; j++) {
			if (COL - 1 != j) {
				printf(" %c |", pBoard[i][j]);
			}
			else {
				printf(" %c \n", pBoard[i][j]);
			}
		}
		if (row - 1 != i) {
			for (j = 0; j < COL; j++) {
				if (COL - 1 != j) {
					printf("---|");
				}
				else {
					printf("---\n");
				}
			}
		}
	}
/*
   |   |
---|---|---
   |   |
---|---|---
   |   |
*/
}
void PlayerMove(char(*pBoard)[COL], int row) {
	assert(pBoard != NULL);
	printf("�������:>\n");
	int x = 0;
	int y = 0;
	while (1) {
		printf("��������Ҫ�µ�λ�õĺ������������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= COL) {
			if (pBoard[x - 1][y - 1] == ' ') {
				pBoard[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("������������Ѿ���������,����������!\n");
			}
		}
		else {
			printf("�������λ������Ƿ�,����������!\n");
		}
	}
}
void ComputerMove(char(*pBoard)[COL], int row) {
	assert(pBoard != NULL);
	printf("��������:>\n");
	while (1) {
		int x = rand() % row;
		int y = rand() % COL;
		if (pBoard[x][y] == ' ') {
			pBoard[x][y] = '#';
			break;
		}
	}
}
bool IsFull(char(*pBoard)[COL], int row) {
	assert(pBoard != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < COL; j++) {
			if (pBoard[i][j] == ' ') {
				return false;
			}
		}
	}
	return true;
}
char JudgeWinner(char(*pBoard)[COL], int row) {
	assert(pBoard != NULL);
	int i = 0;
	for (i = 0; i < row; i++) {
		if (pBoard[i][0] == pBoard[i][1] && pBoard[i][1] == pBoard[i][2] && pBoard[i][1] != ' ') {
			return pBoard[i][1];
		}
	}
	for (i = 0; i < COL; i++) {
		if (pBoard[0][i] == pBoard[1][i] && pBoard[1][i] == pBoard[2][i] && pBoard[1][i] != ' ') {
			return pBoard[1][i];
		}
	}
	if (pBoard[0][0] == pBoard[1][1] && pBoard[1][1] == pBoard[2][2] && pBoard[1][1] != ' ') {
		return pBoard[1][1];
	}
	if (pBoard[0][2] == pBoard[1][1] && pBoard[1][1] == pBoard[2][0] && pBoard[1][1] != ' ') {
		return pBoard[1][1];
	}
	if (IsFull(pBoard, row)) {
		return 'Q';
	}
	return 'C';
}
void ThreeChess() {
	char board[ROW][COL] = { 0 };//�洢����---��ά����
	InitBoard(board, ROW);//��ʼ������Ԫ��Ϊ�ո�
	DisplayBoard(board, ROW);//��ӡ����ʼ���õ�����
	char res = 0;
	while (1) {
		PlayerMove(board, ROW);
		DisplayBoard(board, ROW);
		res = JudgeWinner(board, ROW);
		if (res != 'C') {
			break;
		}
		ComputerMove(board, ROW);
		DisplayBoard(board, ROW);
		res = JudgeWinner(board, ROW);
		if (res != 'C') {
			break;
		}
	}
	if (res == '*') {
		printf("Player Win!!!\n");
	}
	else if (res == '#') {
		printf("Computer Win!!!\n");
	}
	else {
		printf("Sorry: Nobody Win!\n");
	}
	DisplayBoard(board, ROW);
}