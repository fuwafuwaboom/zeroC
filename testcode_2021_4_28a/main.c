#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("******************************************\n");
	printf("***************            ***************\n");
	printf("***************  1: play   ***************\n");
	printf("***************            ***************\n");
	printf("******************************************\n");
	printf("***************            ***************\n");
	printf("***************  0: exit   ***************\n");
	printf("***************            ***************\n");
	printf("******************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');//初始化雷盘
	InitBoard(show, ROWS, COLS, '*');
	ShowBoard(mine,ROW,COL);
	ShowBoard(show,ROW,COL);
}
int main()
{
	int input = 0;
	do
	{
		system("cls");
		menu();
	again:
		printf("请选择：");
		scanf("%d", &input);
		if (1 == input)
		{
			system("cls");
			printf("扫雷开始！");
			Sleep(2000);
			system("cls");
			game();
			printf("是否继续游戏？(0/1)");
			goto again;
		}
		else if (0 == input)
		{
			system("cls");
			printf("游戏已退出！");
		}
		else
		{
			printf("输入错误，请重新输入!\n");
			goto again;
		}
	} while (input);
	return 0;
}