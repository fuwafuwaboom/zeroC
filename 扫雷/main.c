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
	//�������׺����׵�����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ����������
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
		printf("      ��ѡ��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("|--------------------------|\n");
			printf("|                          |\n");
			printf("|         ��ʼɨ�ף�       |\n");
			printf("|                          |\n");
			printf("|--------------------------|\n"); 
			Sleep(1000);
			system("cls");
			break;
		case 0:
			printf("|--------------------------|\n");
			printf("|                          |\n");
			printf("|         ��Ϸ�ѽ���       |\n");
			printf("|                          |\n");
			printf("|--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("|--------------------------|\n");
			printf("|                          |\n");
			printf("|   ѡ�����������ѡ�� |\n");
			printf("|                          |\n");
			printf("|--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
 }