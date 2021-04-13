#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ¡Á %d = %d ", arr[i], arr[j], arr[i] * arr[j]);
		}
		printf("\n");
	}
	return 0;
}