#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	if (strlen("abc") - strlen("abcdef") > 0)
	{
		printf(">\n");
	}
	else
	{
		printf("<=\n");
	}
	return 0;
}
//����ʲô�أ�
//���Ǵ��ڣ�Ϊʲô�أ�
//��ΪC�⺯���ķ���ֵ���޷�����
//���Դ���3-6 �����������޷�������ȥ�޷�����
//�Ǹ��������һ���޷����������ᱻ�����һ���ǳ��������
//����������ԭ�� ���Կ϶��Ǵ���0�� ���Ǵ���
