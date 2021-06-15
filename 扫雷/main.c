#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("|--------------------------|\n");
	printf("|          1.play          |\n");
	printf("|                          |\n");
	printf("|          0.exit          |\n");
	printf("|--------------------------|\n");
	
}

void game()
{
	//创建埋雷和排雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化两个棋盘
	InitBoard(mine, ROWS, COLS);
	InitBoard(show, ROWS, COLS);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("                          \n");
		printf("      请选择：");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("|--------------------------|\n");
			printf("|                          |\n");
			printf("|         开始扫雷！       |\n");
			printf("|                          |\n");
			printf("|--------------------------|\n"); 
			Sleep(1000);
			system("cls");
			break;
		case 0:
			printf("|--------------------------|\n");
			printf("|                          |\n");
			printf("|         游戏已结束       |\n");
			printf("|                          |\n");
			printf("|--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("|--------------------------|\n");
			printf("|                          |\n");
			printf("|   选择错误，请重新选择！ |\n");
			printf("|                          |\n");
			printf("|--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
 }