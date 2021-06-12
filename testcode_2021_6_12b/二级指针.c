#define _CRT_SECURE_NO_WARNINGS 1
//二级指针
#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;//a是一个变量，pa存放的是a的地址
	//int*：*说明pa是指针，int说明pa指向的对象是int型
	int** ppa = &pa;//pa也是个变量，&pa就是取出pa在内存中的起始地址
	//int**：*说明ppa是指针，int*说明ppa指向的对象是int*型
	//ppa就是一个二级指针变量
	if (*ppa == pa)
		printf("haha");
	if (**ppa == *pa && *pa == a)
		printf("haha");
	return 0;
}