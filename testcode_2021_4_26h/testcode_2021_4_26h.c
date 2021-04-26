#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void exchange(int a[], int b[], int sz)
{
	int tmp = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
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
int main()
{
	int A[] = { 1,2,3 };
	int B[] = { 4,5,6 };
	exchange(A, B, 3);
	print(A,3);
	print(B,3);
	return 0;
}