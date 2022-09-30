#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("%p\n", Add);
	printf("%p\n", &Add);
	return 0;
}