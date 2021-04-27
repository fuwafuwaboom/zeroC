#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("*************************\n");
	printf("******   1.play   *******\n");
	printf("*************************\n");
	printf("******   0.exit   *******\n");
	printf("*************************\n");
}
void game()
{
	char board[ROW][COL];
	Init_board(board, ROW, COL);//初始化棋盘
	Print_board(board, ROW, COL);//打印棋盘-本质是打印数组内容
	int ret;//接收游戏进行状态
	while (1)
	{
		printf("落子坐标为“横坐标+空格+纵坐标”\n");
		Player1Move(board, ROW, COL);//玩家1下棋
		system("cls");
		Print_board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
		printf("落子坐标为“横坐标+空格+纵坐标”\n");
		Player2Move(board, ROW, COL);//玩家2下棋
		system("cls");
		Print_board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
	}
	switch (ret)
	{
	case 1:
		printf("恭喜玩家1赢得比赛！\n");
		break;
	case 2:
		printf("恭喜玩家2赢得比赛！\n");
		break;
	case 3:
		printf("双方平局！\n");
		break;
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (1 == input)
		{
			system("cls");
			printf("五子棋游戏开始！");
			Sleep(2000);
			system("cls");
			game();
		}
		else if (0 == input)
		{
			system("cls");
			printf("游戏已退出！");
		}
		else
		{
			system("cls");
			printf("输入错误，请重新输入：");
			Sleep(2000);
			system("cls");
		}
	} while(input);
	return 0;
}