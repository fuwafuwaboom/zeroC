#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//&��*
	int a = 10;
	printf("%p\n", &a);//& ���� ȡ��ַ����������Ŀ��
	int* pa = &a;//pa��ָ�������ר��������ŵ�ַ
	printf("%d\n", *pa + 1);//* ���� �����ò���������Ŀ��

	//ǿ������ת��
	int b = (int)3.14;//3.14��double�����ݣ���Ҫ��ת��
	printf("%d\n", b);
	return 0;
}