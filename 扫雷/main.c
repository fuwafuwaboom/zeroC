#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	//创建埋雷和排雷的棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化两个棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '.');

	//打印初始棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);

	//排查雷（玩家开始排雷）
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));//rand()函数的先行函数 通过时间钟生成随机数
	
	do
	{
		menu();
     again:
		printf("                          \n");
		printf("      请选择：");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("\n\n\n\n");
			printf("      |--------------------------|\n");
			printf("      |                          |\n");
			printf("      |       扫雷游戏开始！     |\n");
			printf("      |                          |\n");
			printf("      |--------------------------|\n");
			Sleep(1000);
			system("cls");
			game();
			printf("\n是否继续游戏(0/1)？\n");
			goto again;
			break;
		case 0:
			printf("\n\n\n\n");
			printf("      |--------------------------|\n");
			printf("      |                          |\n");
			printf("      |       扫雷游戏结束！     |\n");
			printf("      |                          |\n");
			printf("      |--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("\n\n\n\n");
			printf("      |--------------------------|\n");
			printf("      |            ×            |\n");
			printf("      |                          |\n");
			printf("      |    ×   输入错误！ ×    |\n");
			printf("      |                          |\n");
			printf("      |            ×            |\n");
			printf("      |--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
 }