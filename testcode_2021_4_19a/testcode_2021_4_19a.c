#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdio.h>
#include<math.h>
int sushu(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int a = 0;
	printf("打印100-200间的素数：\n");
	for (a = 101; a < 200; a += 2)
	{
		if (sushu(a))
			printf("%d ", a);
	}
	return 0;
}
