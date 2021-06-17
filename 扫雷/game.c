#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int win = 0;//踩点数
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

	printf("游戏规则：\n输入坐标进行扫雷\n给认为是雷的坐标做上标记\n");
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

//排查周围雷的个数
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

void Extend(char mine[ROWS][COLS],char show[ROWS][COLS], int x, int y)
{
	if (show[x][y] == ' '&& x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		//不是雷 - 统计周围雷个数
		int count = GetMineCount(mine, x, y);
		show[x][y] = count + '0';//count是数字,需要转换成字符，0的ASCII码值是48
		win++;
		if (show[x][y] == '0')
		{
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

//排查雷的函数实现
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1.输入雷的坐标
	//2.检查坐标处是不是雷
	  //(1)是雷 - 游戏结束
	  //(1)不是雷 - 统计周围雷个数 - 储存排查雷的信息到show数组，游戏继续

	int x = 0;
	int y = 0;
	
	while (win < row * col - EASY_COUNT)
	{
		int sign = 0;
		printf("踩点/标记？(1/2):");
		scanf("%d", &sign);
		if (sign == 1)
		{
			printf("\n       请输入坐标：");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)//要限制坐标的范围
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你不慎踩雷！\n");
					printf("\n\n\n\n");
					printf("      |--------------------------|\n");
					printf("      |                          |\n");
					printf("      |    ×  GAME  OVER  ×    |\n");
					printf("      |                          |\n");
					printf("      |--------------------------|\n");
					Sleep(1000);
					system("cls");
					goto over;
				}
				else
				{
					Extend(mine, show, x, y);
					DisplayBoard(show, row, col);
				}
			}
			else
			{
				printf("坐标不合法，请重新输入\n");
			}
		}
		else if (sign == 2)
		{
			printf("请输入待标记坐标：");
			scanf("%d%d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)//要限制坐标的范围
			{
				show[x][y] = '#';
				DisplayBoard(show, row, col);
			}
			else
			{
				printf("坐标不合法，请重新输入\n");
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
		
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你,排雷成功！");
		DisplayBoard(show, ROW, COL);
	}
over:
	return;
}