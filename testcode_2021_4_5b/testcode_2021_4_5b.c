#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	printf("你想要一个女朋友吗\n");
	scanf("%d", &a);
	if (a)
	{
		printf("恭喜你脱单\n");
	}
	else
	{
		printf("单身万岁\n");
	}
	return 0;
}
/*
int main()
{
	int i = 0;
	int arr[10] = { 1 };
	printf("%d", arr[0]);
	return 0;
}
*/