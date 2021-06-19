#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//菜单函数的实现
void menu()
{   
	printf("\n\n\n\n");
	printf("      |--------------------------|\n");
	printf("      |        1.开始游戏        |\n");
	printf("      |                          |\n");
	printf("      |        0.退出游戏        |\n");
	printf("      |--------------------------|\n");
	return;
}

//初始化棋盘函数实现
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

//打印棋盘函数实现
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	system("cls");
	int i = 0;
	int j = 0;

	printf("游戏规则：\n输入坐标进行扫雷\n坐标格式：横坐标+空格+纵坐标 回车确定\n\n");
	for (i = 0; i <= col; i++)//打印列号
	{
		printf("%d   ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("  |---|---|---|---|---|---|---|---|---|\n");
		printf("%d ", i);//打印行号
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

//布置雷的函数实现
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = 10;
	while (count)
	{
		//生成随机的下标
		int x = rand() % row + 1;//rand函数生成随机数是0-32767，%9后，范围为0-8，+1范围为1-9
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//判断输赢
int IsWin(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '.')
			{
				count++;
			}
		}
	}
	return count;
}

//排查周围雷的个数
static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	//法一
	return mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1] +
		   mine[x - 1][y]                      + mine[x + 1][y] +
		   mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1]
		   - 8 * '0';
	//法二
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
	if (show[x][y] == '.'&& x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		//不是雷 - 统计周围雷个数
		int count = GetMineCount(mine, x, y);
		show[x][y] = count + '0';//count是数字,需要转换成字符，0的ASCII码值是48
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

//失败动画
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

//成功动画
void anime_success()
{
	char arr1[] = "|     恭喜你扫雷成功！     |";
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

//排查雷的函数实现
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入雷的坐标
	//2.检查坐标处是不是雷
	  //(1)是雷 - 游戏结束
	  //(1)不是雷 - 统计周围雷个数 - 储存排查雷的信息到show数组，游戏继续

	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("\n       请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//要限制坐标的范围
		{
			if (mine[x][y] == '1')
			{
				system("cls");
				printf("\n\n\n\n");
				printf("         很遗憾，你不慎踩雷！\n");
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
			printf("坐标不合法，请重新输入\n");
		}
	}
over:
	return;
}