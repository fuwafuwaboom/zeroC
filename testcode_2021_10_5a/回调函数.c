#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������");
	scanf("%d %d", &x, &y);
	printf("ret = %d\n", pf(x, y));
	return;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int ret = 0;
	
	do {
		printf("��ѡ��1.�ӷ� 2.���� 3.�˷� 4.���� 0.�˳�\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�������˳�\n");
		case 1:
			Calc(Add); break;
		case 2:
			Calc(Sub); break;
		case 3:
			Calc(Mul); break;
		case 4:
			Calc(Div); break;
		default:
			printf("����������������룡\n");
		}
	} while(input);
	return 0;
}