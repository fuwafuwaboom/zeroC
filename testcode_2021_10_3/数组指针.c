#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int arr[3][5])
{}
void test(int arr[][])
{}
void test(int arr[][5])
{}
void test(int* arr[])
{}
void test(int* arr[5])
{}
void test(int** arr)
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);
}