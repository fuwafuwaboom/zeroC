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
void game(char N1[],char N2[])
{
	char board[ROW][COL];
	Init_board(board, ROW, COL);//��ʼ������
	Print_board(board, ROW, COL);//��ӡ����-�����Ǵ�ӡ��������
	int ret;//������Ϸ����״̬
	while (1)
	{
		printf("��������Ϊ��������+�ո�+�����ꡱ\n");
		Player1Move(board, ROW, COL, N1, N2);//���1����
		system("cls");
		Print_board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
		printf("��������Ϊ��������+�ո�+�����ꡱ\n");
		Player2Move(board, ROW, COL, N1, N2);//���2����
		system("cls");
		Print_board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
	}
	switch (ret)
	{
	case 1:
		system("cls");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                                  ��ϲ%sӮ�ñ�����\n", N1);
		break;
	case 2:
		system("cls");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		printf("                                  ��ϲ%sӮ�ñ�����\n", N2);
		break;
	case 3:
		printf("˫��ƽ�֣�\n");
		break;
	}
}
int main()
{
	int input = 0;
	char Name1[100] = { 0 };
	char Name2[100] = { 0 };
	do
	{
		system("cls");
		printf("***********************\n");
		printf("��������1������");
		scanf("%s", Name1);
		printf("�洢�ɹ���\n");
		printf("***********************\n");
		printf("��������2������");
		scanf("%s", Name2);
		printf("�洢�ɹ���\n");
		printf("***********************\n");
		Sleep(1000);
		system("cls");
		menu();
	again:
		printf("��ѡ��");
		scanf("%d", &input);
		if (1 == input)
		{
			system("cls");
			printf("��������Ϸ��ʼ��");
			Sleep(2000);
			system("cls");
			game(Name1, Name2);
			Sleep(2000);
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                                  �Ƿ������Ϸ��(0/1)");
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
	} while(input);
	return 0;
}