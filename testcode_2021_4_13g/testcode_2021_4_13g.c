#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 100");
	printf("������ͬѧ����ĵ��Խ���100���ڹػ�\n");
again:
	printf("��������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input,"������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("��ĵ��Լ����ػ�...");
		goto again;
	}
	return 0;
}