#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = { 0 };
	printf("�봴����ʼ���룺\n");
	scanf("%s", password);
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}//��ջ�������������ַ�
	printf("��ȷ�����룺\n");
	char password1[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password1);
		if (strcmp(password, password1) == 0)
		{
			printf("ȷ��������ȷ�����Զ�����\n");
			break;
		}
		else
		{
			printf("ȷ������ʧ�ܣ�����������\n");
		}
	}
	if (i == 3)
	{
		printf("ȷ����������˳�����\n");
		goto end;
	}
	int tmp1 = 0;
	while ((tmp1 = getchar()) != '\n')
	{
		;
	}
	printf("���������룺\n");
	char password2[20] = { 0 };
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		scanf("%s", password2);
		if (strcmp(password, password2) == 0)
		{
			printf("��¼�ɹ�!\n");
			break;
		}
		else
		{
			printf("����������������룺\n");
		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");
	}
end:
	return 0;
}