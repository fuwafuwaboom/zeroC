#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

int main()
{
	char* p = "abc";
	char* q = "abcdef";
	if (p > q)//p��q���ַ�ָ�� ���ԱȽϵ���������ַ�������ʽ�϶��Ǵ����
	{
		printf(">");
	}
	else
	{
		printf("<=");
	}
	//ͬʱ ����дҲ�Ǵ��
	//if("abc">"abcdef")
	//����д��Ҳ�ǱȽ���Ԫ�صĵ�ַ
	//�����ַ����ıȽϾ��Բ����ô���С�ں�
	return 0;
}