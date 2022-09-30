#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char arr[20] = { 0 };
	//arr = "hello";//error 这样写是不对的，因为arr是数组首元素的地址
	//所以这样写肯定的不对的
	//所以给字符数组修改值要用strcpy函数
	char* p = "hello";//实际上是把hello字符串的h的地址放入p指针
	strcpy(arr, "hello");//所以实际上是把hello中h的地址传入
	printf("%s\n", arr);
	return 0;
}
//同时一定要注意，strcpy拷贝时 一定会把原字符串的\0带过去
//如果原字符串中没有\0 那么意味着 字符串无法停止拷贝 程序往往会崩溃

//同时，如果把长字符串拷贝到短字符数组中，会放不下 程序同样会崩溃
//所以未来 一定要注意目标空间足够盛放源字符串

//同时 目标空间一定要可修改才行 一定不能更改常量字符串
//比如char* str = "xxxxxxxx";中的str就是一个常量字符串
