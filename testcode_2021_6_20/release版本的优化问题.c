#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%p\n", &i);
	printf("%p\n", &arr[9]);
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 10;
		printf("hehe\n");
	}
	return 0;
}
//release�汾���i�ĵ�ַ����arr[0]����
//�����ͳ��ױ����˳������ѭ��
//����release�汾���ܻ�Գ�������Ż�