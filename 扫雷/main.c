#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	//�������׺����׵�����
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ����������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, ' ');

	//��ӡ��ʼ����
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);

	//�Ų��ף���ҿ�ʼ���ף�
	FindMine(mine, show, ROW, COL);

}

int main()
{
	int input = 0;

	srand((unsigned int)time(NULL));//rand()���������к��� ͨ��ʱ�������������
	
	do
	{
		menu();
     again:
		printf("                          \n");
		printf("      ��ѡ��");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("\n\n\n\n");
			printf("      |--------------------------|\n");
			printf("      |                          |\n");
			printf("      |       ɨ����Ϸ��ʼ��     |\n");
			printf("      |                          |\n");
			printf("      |--------------------------|\n");
			Sleep(1000);
			system("cls");
			game();
			printf("\n�Ƿ������Ϸ(0/1)��\n");
			goto again;
			break;
		case 0:
			printf("\n\n\n\n");
			printf("      |--------------------------|\n");
			printf("      |                          |\n");
			printf("      |       ɨ����Ϸ������     |\n");
			printf("      |                          |\n");
			printf("      |--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("\n\n\n\n");
			printf("      |--------------------------|\n");
			printf("      |            ��            |\n");
			printf("      |                          |\n");
			printf("      |    ��   ������� ��    |\n");
			printf("      |                          |\n");
			printf("      |            ��            |\n");
			printf("      |--------------------------|\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
 }