#include <stdio.h>
int main()
{
	//�����������ĺ�
	int num1 = 0;//���ڴ�����4���ֽڵĿռ� ���Ұ�����ڴ�ռ��һ�����ƺŽ�num1
	int num2 = 0;
	int sum = 0;
	//��������-ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//&��ȡ��ַ���� ��˼�ǰ�һ�����ݴ洢�����ƺŽ�num1���ڴ�ռ���
	//int sum = 0; ����ڴ˴�������ᱨ�� ��Ϊc99�﷨��׼�涨��������Ӧ���ڿ�ͷ
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}