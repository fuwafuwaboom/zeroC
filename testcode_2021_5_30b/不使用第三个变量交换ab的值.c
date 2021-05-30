#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void method1()
{
	int a = 3;
	int b = 5;
	int c = 0;
	printf("a=%d b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d\n", a, b);
	//但是这个写法不符合题意 因为不能使用第三个变量
}
void method2()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	//缺点是a、b的值有上限（整型上限），a+b时容易溢出
}
void method3()
{
	int a = 3;
	//00000011
	int b = 5;
	//00000101
	printf("a=%d b=%d\n", a, b);
	a = a ^ b;
	//00000110
	b = a ^ b;//原理：a^b^b = a^0 = a
	//00000011
	a = a ^ b;//原理：a^a^b = 0^b = b
	//00000101
	printf("a=%d b=%d\n", a, b);
	
	//异或的原理：
	//a ^ a == 0;
	//0 ^ a == a;
}
int main()
{
	method1();
	method2();
	method3();
	return 0;
}