#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int s(int a[])
{
	printf("%d\n", a);
}
int main()
{
	int arr[10] = { 1,8989,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[0]);
	printf("%d\n", arr);
	s(arr);
}