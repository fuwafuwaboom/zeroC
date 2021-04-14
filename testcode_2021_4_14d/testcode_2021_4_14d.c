#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******************************\n");
	printf("********   1: play    ********\n");
	printf("******************************\n");
	printf("******************************\n");
	printf("********   0: exit    ********\n");
	printf("******************************\n");

}

void game()
{
	srand((unsigned int)time(NULL));
	int a = rand();
	int b = a % 100 + 1;
	int guess = 0;
	int num = 1;
	while (1)
	{
		printf("请猜数字（1-100）：");
		scanf("%d", &guess);
		if (guess < b)
		{
			printf("猜小了\n");
			num++;
		}
		else if (guess > b)
		{
			printf("猜大了\n");
			num++;
		}
		else
		{
			printf("恭喜你，猜中啦！\n");
			printf("你一共用了%d次\n", num);
			break;
		}
	}
}
int main()
{
	int input = 0;
	menu();
	do
	{
		printf("请选择是否玩耍(1/0)：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("猜数字游戏开始！\n");
			Sleep(2000);
			system("cls");
			game();

			break;
		case 0:
			Sleep(200);
			system("cls");
			printf("已退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;

		}
	} while (input);
}