#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(unsigned int n)
{
	printf("%d", n % 10);
	if (n > 9)
	{
		print(n / 10);
	}
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}