#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[30] = { 0 };
	system("shutdown -s -t 60");
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������롰Ҷ�������ҵ��Ϲ�����ȡ���ػ�\n");
	while (1)
	{
		printf("�����롰Ҷ�������ҵ��Ϲ�����\n");
		scanf("%s", input);
		if (strcmp(input, "Ҷ�������ҵ��Ϲ�") == 0)
		{
			system("shutdown -a");
			break;
		}
		else
		{
			printf("���ԵĻ������Ͼ�Ҫ�ػ���Ŷ\n");
		}
	}

	return 0;
}
