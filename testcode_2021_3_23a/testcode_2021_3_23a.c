#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("��ӭ������̵�����\n");
	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��:");
	scanf("%d", &input);
	if (input == 1)
	printf("�ù���\n");
	else
		printf("�ؼ��ֵ�\n");
	return 0;
}