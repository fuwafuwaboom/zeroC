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
		printf("�������(1-100)��");
		scanf("%d", &guess);
		if (guess < b)
		{
			printf("��С��\n");
			num++;
		}
		else if (guess > b)
		{
			printf("�´���\n");
			num++;
		}
		else
		{
			printf("��ϲ�㣬��������\n");
			printf("��һ������%d��\n", num);
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
		printf("��ѡ���Ƿ���ˣ(1/0)��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			printf("��������Ϸ��ʼ��\n");
			Sleep(2000);
			system("cls");
			game();

			break;
		case 0:
			Sleep(200);
			system("cls");
			printf("���˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
}