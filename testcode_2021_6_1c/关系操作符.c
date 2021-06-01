#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//关系操作符
	int a = 3;
	int b = 5;
	if (a != b)//a == b a > b a < b a >=b a<=b
	{
		printf("hehe\n");
	}
	//比较两个字符串不能使用 == 要用字符串函数

	//逻辑操作符
	//&&逻辑与
	if (a && b)
	{
		printf("haha\n");
	}
	//||逻辑或
	if (a || b)
	{
		printf("hihi\n");
	}
	return 0;
}