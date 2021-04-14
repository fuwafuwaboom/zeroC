#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 100");
	printf("宋亮亮同学，你的电脑将在100秒内关机\n");
again:
	printf("如果你输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input,"我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("你的电脑即将关机...");
		goto again;
	}
	return 0;
}