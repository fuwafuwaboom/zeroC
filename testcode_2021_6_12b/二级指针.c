#define _CRT_SECURE_NO_WARNINGS 1
//����ָ��
#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;//a��һ��������pa��ŵ���a�ĵ�ַ
	//int*��*˵��pa��ָ�룬int˵��paָ��Ķ�����int��
	int** ppa = &pa;//paҲ�Ǹ�������&pa����ȡ��pa���ڴ��е���ʼ��ַ
	//int**��*˵��ppa��ָ�룬int*˵��ppaָ��Ķ�����int*��
	//ppa����һ������ָ�����
	if (*ppa == pa)
		printf("haha");
	if (**ppa == *pa && *pa == a)
		printf("haha");
	return 0;
}