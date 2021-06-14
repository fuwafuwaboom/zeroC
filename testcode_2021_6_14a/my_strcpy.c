#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
size_t my_strlen(const char* str)//size_t:�޷�������unsigned int
{
	assert(str != NULL);//δ��ʹ��ָ���ʱ����ö���һ�£�
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

size_t _cdecl win_strlen(const char* str)//�⺯��strlen��д��
//_cdecl ��������Լ�� ϵͳ����Լ�����������е�һЩϸ�� ����д���Բ���
{
	const char* eos = str;
	while (*eos++);
	return(eos - str - 1);
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
	
	printf("%d\n", my_strlen("tianxiao719"));

	return 0;
}

//���const����ָ�룡

//const ���α��� ��������ͱ���Ϊ������ ����ֵ�����ٱ��ı�

void const1()
{
	const int num = 10;//const����numʹ��num��ֵ�޷��ı�
	int* p = &num;
	*p = 20;
	printf("%d\n", num);//���ͨ��ָ��pֱ�ӷ���num���ڴ�ȴ�����˸ı�num��ֵ
	//�������ǲ���������Ԥ�ڵ�
	//�൱�����ǰ��Ź�����ϣ��������������Ӵ���������
	return 0;
}

void const2()
{
	const int num = 10;//�ء��š� (num���ɸ�)
	const int* p = &num;//�ء������� (*p���ɸ�)
	//const����*��ߵ�ʱ�����ε���*p��int const* p�﷨Ҳ�ǶԵģ�
	//��ʾָ��ָ�������(*p)�ǲ���ͨ��ָ�����ı��
	//���ǣ�p��Ȼ��һ��ָ�������p��Ȼ���ܸı�ģ�
	printf("%d\n", num);
	return 0;
}

void const3()
{
	const int num = 10;
	int* const p = &num;//��ʱ p �ǳ�������*p ��Ȼ�ɸ�
	printf("%d\n", num);
	return 0;
}

void const4()
{
	const int num = 10;
	int const * const p = &num;//����ʱŮ���ȳԲ�����Ƥ�ֲ��ܻ������ѡ�
	printf("%d\n", num);
	return 0;
}

