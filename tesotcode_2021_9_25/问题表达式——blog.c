#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun()
{
	static int count = 1;
	return ++count;
}
int main()
{
	int a = 0;
	a = fun() - fun() * fun();
	printf("%d\n", a);
	return 0;
}