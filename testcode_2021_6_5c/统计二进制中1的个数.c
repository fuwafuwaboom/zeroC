#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int erjinzhi(int a)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 32; i++)
	{
		sum += a & 1;
		a >>= 1;
	}
	return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d ¸ö 1", erjinzhi(a));
	return 0;
}