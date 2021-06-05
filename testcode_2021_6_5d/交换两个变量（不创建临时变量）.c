#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 13;
	int b = 29;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d\nb = %d", a, b);
	return 0;
}