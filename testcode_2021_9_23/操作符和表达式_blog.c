#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("������a��ֵ��");
	scanf("%d", &a);
	int b = 1;
	int i = 0;
	int n = 0;
	printf("������Ҫ�ı��λ����");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		b <<= 1;
	}
	printf("�仯���aΪ��%d ", a ^ b);
	return 0;
}