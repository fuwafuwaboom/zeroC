#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//�˵�������ʵ��
void menu()
{
	printf("|--------------------------|\n");
	printf("|          1.play          |\n");
	printf("|                          |\n");
	printf("|          0.exit          |\n");
	printf("|--------------------------|\n");
	return;
}

//��ʼ�����̺���ʵ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
	return;
}

//��ӡ���̺���ʵ��
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= col; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		pritnf("\n");
	}
}

//�����׵ĺ���ʵ��
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = 10;
	while (count)
	{
		//����������±�
		int x = rand() % row + 1;//rand���������������0-32767��%9�󣬷�ΧΪ0-8��+1��ΧΪ1-9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//�Ų���Χ�׵ĸ���
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] +
		   mine[x - 1][y]                      + mine[x + 1][y] +
		   mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		   - 8 * '0';
}

static int GetMineCount1(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;
}

//�Ų��׵ĺ���ʵ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����׵�����
	//2.������괦�ǲ�����
	  //(1)���� - ��Ϸ����
	  //(1)������ - ͳ����Χ�׸��� - �����Ų��׵���Ϣ��shou���飬��Ϸ����

	int x = 0;
	int y = 0;

	while (1)
	{
		printf("������Ҫ�Ų��׵����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//Ҫ��������ķ�Χ
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����Ϸ����\n");
				DisplayBoard(mine, row, col);
			}
			else
			{
				//������ - ͳ����Χ�׸���
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';//count������,��Ҫת�����ַ���0��ASCII��ֵ��48
				DisplayBoard(show, row, col);
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
	

}