#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k = 0;
	int arr[10];
	for (k = 0; k < 10; k++)
	{
		scanf("%d", &arr[k]);
	}
	int n = 0;
	int i = 0;
	int j = 0;
	int ret = 0;
	n = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				ret = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ret;
			}
		}
	}
	printf("最大值是：%d ", arr[0]);
	return 0;
}