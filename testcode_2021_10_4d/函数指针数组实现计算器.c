#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*********************\n");
	printf("** 1.add     2.sub **\n");
	printf("** 3.mul     4.div **\n");
	printf("**      0.exit     **\n");
	printf("*********************\n");
}
int main()
{
	//������ - �������ͱ����ļӡ������ˡ���
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do {
		system("cls");
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			int (*pfarr[])(int, int) = { NULL,Add,Sub,Mul,Div };
			//���Ǿ�����������һ�����������ת�Ʊ�
			printf("������������������");
			scanf("%d %d", &x, &y);
			ret = (pfarr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
		Sleep(2000);
	} while (input);
	return 0;
}