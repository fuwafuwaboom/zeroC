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
		c = c >> 1;//移位操作符不会改变运算数的值！需要与赋值操作符搭配使用!
	}
	printf("%d\n", sum);
	return 0;
}