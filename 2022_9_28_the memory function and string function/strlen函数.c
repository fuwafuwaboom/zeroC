#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>//����assert��ͷ�ļ�
int main()
{
	char arr[] = "abc";
	int len = strlen(arr);//���ַ�������
	printf("%d\n", len);
	//�ַ��������Ȼ�ԡ�/0����β�������󳤶ȵ�ʱ�򲢲�������/0��
    //ͬʱҲ֪���ַ���ĩβ�����С�/0������Ȼ�޷�����
	char arr2[] = {'a','b','c'};
	int len2 = strlen(arr2);
	printf("%d\n", len2);
	//����û�С�/0�����Գ��ȳ��������
	//���Կ��Եõ�strlen�����Ĺ���ԭ�����ַ������ַ�����������/0��Ϊֹ
	return 0;
}

//ʵ��һ��my_strlen����
int my_strlen(const char* str)//����const ָ����ָ�����޷����ı�
{
	int count = 0;//������
	assert(str != NULL);//����ָ��
	while (*str != '/0')
	{
		count++;
		str++;
	}
	return count;
}

//��д�ַ������������ǲ�����ʹ����ʱ����
//�ݹ�汾+ָ���ָ��汾

