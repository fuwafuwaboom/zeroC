#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void method1(int a)
{
	int i = 0;
	int sum = 0;
	while (i < 32)//������д�� a != 0 ,��Ϊ��������������ڸ�����
	{
		int c = a & 1;
		sum += c;
		a = a >> 1;
		i++;
	}
	printf("%d\n", sum);
	return;
}

void method2(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n &= (n - 1);//n&(n-1)�Ϳ����Զ�ʵ��ÿ����ȥ�ұߵ�һ��1
		count++;
	}
	printf("%d\n", count);
	return;
	//ͬ��count == 1 �����ж�n�Ƿ���2�ı���
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	method1(a);
	method2(a);
	return 0;
}