#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//表达式求值的顺序一部分是由操作数的优先级和结合性决定
//同样，有些变大时的操作数在求值的过程中可能需要转换成其他类型

//隐式类型转换

//整型提升
//对于大小不及整型的数据类型 比如short、char等
//在运算时CPU都会先把它们提升成整型（int/unsigned int）去运算
int main()
{
	char a = 3;
	//00000000000000000000000000000011
	//00000011 - a
	char b = 127;
	//00000000000000000000000001111111
	//01111111 - b
	char c = a + b;
	//整型提升是按照变量数据类型的符号位发生提升的 符号位1补1 符号位0补0
	//char是有符号类型 说明a的最高位是符号位 前面补符号位0
	//则a提升为
	//00000000000000000000000000000011
	//b提升为
	//00000000000000000000000001111111
	//得到的c为
	//00000000000000000000000010000010
	//"截断"后c为
	//10000010

	//对于无符号类型，高位统一补0

	//由于a和b都是char类型的，都没有达到一个int的大小
	//所以会发生整型提升
	printf("%d\n", c);//c是char类型，打印%d是整型，又要整型提升
	//则c前面不断的补1
	//c提升为
	//11111111111111111111111110000010（内存中的计算时的数字，是补码）
	//11111111111111111111111110000001(反码)
	//10000000000000000000000001111110(屏幕上打印的数字，是原码)
	//即c打印出来为-126
	return 0;
}

void a()
{
	char a = 0xb6;
	short b = 0x600;
	int c = 0x6000000;

	if (a == 0xb6)//a是char就会整型提升
		printf("a");
	if (b == 0xb600)//b是short也会整型提升
		printf("a");
	if (c == 0xb6000000)//c没有整型提升 所以c的值没有变
		printf("a");
	return;
}
void b()
{
	char c = 1;
	printf("%u\n", sizeof(c));//1
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(-c));//4
	printf("%u\n", sizeof(!c));//4(gcc - 4) (vs - 1) 以gcc为主
}
//任何表达式都有两个属性：值属性、类型属性
//sizeof关注的是括号内表达式的类型属性，所以它会“推算”表达式运算后结果的类型
//但是sizeof并没有计算整个表达式的值
//sizeof返回值是 无符号整型 用%u接收