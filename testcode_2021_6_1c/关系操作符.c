#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//��ϵ������
	int a = 3;
	int b = 5;
	if (a != b)//a == b a > b a < b a >=b a<=b
	{
		printf("hehe\n");
	}
	//�Ƚ������ַ�������ʹ�� == Ҫ���ַ�������

	//�߼�������
	//&&�߼���
	if (a && b)
	{
		printf("haha\n");
	}
	//||�߼���
	if (a || b)
	{
		printf("hihi\n");
	}
	return 0;
}