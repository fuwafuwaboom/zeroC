#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", &i);
	printf("%p\n", &arr[9]);
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 10;
		printf("hehe\n");
	}
	return 0;
}
//release版本会把i的地址放在arr[0]下面
//这样就彻底避免了程序的死循环
//所以release版本可能会对程序进行优化