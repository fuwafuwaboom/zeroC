#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char arr[20] = "hello ";//希望在这个字符串后面加上world这个字符串
	char arr1 = strcat(arr,"world");//字符串追加函数 实现上述功能
	printf("%s\n", arr1);
	return 0;
}
//注意点是目标字符串的后面必须有足够大的空间来追加新的字符串
//同时要知道 追加的时候 前一个字符串的\0一定会被覆盖 新的\0一定会被追加过去
