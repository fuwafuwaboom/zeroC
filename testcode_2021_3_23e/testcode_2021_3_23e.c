#include<stdio.h>
//自定义函数的使用
int Add(int x, int y)//int Add--int是函数的返回类型 Add是函数体
{
	int z = x + y;
	return z;//函数必须有返回值 没结果怎么叫函数呢
}//{}里是叫函数体
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	int a = 10;
	int b = 20;
	sum = Add(a, b);//调用函数Add
	printf("sum=%d\n", sum);
	return 0;
}