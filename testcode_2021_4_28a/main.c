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
	InitBoard(mine, ROWS, COLS, '0');//��ʼ������
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
		printf("��ѡ��");
		scanf("%d", &input);
		if (1 == input)
		{
			system("cls");
			printf("ɨ�׿�ʼ��");
			Sleep(2000);
			system("cls");
			game();
			printf("�Ƿ������Ϸ��(0/1)");
			goto again;
		}
		else if (0 == input)
		{
			system("cls");
			printf("��Ϸ���˳���");
		}
		else
		{
			printf("�����������������!\n");
			goto again;
		}
	} while (input);
	return 0;
}