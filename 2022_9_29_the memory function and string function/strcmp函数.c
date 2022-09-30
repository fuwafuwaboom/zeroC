#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char* p = "abc";
	char* q = "abcdef";
	if (p > q)//p和q是字符指针 所以比较的是两个地址，这个方式肯定是错误的
	{
		printf(">");
	}
	else
	{
		printf("<=");
	}
	//同时 这样写也是错的
	//if("abc">"abcdef")
	//这种写法也是比较首元素的地址
	//所以字符串的比较绝对不能用大于小于号
	return 0;
}