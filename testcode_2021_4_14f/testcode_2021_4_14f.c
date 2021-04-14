#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int sushu(int x)
{
	int i = 0;
	int sum = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			sum++;
	}
	if (sum)
		return 0;
	else
		return 1;
}
int main()
{
	int j = 0;
	int num = 0;
	for (j = 101; j < 200; j += 2)
	{
		switch (sushu(j))
		{
		case 0:
			break;
		case 1:
			printf("%d ", j);
			break;
		}

	}
}