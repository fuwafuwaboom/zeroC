#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int a)//��ʮ�������Ķ��������д�ӡ����
{
	if (a)
	{
		print(a / 2);
		printf("%d", a % 2);
	}
	return;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 0;
	int j = 1;
	int js = 0;
	int os = 0;
	for (i = 0; i < 16; i++)
	{
		int b = a & j;
		js += b;
		j = j << 1;
		int c = a & j;
		os += c;
		j = j << 1;
	}
	printf("����λ�����ǣ�");
	print(js);//��ӡ��������
	printf("\n");
	printf("ż��λ�����ǣ�");
	print(os);//��ӡż������
	return 0;
}