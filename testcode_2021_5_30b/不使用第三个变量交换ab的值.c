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
	//�������д������������ ��Ϊ����ʹ�õ���������
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
	//ȱ����a��b��ֵ�����ޣ��������ޣ���a+bʱ�������
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
	b = a ^ b;//ԭ��a^b^b = a^0 = a
	//00000011
	a = a ^ b;//ԭ��a^a^b = 0^b = b
	//00000101
	printf("a=%d b=%d\n", a, b);
	
	//����ԭ��
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