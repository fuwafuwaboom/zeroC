#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = a ^ b;
	int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		sum += c & 1;
		c = c >> 1;//移位操作符不会改变运算数的值！需要与赋值操作符搭配使用!
	}
	printf("%d\n", sum);
	return 0;
}

void method2(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n &= (n - 1);
		count++;
	}
	printf("%d\n", count);
	return;
}
void NewMethod()
{
	//第二种思路：先异或 再统计结果中1的个数 就是不同位的个数
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int ret = m ^ n;
	method2(ret);
	return 0;
}