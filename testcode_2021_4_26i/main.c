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
	Init_board(board, ROW, COL);//��ʼ������
	Print_board(board, ROW, COL);//��ӡ����-�����Ǵ�ӡ��������
	int ret;//������Ϸ����״̬
	while (1)
	{
		printf("��������Ϊ��������+�ո�+�����ꡱ\n");
		Player1Move(board, ROW, COL);//���1����
		system("cls");
		Print_board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
		printf("��������Ϊ��������+�ո�+�����ꡱ\n");
		Player2Move(board, ROW, COL);//���2����
		system("cls");
		Print_board(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 0)
			break;
	}
	switch (ret)
	{
	case 1:
		printf("��ϲ���1Ӯ�ñ�����\n");
		break;
	case 2:
		printf("��ϲ���2Ӯ�ñ�����\n");
		break;
	case 3:
		printf("˫��ƽ�֣�\n");
		break;
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (1 == input)
		{
			system("cls");
			printf("��������Ϸ��ʼ��");
			Sleep(2000);
			system("cls");
			game();
		}
		else if (0 == input)
		{
			system("cls");
			printf("��Ϸ���˳���");
		}
		else
		{
			system("cls");
			printf("����������������룺");
			Sleep(2000);
			system("cls");
		}
	} while(input);
	return 0;
}