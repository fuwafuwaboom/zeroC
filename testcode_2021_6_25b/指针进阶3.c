#define _CRT_SECURE_NO_WARNINGS 1

//数组参数和指针参数
//写代码的时候我们经常面临数组传参的时候把数组或者指针传给函数

//一维数组传参
#include<stdio.h>
void test(int arr[])//√ 形参部分一维数组大小可以不写
{}
void test(int arr[10])//√ 写了10 但是10仅仅起提示作用 可写可不写
{}
void test(int* arr)//√ 传递的是arr即首元素地址 用整形指针接收 没问题
{}

void test2(int* arr[])//√ arr2是一个存放int*的数组
{}
void test2(int* arr[20])//√ arr2是一个存放int*的数组
{}
void test2(int* *arr)//√ 传递的是arr2即首元素int*的地址 用二级指针接收 没问题
{}

int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
}

//二维数组传参

//传数组（形式上）
void test(int arr[3][5])//√ 二维数组传参 直接传递数组是可行的 数组名写全最好
{}
void test(int arr[][])//× 不可省略列数 因为无列数得不到确定的行数
{}
void test(int arr[][5])//√ 可省略行数 因为规定了列数就确定了行数
{}

//传指针
void test(int(*arr)[5])//√ 传指针必须用数组指针接收 因为这个指针是首元素（第一行数组）的地址
{}

void test(int ** arr)//× 不能写成二级指针 因为本来就不是二级指针
{}

int main()
{
	int arr[3][5] = { 0 };
	test(arr);
}


