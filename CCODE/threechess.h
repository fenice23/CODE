#ifndef __THREECHESS_H__
#define __THREECHESS_H__
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:6031)
//符号的定义
#define ROW 3
#define COL 3
//函数的声明
void Menu();
void ThreeChess();
void InitBoard(char(*pBoard)[COL], int row);
void DisplayBoard(char(*pBoard)[COL], int row);
void PlayerMove(char(*pBoard)[COL], int row);
void ComputerMove(char(*pBoard)[COL], int row);
char JudgeWinner(char(*pBoard)[COL], int row);
bool IsFull(char(*pBoard)[COL], int row);
#endif//!__THREECHESS_H__