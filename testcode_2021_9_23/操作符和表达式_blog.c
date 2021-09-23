#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	printf("请输入a的值：");
	scanf("%d", &a);
	int b = 1;
	int i = 0;
	int n = 0;
	printf("请输入要改变的位数：");
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		b <<= 1;
	}
	printf("变化后的a为：%d ", a ^ b);
	return 0;
}