#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//&与*
	int a = 10;
	printf("%p\n", &a);//& —— 取地址操作符（单目）
	int* pa = &a;//pa是指针变量，专门用来存放地址
	printf("%d\n", *pa + 1);//* —— 解引用操作符（单目）

	//强制类型转换
	int b = (int)3.14;//3.14是double型数据，需要先转换
	printf("%d\n", b);
	return 0;
}