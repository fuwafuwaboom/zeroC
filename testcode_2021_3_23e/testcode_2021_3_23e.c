#include<stdio.h>
//�Զ��庯����ʹ��
int Add(int x, int y)//int Add--int�Ǻ����ķ������� Add�Ǻ�����
{
	int z = x + y;
	return z;//���������з���ֵ û�����ô�к�����
}//{}���ǽк�����
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	int a = 10;
	int b = 20;
	sum = Add(a, b);//���ú���Add
	printf("sum=%d\n", sum);
	return 0;
}