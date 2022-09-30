#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<=\n");
	}
	return 0;
}
//答案是什么呢？
//答案是大于，为什么呢？
//因为C库函数的返回值是无符号数
//所以答案是3-6 但是由于是无符号数减去无符号数
//那个补码就是一个无符号数，将会被解读成一个非常大的正数
//这个补码等于原码 所以肯定是大于0的 答案是大于
