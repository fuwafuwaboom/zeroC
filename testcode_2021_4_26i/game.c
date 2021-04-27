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
				printf("  %d ", m + 1);
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
void Player1Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���1�ߣ������������꣩��");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�˴������ӣ����������ӣ�\n");
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}

}
void Player2Move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���2�ߣ������������꣩��");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("�˴������ӣ����������ӣ�\n");
			}
		}
		else
		{
			printf("����Ƿ������������룺\n");
		}
	}

}
int IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//�ж����Ƿ���������
	{
		int num1 = 0;
		int num2 = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == '*')
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
			if (board[i][j] == board[i][j + 1] && board[i][j] == '#')
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
	for (j = 0; j < col; j++)//�ж����Ƿ���������
	{
		int num1 = 0;
		int num2 = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] == '*')
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
			if (board[i][j] == board[i+1][j] && board[i][j] == '#')
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
	int m = 0;//�ж����Ϊ5,0-0,0�Խ����Ƿ���������
	for (m = 5; m >= 0; m--)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = m, j = 0; i < row; i++,j++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == '*')
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
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == '#')
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
	int n = 0;//�ж����Ϊ0,1-0,5�Խ����Ƿ���������
	for (n = 1; n<=5 ; n++)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = 0, j = n; j < col; j++, i++)
		{
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == '*')
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
			if (board[i][j] == board[i + 1][j + 1] && board[i][j] == '#')
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
	int p = 0;//�ж����Ϊ4��0-9��0�ķ��Խ����Ƿ���������
	for (p = 4; p <= 9; p++)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = p, j = 0; i >= 0; i--, j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == '*')
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
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == '#')
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
	int q = 0;//�ж����Ϊ9��1-9��5�ķ��Խ����Ƿ���������
	for (q = 1; q <= 5; q++)
	{
		int num1 = 0;
		int num2 = 0;
		for (i = 9, j = q; j < col; i--,j++)
		{
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == '*')
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
			if (board[i][j] == board[i - 1][j + 1] && board[i][j] == '#')
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
	for (i = 0; i < row; i++)//�ж��Ƿ�ƽ�֣��������ӣ�
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
	return 0;//������������������ǣ��������Ϸ
}