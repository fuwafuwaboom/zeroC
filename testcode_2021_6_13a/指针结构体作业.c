#define _CRT_SECURE_NO_WARNINGS 1
//дһ����������������һ���ַ��������ݡ�
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

//��C��������Ļ���������ͼ����(*��ɵ�����)
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

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
#include<stdio.h>
int main()
{
	int i = 0;
	printf("������ܽ�");
	scanf("%d", &i);
	int j = 0;
	int count = 0;
	count = i / 1;
	j = count / 2;
	count += j;
	printf("���Եõ�%dƿ��ˮ\n", count);
	return 0;
}

