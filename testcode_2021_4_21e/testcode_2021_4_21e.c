#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sum = 0;
int DigitSum(int n)
{
	sum += (n % 10);
	if(n>9)
		DigitSum(n / 10);
	else
		return sum;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("%d", DigitSum(a));
	return 0;
}