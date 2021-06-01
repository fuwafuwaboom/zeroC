#define _CRT_SECURE_NO_WARNINGS 1
//使用三目操作符比较三个数中最大的那一个
#include<stdio.h>
int Max_num(int x, int y, int z)
{
	return(x > y ? z > x ? z : x : y > z ? y : z);
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", Max_num(a, b, c));

	//逗号表达式
	int d = (c = 5, a = c + 3, b = a + 4, c += 5);
	//逗号表达式 —— 要从右往左计算，但是整个表达式的结果是最后一个表达式的值
	printf("%d\n", d);
	return 0;
}