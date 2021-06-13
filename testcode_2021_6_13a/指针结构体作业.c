#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数，可以逆序一个字符串的内容。
#include<stdio.h>
void reverse(char* arr)
{
	int sz = 0;
	char* p = arr;
	while (*p != '\0')
	{
		p++;
	}
	p = p - 1;
	char c = '0';
	while (arr <= p)
	{
		c = *arr;
		*arr = *p;
		*p = c;
		arr++;
		p--;
	}
	return;
}
int main()
{
	char arr[100] = { 0 };
	scanf("%s", arr);
	reverse(arr);
	printf("%s", arr);
	return 0;
}

//用C语言在屏幕上输出以下图案：(*组成的菱形)
#include<stdio.h>
int main()
{
	char arr[] = { "      *      " };
	int lf = 5;
	int rt = 7;
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%s\n", arr);
		*(arr + lf) = '*';
		*(arr + rt) = '*';
		lf--;
		rt++;
	}
	lf++;
	rt--;
	for (i; i > 0; i--)
	{
		*(arr + lf) = ' ';
		*(arr + rt) = ' ';
		printf("%s\n", arr);
		lf++;
		rt--;
	}
	return 0;
}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include<stdio.h>
int main()
{
	int i = 0;
	printf("请输出总金额：");
	scanf("%d", &i);
	int j = 0;
	int count = 0;
	count = i / 1;
	j = count / 2;
	count += j;
	printf("可以得到%d瓶汽水\n", count);
	return 0;
}

