#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>//包含assert的头文件
int main()
{
	char arr[] = "abc";
	int len = strlen(arr);//求字符串长度
	printf("%d\n", len);
	//字符串最后虽然以“/0”结尾，但是求长度的时候并不包含“/0”
    //同时也知道字符串末尾必须有“/0”，不然无法结束
	char arr2[] = {'a','b','c'};
	int len2 = strlen(arr2);
	printf("%d\n", len2);
	//由于没有“/0”所以长度出现随机数
	//所以可以得到strlen函数的工作原理：数字符串中字符个数，到“/0”为止
	return 0;
}

//实现一个my_strlen函数
int my_strlen(const char* str)//加上const 指针所指内容无法被改变
{
	int count = 0;//计数器
	assert(str != NULL);//断言指针
	while (*str != '/0')
	{
		count++;
		str++;
	}
	return count;
}

//编写字符串函数，但是不允许使用临时变量
//递归版本+指针减指针版本

