#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>	
//#include<assert.h>
//size_t my_strlen(const char* str)//size_t:�޷�������unsigned int		
//{
//	assert(str != NULL);//δ��ʹ��ָ���ʱ����ö���һ�£�
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//size_t _cdecl win_strlen(const char* str)//�⺯��strlen��д��
////_cdecl ��������Լ�� ϵͳ����Լ�����������е�һЩϸ�� ����д���Բ���		
//{
//	const char* eos = str;
//	while (*eos++);
//	return(eos - str - 1);
//}
//
//int main()
//{
//	printf("%d\n", my_strlen("tianxiao719"));
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest, char* src)//ԭʼ�汾��ͨ��ָ����������ַ�
{//dest - destination src - source
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;//����Ǹ�\0�Ŀ���
}
void my_strcpy1(char* dest, char* src)//�Ľ�һ���������������
{
	while (*dest++ = *src++)//dest��һ��Ϊh����Ϊ0�����߶�++�����ѭ����ֱ��\0���֣�������dest��ֵΪ0��ѭ��ֹͣ
	{
		;
	}
}
#include<assert.h>
void my_strcpy2(char* dest, char* src)//�Ľ������������˴��ݿ�ָ��NULL�����������ָ���ǲ��ܷ����ڴ�ģ����Կ�ָ���ǲ��ܽ����ò�����
{
	assert(src != NULL);//����,���Ա��ʽΪ0������ʧ�ܣ����ֱ�ӱ���ָ�����
	//���Կ��Ժ�ֱ�۵ķ��ִ����Ǻܺõı��ϰ�ߣ�
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}
void my_strcpy3(char* dest, const char* src)//�Ľ�������ͨ��constָ����source�ַ������������ֶ�ά�������ǵ��߼�
{
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)//д��while (*src++ = *dest++) ������const���� �ͻ�ֱ�ӱ���
	{
		;
	}
}
char* my_strcpy4(char* dest, const char* src)//�Ľ��Ĵ����ѷ���ֵ��ΪĿ��ռ����ʼ��ַ
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	my_strcpy1(arr1, arr2);
	printf("%s\n", arr1);

	my_strcpy2(arr1, arr2);
	printf("%s\n", arr1);

	my_strcpy3(arr1, arr2);
	printf("%s\n", arr1);

	printf("%s\n", my_strcpy4(arr1, arr2));//��printf("%s\n",������/�����׵�ַ)�����Ǵ�ӡ�����ַ�����
	return 0;
}