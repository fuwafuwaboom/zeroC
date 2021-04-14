#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int num = 0;
	int a = 0;
	for (i = 101; i < 200; i+=2)
	{
		for (num = 2; num <= sqrt(i); num++)
		{
			a = 0;
			if (i % num == 0)
				a++;
			if (a == 1)
				break;
		}
		if (0 == a)
			printf("%d ", i);
	}
	return 0;
}