#include<stdio.h>
#include<string.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//arr[10]�е�10��ʾ���������ڵ�Ԫ�ظ��� Ԫ���±��0��ʼ
	printf("%d\n", arr[0]);//����arr[0]��������arr[10]�ĵ�һ��Ԫ�� �����±����ʽ��������Ԫ��
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}//��ӡ�������ȫ��Ԫ��
	return 0;
}