#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char arr[20] = "hello ";//ϣ��������ַ����������world����ַ���
	char arr1 = strcat(arr,"world");//�ַ���׷�Ӻ��� ʵ����������
	printf("%s\n", arr1);
	return 0;
}
//ע�����Ŀ���ַ����ĺ���������㹻��Ŀռ���׷���µ��ַ���
//ͬʱҪ֪�� ׷�ӵ�ʱ�� ǰһ���ַ�����\0һ���ᱻ���� �µ�\0һ���ᱻ׷�ӹ�ȥ
