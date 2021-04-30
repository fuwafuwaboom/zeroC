#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 2,4,6,8,10,12,14,16,18,20 };
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	printf("%p\n", arr + 1);
	return 0; 
}