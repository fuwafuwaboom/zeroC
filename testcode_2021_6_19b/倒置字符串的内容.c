#define _CRT_SECURE_NO_WARNINGS 1
//���⣺�����ַ��� | ʱ�����ƣ�1�� | �ڴ����ƣ�32768K | �������ƣ� ����
//�������ַ�����
///��һ�仰�ĵ��ʽ��е��ã���㲻���á�
//���� 
//I like beijing.
//�����������Ϊ��
//beijing.like I
#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	//������ת��
	//1.���ַ������巭ת .gnijieb ekil I
	//2.��ÿ���������� beijing. like I
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}

//��ַ�ǳ���������