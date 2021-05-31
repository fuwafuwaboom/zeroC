#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void method1()
{
	int a = 0;
	scanf("%d", &a);
	int b = 1;
	int d = 0;
	while (0 != a)
	{
		int c = a & b;
		d = d + c;
		a = a >> 1;
	}
	printf("%d", d);
	return 0;
}

int main()
{
	method1();
	return 0;
}