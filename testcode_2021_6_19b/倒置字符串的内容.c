#define _CRT_SECURE_NO_WARNINGS 1
//标题：倒置字符串 | 时间限制：1秒 | 内存限制：32768K | 语言限制： 不限
//【倒置字符串】
///将一句话的单词进行倒置，标点不倒置。
//比如 
//I like beijing.
//经过函数后变为：
//beijing.like I
#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//三步翻转法
	//1.把字符串整体翻转 .gnijieb ekil I
	//2.把每个单词逆序 beijing. like I
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}

//地址是常量！！！