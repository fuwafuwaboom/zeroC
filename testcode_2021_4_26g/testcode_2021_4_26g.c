#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int a[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
	}

}
void print(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void reverse(int a[],int len)
{
	char tmp = 0;
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}