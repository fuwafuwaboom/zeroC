 #define _CRT_SECURE_NO_WARNINGS 1
//代码的二层境界：看代码就是内存（离开比特时一定要达到第二种状态）

//代码的第三种境界：写代码就像说话一样（人剑合一）

//指针的进阶

//1.字符指针
//2.数组指针
//3.数组传参和指针传参
//4.函数指针
//5.函数指针数组
//6.指向函数指针数组的指针
//7.指针实现回调函数
//8.指针和数组面试题的解析

//基础概念回顾：
//1.指针是一个变量，用来存放地址，地址唯一的标识一块内存空间（所以有人说地址就是指针）
//2.指针变量的大小由地址决定 32位平台32位地址4字节指针 64位平台64位地址8字节指针
//3.指针存在类型：加减整数的步长，解引用的权限
//4.指针的运算：指针加减整数 指针关系运算 指针减指针

//字符指针


/*
#include<stdio.h>
int main()
{

	//1.指针存放字符串
	char* pc = "hello bit";//字符串放到指针中，本质上是把字符串首字符的地址存储在了pc中
	printf("%c\n", *pc);//得到h 说明只存放了首元素的地址
	printf("%s\n", pc);//打印字符串只需要%s形式打印数组首元素地址即可



	return 0;
}
*/

#include<stdio.h>
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char* str3 = "hello bit.";//hello bit 是常量字符串
	//*str3 = 'w'; 这样写就会报错
	char* str4 = "hello bit.";//正是因为常量字符串不可更改的原因
	//所以这样的常量只会在同一块空间（节省内存）而一个空间又唯一指向地址

	//所以我们习惯用const修饰存放常量的指针
	//const char* str = "hello bit.";

	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");//√

	if(str3 == str4)
		printf("str3 and str4 are same\n");//√
	else
		printf("str3 and str4 are not same\n");

	return 0;

}












