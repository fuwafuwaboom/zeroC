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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Sleep(500);
			system("cls");
			printf("ɨ����Ϸ��ʼ��\n");
			Sleep(500);
			system("cls");
			game();
			break;
		case 0:
			Sleep(500);
			system("cls");
			printf("��Ϸ���˳�!\n");
			break;
		default :
			printf("ѡ�����������ѡ��\n");
			goto again;
		}
	} while (input);
	return 0;
}