#define _CRT_SECURE_NO_WARNINGS 1
//����С������
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//����
	/*int i = 1;
	for (i = 1;; i++)
	{
		if (a * i % b == 0)
		{
			printf("%d\n", a * i);
			break;
		}
	}*/

	//��һ
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