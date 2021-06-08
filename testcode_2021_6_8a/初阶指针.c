#define _CRT_SECURE_NO_WARNINGS 1
//指针有两层含义：一是地址；二是存放地址的指针变量
//在32位的机器上，地址是由32个0/1组成的二进制序列，
//那地址就是得由4个字节的空间来存储；64位平台同理，则需要8个字节
#include<stdio.h>
int main()
{
	int a = 0x11223344;
	char* pc = &a;//a的地址也是四个字节，指针类型char*也是四个字节，所以能够正常存储
	*pc = 0;//解引用pc的时候，由于是char*类型的指针，所以只有权限访问一个字节

	//由此可以看出，指针类型的第一个意义：
	//指针类型决定了指针解引用的时候权限有多大
	//char 1 - short 2 - int 4 - double 8

	int arr[10] = { 0 };
	int* p = arr;
	char* p_c = arr;
	printf("%p\n", p);
	printf("%p\n", p + 1);//跳过了4
	printf("%p\n", p_c);
	printf("%p\n", p_c + 1);//跳过了1

	//由此可以看出指针类型的第二个意义：
	//指针类型决定了指针变量“走一步”能“走多远”，即“步长”
	
	int arr1[10] = { 0 };
	char* p = arr1;
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		*(p + i) = 1;
		//使用char*指针类型访问，可以一个一个字节的访问
		//这不失为一种技巧
	}
	return 0;
}