#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Cpa(int a,int b)
{
	if (a > b)
	{
		return a;
	}
	else if (a < b)
	{
		return b;
	}
	else
	{
		return a;
	}	
}
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	scanf("%d%d", &x, &y);
	z = Cpa(x, y);
	printf("%d", z);
	return 0;
}