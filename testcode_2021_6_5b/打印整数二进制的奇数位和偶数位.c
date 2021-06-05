#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int a)//把十进制数的二进制数列打印出来
{
	if (a)
	{
		print(a / 2);
		printf("%d", a % 2);
	}
	return;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int j = 1;
	int js = 0;
	int os = 0;
	for (i = 0; i < 16; i++)
	{
		int b = a & j;
		js += b;
		j = j << 1;
		int c = a & j;
		os += c;
		j = j << 1;
	}
	printf("奇数位序列是：");
	print(js);//打印奇数序列
	printf("\n");
	printf("偶数位序列是：");
	print(os);//打印偶数序列
	return 0;
}