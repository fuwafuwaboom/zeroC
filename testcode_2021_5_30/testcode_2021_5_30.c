#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void chufaquyu()
{
	//除法和取余操作符
	int a = 3 / 5;
	int b = 6 / 5;
	printf("%d %d\n", a, b);//0 1
	float c = 3 / 5;
	printf("%f\n", c);//0
	//对于“/”，两端必须有一个是浮点数，结果才是浮点数
	float d = 3.0 / 5;
	printf("%f\n", d);
	float e = 3.0f / 5.0f;//float类型的小数在末尾加f
	double f = 3.0 / 5.0;//两端均是小数默认是double类型

	int g = 7 % 3;//取模操作符两端必须都是整数，结果是左数除以右数的余数
	printf("%f %lf %d \n", e, f, g);
}
void yiweicaozuofu()
{
	//移位操作符
	int a = 2;
	int b = a << 1;//把a的二进制位向左移动一位
	//左移操作符<<：左边丢弃，右边补零
	int c = 10;
	int d = c >> 1;//把c的二进制位向右移动一位
	//c 00000000000000000000000000001010
	//d 00000000000000000000000000000101
	//右移分为两种：
	//1.算数右移
	//右边丢弃，左边补原符号位
	//2.逻辑右移
	//右边丢弃，左边补0
	int e = -1;
	int f = e >> 1;
	//整数的二进制表示形式：
	//原码：直接根据数值写出的二进制数列
	//反码：原码的符号位不变，其他位按位取反
	//补码：反码+1就是补码
	//正整数的原码反码补码相同
	//内存中存放的是二进制的补码
	//所以-1在内存中的存储形式是:
	//11111111111111111111111111111111
	//说明visual studio 2019采用的是算数右移
	printf("%d %d %d %d %d %d \n", a, b, c, d, e, f);// 2 4 10 5 -1 -1
	//移位操作符不会改变运算数的值！
}
void weicaozuofu()
{
	int a = 3;
	int b = 5;
	//位操作符的操作数必须是整数
	int c = a & b;
	//&--按二进制位相与(有0出0 全1出1)
	//00000000000000000000000000000011
	//00000000000000000000000000000101
	//00000000000000000000000000000001
	//|按位或(有1出1 全0出0)
	int d = a | b;
	//00000000000000000000000000000011
	//00000000000000000000000000000101
	//00000000000000000000000000000111
	//^按位异或(相同为0 相异为1)
	int e = a ^ b;
	//00000000000000000000000000000011
	//00000000000000000000000000000101
	//00000000000000000000000000000110
	printf("%d %d %d %d %d \n", a, b, c, d, e);
}
int main()
{
	chufaquyu();
	yiweicaozuofu();
	weicaozuofu();
	return 0;
}