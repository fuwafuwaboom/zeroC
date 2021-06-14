#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void method1(int a)
{
	int i = 0;
	int sum = 0;
	while (i < 32)//不可以写成 a != 0 ,因为这个条件不适用于负数！
	{
		int c = a & 1;
		sum += c;
		a = a >> 1;
		i++;
	}
	printf("%d\n", sum);
	return;
}

void method2(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n &= (n - 1);//n&(n-1)就可以自动实现每次消去右边的一个1
		count++;
	}
	printf("%d\n", count);
	return;
	//同理，count == 1 可以判断n是否是2的倍数
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	method1(a);
	method2(a);
	return 0;
}