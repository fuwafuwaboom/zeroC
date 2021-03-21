#include <stdio.h>
int main()
{
	//计算两个数的和
	int num1 = 0;//像内存申请4个字节的空间 并且把这个内存空间挂一个门牌号叫num1
	int num2 = 0;
	int sum = 0;
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&是取地址符号 意思是把一个数据存储到门牌号叫num1的内存空间里
	//int sum = 0; 如果在此处定义则会报错 因为c99语法标准规定变量定义应该在开头
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}