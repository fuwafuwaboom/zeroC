#pragma once
//头文件的包含
#include<stdio.h>
#include<windows.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols，char);
void ShowBoard(char board[ROWS][COLS],int row, int col);
