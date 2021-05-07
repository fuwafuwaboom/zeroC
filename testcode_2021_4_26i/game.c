#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void Init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (i == 0)
		{
			int m = 0;
			printf(" ");
			for (m = 0; m < col; m++)
			{
				printf(" %2d ", m + 1);
			}
			printf("\n");
		}
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (j == 0)
			{
				printf("%2d", i+1);
			}
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			printf("  ");
			int k = 0;
			for (k = 0; k < col; k++)
			{
				printf("---");
				if (k < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}

}
void Player1Move(char board[ROW][COL], int row, int col, char N1[], char N2[])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请 %s 走（输入落子坐标）：",N1);
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'x';
				break;
			}
			else
			{
				printf("此处已有子，请重新落子：\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}
	}

}
void Player2Move(char board[ROW][COL], int row, int col, char N1[], char N2[])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请 %s 走（输入落子坐标）：",N2);
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'o';
				break;
			}
			else
			{
				printf("此处已有子，请重新落子：\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入：\n");
		}
	}

}
int IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//判断行是否五子连珠
	{
		int num1 = 0;
		int num2 = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == 'x')
			{
				num1++;
				if (num1 == 4)
				{
					return 1;
				}
			}
			else
			{
				num1 = 0;
			}
			if (board[i][j] == board[i][j + 1] && board[i][j] == 'o')
			{
				num2++;
				if (num2 == 4)
				{
					return 2;
				}
			}
			else
			{
				num2 = 0;
			}
		}
	}
	for (j = 0; j < col; j++)//判断列是否五子连珠
	{
		int num1 = 0;
		int num2 = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] == 'x')
			{
				num1++;
				if (num1 == 4)
				{
					return 1;
				}
			}
			else
			{
				num1 = 0;
			}
			if (board[i][j] == board[i+1][j] && board[i][j] == 'o')
			{
				num2++;
				if (num2 == 4)
				{
					return 2;
				}
			}
			else
			{
				num2 = 0;
			}
		}
	}
	int m = 0;//判断起点为5,0-0,0对角线是否五子连珠
	for (m = row-5; m >= 0; m--)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = m, j = 0; i < row; i++,j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == 'x')
			{
				num1++;
				if (num1 == 4)
				{
					return 1;
				}
			}
			else
			{
				num1 = 0;
			}
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == 'o')
			{
				num2++;
				if (num2 == 4)
				{
					return 2;
				}
			}
			else
			{
				num2 = 0;
			}
		}
	}
	int n = 0;//判断起点为0,1-0,5对角线是否五子连珠
	for (n = 1; n<=(col-5) ; n++)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = 0, j = n; j < col; j++, i++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == 'x')
			{
				num1++;
				if (num1 == 4)
				{
					return 1;
				}
			}
			else
			{
				num1 = 0;
			}
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == 'o')
			{
				num2++;
				if (num2 == 4)
				{
					return 2;
				}
			}
			else
			{
				num2 = 0;
			}
		}
	}
	int p = 0;//判断起点为4，0-9，0的反对角线是否五子连珠
	for (p = row-6; p <= (row-1); p++)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = p, j = 0; i >= 0; i--, j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == 'x')
			{
				num1++;
				if (num1 == 4)
				{
					return 1;
				}
			}
			else
			{
				num1 = 0;
			}
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == 'o')
			{
				num2++;
				if (num2 == 4)
				{
					return 2;
				}
			}
			else
			{
				num2 = 0;
			}
		}
	}
	int q = 0;//判断起点为9，1-9，5的反对角线是否五子连珠
	for (q = 1; q <= (col-5); q++)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = row-1, j = q; j < col; i--,j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == 'x')
			{
				num1++;
				if (num1 == 4)
				{
					return 1;
				}
			}
			else
			{
				num1 = 0;
			}
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == 'o')
			{
				num2++;
				if (num2 == 4)
				{
					return 2;
				}
			}
			else
			{
				num2 = 0;
			}
		}
	}
	int num3 = 0;
	for (i = 0; i < row; i++)//判断是否平局（棋盘满子）
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				num3 = 1;
			}
		}
	}
	if (num3 == 0)
	{
		return 3;
	}
	return 0;//若以上三种情况均不是，则继续游戏
}