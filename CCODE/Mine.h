#ifndef __MINE_H__
#define __MINE_H__
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#pragma warning(disable:6031)
#define EASYLEVEL 10
#define ROW 9
#define COL 9
#define ROWS ((ROW) + 2)
#define COLS ((COL) + 2)
void Menu();
void MineGame();
void InitBoard(char(*pBoard)[COLS], int rows, char content);
void DisplayBoard(char(*pBoard)[COLS], int row, int col);
void SetMine(char(*pMineBoard)[COLS], int row, int col);
void FindMine(char(*pMineBoard)[COLS], char(*pShowBoard)[COLS], int row, int col);
#endif//!__MINE_H__