#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[30] = { 0 };
	system("shutdown -s -t 60");
	printf("请注意，你的电脑在一分钟内关机，如果输入“叶天霄是我的老公”就取消关机\n");
	while (1)
	{
		printf("请输入“叶天霄是我的老公”：\n");
		scanf("%s", input);
		if (strcmp(input, "叶天霄是我的老公") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("不乖的话，马上就要关机了哦\n");
		}
	}

	return 0;
}
