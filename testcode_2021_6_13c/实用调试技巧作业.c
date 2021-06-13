#define _CRT_SECURE_NO_WARNINGS 1
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数来调整该数组中数字的顺序
//使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include<stdio.h>
void adjust(int* a, int sz)
{
	int arr1[10] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int* b = a;
	while (m < 10)
	{
		if ((*b) % 2 == 1)
		{
			arr1[i] = *b;
			i++;
			b++;
		}
		else
		{
			arr1[sz - 1 - j] = *b;
			j++;
			b++;
		}
		m++;
	}
	for (k = 0; k < sz; k++)
	{
		*(a + k) = arr1[k];
	}
	return;
}
int main()
{
	int arr[10] = { 21,12,342,12,1,2,4,2,1,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	adjust(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}