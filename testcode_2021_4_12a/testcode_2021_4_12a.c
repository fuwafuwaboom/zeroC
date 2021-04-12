#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int num = 0;
	int a = 0;
	for (i = 100; i <= 200; i++)
	{
		for (num = 2, a = 0; num <= (i - 1); num++)
		{
			if (i % num == 0)
				a++;
		}
		if (a == 0)
			printf("%d ", i);
	}
	return 0;
}