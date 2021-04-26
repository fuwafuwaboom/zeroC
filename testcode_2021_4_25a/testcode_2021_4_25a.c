#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<math.h>
clock_t start, stop;
double duration;
int Fib1(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib1(n - 1) + Fib1(n - 2);
}
int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 1;
	while (i <= n-2)
	{
		c = a + b;
		a = b;
		b = c;
		i++;
	}
	return c;
}
int main()
{
	int n = 45;
	//使用递归法
	start = clock();
	int ret1 = Fib1(n);
	printf("%d\n", ret1);
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("duration = %6.2lf\n", duration); 
	//使用迭代法
	start = clock();
	int ret2 = Fib2(n);
	printf("%d\n", ret2);
	stop = clock();
	duration = ((double)(stop - start)) / CLK_TCK;
	printf("duration = %6.2lf\n", duration);
	return 0;
}