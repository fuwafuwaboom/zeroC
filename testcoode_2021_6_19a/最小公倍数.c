#define _CRT_SECURE_NO_WARNINGS 1
//求最小公倍数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//法二
	/*int i = 1;
	for (i = 1;; i++)
	{
		if (a * i % b == 0)
		{
			printf("%d\n", a * i);
			break;
		}
	}*/

	//法一
	int m = a > b ? a : b;
	while (1)
	{
		if (m % a == 0 && m % b == 0)
		{
			printf("%d\n", m);
			break;
		}
		m++;
	}
	return 0;
}