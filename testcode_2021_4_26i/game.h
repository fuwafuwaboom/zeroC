#pragma once
//头文件的包含
#include<stdio.h>
#include<windows.h>
//符号定义
#define ROW 10
#define COL 10

//函数声明
void Init_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
//玩家1下棋
void Player1Move(char board[ROW][COL], int row, int col);
//玩家2下棋
void P2ayer1Move(char board[ROW][COL], int row, int col);
//判断游戏状态
int IsWin(char board[ROW][COL], int row, int col);