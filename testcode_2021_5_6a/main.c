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
	
}
int main()
{
	int input = 0;
	do
	{
		menu();
	again:
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(500);
			system("cls");
			printf("扫雷游戏开始：\n");
			Sleep(500);
			system("cls");
			game();
			break;
		case 0:
			Sleep(500);
			system("cls");
			printf("游戏已退出!\n");
			break;
		default :
			printf("选择错误，请重新选择：\n");
			goto again;
		}
	} while (input);
	return 0;
}