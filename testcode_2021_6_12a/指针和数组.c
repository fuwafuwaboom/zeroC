#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int empty()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	//数组名是数组首元素的地址
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%p<==>%p\n", &arr[i], p + i);
		*(p + i) = i;
	}
	//p为首地址，p+i就是第i个元素的地址
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	int* p = arr;
	//arr[2] <--> *(p+2) <--> *(2+p) <--> *(arr+2) <--> *(2+arr)
	//也就是说arr[2] <--> *(arr+2) <--> *(2+arr) <--> 2[arr]
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);//这两种写法竟然是等价的
	//为什么呢？
	//因为[]是一个操作符，而编译器在处理[]时
	//会先做一个转换：arr[2] --> *(arr+2)
	//而加法是满足交换律的，所以2[arr] --> *(2+arr) --> *(arr+2)
	printf("%d\n", arr[2]);
	printf("%d\n", p[2]);//这两种写法也是等价的
	//因为p[2] --> *(p+2) --> *(arr+2)
	return 0;
}