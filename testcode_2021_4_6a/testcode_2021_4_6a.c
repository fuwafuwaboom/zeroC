#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
		int input = 0;
		printf("��ӭ������̵�����\n");
		printf("��Ҫ�ú�ѧϰ�𣿣�1/0��:");
		scanf("%d", &input);
		if (input == 1)
		{
			printf("�ù���\n");
			int day = 0;
			int line = 0;
			printf("��ʼ���\n");
			scanf("%d", &day);
			while (line < day)
			{
				printf("����ô��� ���������%d\n", line);
				line++;
			}
			if (line >= 20000)
				printf("��offer\n");
			else
				printf("׹�밮������ѧϰ\n");
		}
		else
			printf("�ؼ��ֵ�\n");

		return 0;
}