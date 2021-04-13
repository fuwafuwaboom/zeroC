#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	printf("请创建初始密码：\n");
	scanf("%s", password);
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}//清空缓冲区里的所有字符
	printf("请确认密码：\n");
	char password1[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password1);
		if (strcmp(password, password1) == 0)
		{
			printf("确认密码正确，已自动储存\n");
			break;
		}
		else
		{
			printf("确认密码失败，请重新输入\n");
		}
	}
	if (i == 3)
	{
		printf("确认密码错误，退出程序\n");
		goto end;
	}
	int tmp1 = 0;
	while ((tmp1 = getchar()) != '\n')
	{
		;
	}
	printf("请输入密码：\n");
	char password2[20] = { 0 };
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		scanf("%s", password2);
		if (strcmp(password, password2) == 0)
		{
			printf("登录成功!\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入：\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，退出程序\n");
	}
end:
	return 0;
}