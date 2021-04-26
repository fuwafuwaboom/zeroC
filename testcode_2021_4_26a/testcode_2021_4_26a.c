#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	int j = 1;
	double sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += j * 1.0 / i;
		j = -j;
	}
	printf("%lf\n", sum);
	return 0;
}