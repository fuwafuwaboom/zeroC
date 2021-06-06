#define _CRT_SECURE_NO_WARNINGS 1
////写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//#include<stdio.h>
//void print(int* x,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(x + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//
////例如：2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 1 + 11 + 111 + 1111 + 11111;
//	printf("%d", a * i);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<stdio.h>
int pow(int a, int n)
{
	if (0 == n)
	{
		return 1;
	}
	else
	{
		int i = 0;
		int sum = 1;
		for (i = 0; i < n; i++)
		{
			sum *= a;
		}
		return sum;
	}
}
int main()
{
	int i = 0;
	for (i = 1; i <= 100000; i++)
	{
		int n = 0;
		while (pow(10,n) <= i)
		{
			n++;
		}
		int j = 0;
		int k = i;
		int sum = 0;
		for (j = 0; j < n; j++)
		{
			sum += pow((k % 10), n);
			k = k / 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}