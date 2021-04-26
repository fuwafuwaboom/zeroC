#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void bubble_sort(int a[],int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = sz; i > 0; i--)
	{
		int flag = 0;
		for (j = 0; j < i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				flag++;
			}
		}
		if (0 == flag)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 2,5,3,2,1,7,9,4,8,12,654,321,46 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}