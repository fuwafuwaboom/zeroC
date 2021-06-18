#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//�˵�������ʵ��
void menu()
{   
	printf("\n\n\n\n");
	printf("      |--------------------------|\n");
	printf("      |        1.��ʼ��Ϸ        |\n");
	printf("      |                          |\n");
	printf("      |        0.�˳���Ϸ        |\n");
	printf("      |--------------------------|\n");
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
	system("cls");
	int i = 0;
	int j = 0;

	printf("��Ϸ����\n�����������ɨ��\n�����ʽ��������+�ո�+������ �س�ȷ��\n\n");
	for (i = 0; i <= col; i++)//��ӡ�к�
	{
		printf("%d   ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("  |---|---|---|---|---|---|---|---|---|\n");
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("|");
			printf(" %c ", board[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("  |---|---|---|---|---|---|---|---|---|\n");
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

//�ж���Ӯ
int IsWin(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count;
}

//�Ų���Χ�׵ĸ���
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	//��һ
	return mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] +
		   mine[x - 1][y]                      + mine[x + 1][y] +
		   mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		   - 8 * '0';
	//����
	/*int count = 0;
	int i = 0;
	int j = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			count += (mine[x + i][y + j] - '0');
		}
	}
	return count;*/
}

void Extend(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	if (show[x][y] == '*'&& x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		//������ - ͳ����Χ�׸���
		int count = GetMineCount(mine, x, y);
		show[x][y] = count + '0';//count������,��Ҫת�����ַ���0��ASCII��ֵ��48
		if (show[x][y] == '0')
		{
			show[x][y] = ' ';
			Extend(mine, show, x - 1, y - 1);
			Extend(mine, show, x, y - 1);
			Extend(mine, show, x + 1, y - 1);
			Extend(mine, show, x - 1, y);
			Extend(mine, show, x + 1, y);
			Extend(mine, show, x - 1, y + 1);
			Extend(mine, show, x, y + 1);
			Extend(mine, show, x + 1, y + 1);
		}
	}
	return;
}

//ʧ�ܶ���
void anime_fail()
{
	char arr1[] = "|  G  A  M  E  O  V  E  R  |";
	char arr2[] = "                            ";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("\n\n\n\n");
		printf("      |--------------------------|\n");
		printf("      |                          |\n");
		printf("      %s\n", arr2);
		printf("      |                          |\n");
		printf("      |--------------------------|\n");
		printf("\n\n\n\n");
		Sleep(50);
		system("cls");
		left++;
		right--;
	}
	printf("\n\n\n\n");
	printf("      |--------------------------|\n");
	printf("      |                          |\n");
	printf("      %s\n", arr2);
	printf("      |                          |\n");
	printf("      |--------------------------|\n");
	printf("\n\n\n\n");
	return 0;
}

//�ɹ�����
void anime_success()
{
	char arr1[] = "|     ��ϲ��ɨ�׳ɹ���     |";
	char arr2[] = "                            ";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("\n\n\n\n");
		printf("      |--------------------------|\n");
		printf("      |                          |\n");
		printf("      %s\n", arr2);
		printf("      |                          |\n");
		printf("      |--------------------------|\n");
		printf("\n\n\n\n");
		Sleep(50);
		system("cls");
		left++;
		right--;
	}
	printf("\n\n\n\n");
	printf("      |--------------------------|\n");
	printf("      |                          |\n");
	printf("      %s\n", arr2);
	printf("      |                          |\n");
	printf("      |--------------------------|\n");
	printf("\n\n\n\n");
	return 0;
}

//�Ų��׵ĺ���ʵ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.�����׵�����
	//2.������괦�ǲ�����
	  //(1)���� - ��Ϸ����
	  //(1)������ - ͳ����Χ�׸��� - �����Ų��׵���Ϣ��show���飬��Ϸ����

	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("\n       ���������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//Ҫ��������ķ�Χ
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("\n\n\n\n");
				printf("         ���ź����㲻�����ף�\n");
				Sleep(1000);
				system("cls");
				anime_fail();
				Sleep(2000);
				goto over;
			}
			else
			{
				Extend(mine, show, x, y);
				DisplayBoard(show, row, col);
				if (IsWin(show, row, col) == 10)
				{
					anime_success();
					Sleep(2000);
					goto over;
				}
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
over:
	return;
}