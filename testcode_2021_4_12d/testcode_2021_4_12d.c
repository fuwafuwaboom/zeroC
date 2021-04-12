#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d",& n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}