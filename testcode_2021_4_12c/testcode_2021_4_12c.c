#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	scanf("%d", &n);
	for (j = 1; j <= n; j++)
	{
		ret = 1;//一定要在计算n！前将ret初始化为1
		for (i = 1; i <= j; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0; 
}