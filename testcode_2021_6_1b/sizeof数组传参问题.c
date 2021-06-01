#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//4
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));//4
}
int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(ch));//10
	test1(arr);//数组传参传的是数组首元素的地址，是一个指针
	test2(ch);
}