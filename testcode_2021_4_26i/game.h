#pragma once
//ͷ�ļ��İ���
#include<stdio.h>
#include<windows.h>
//���Ŷ���
#define ROW 20
#define COL 20
//��������
void Init_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
//���1����
void Player1Move(char board[ROW][COL], int row, int col,char N1[],char N2[]);
//���2����
void P2ayer1Move(char board[ROW][COL], int row, int col, char N1[],char N2[]);
//�ж���Ϸ״̬
int IsWin(char board[ROW][COL], int row, int col);