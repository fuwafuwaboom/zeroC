#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = a ^ b;
	int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		sum += c & 1;
		c = c >> 1;//��λ����������ı���������ֵ����Ҫ�븳ֵ����������ʹ��!
	}
	printf("%d\n", sum);
	return 0;
}