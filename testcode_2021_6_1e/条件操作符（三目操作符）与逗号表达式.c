#define _CRT_SECURE_NO_WARNINGS 1
//ʹ����Ŀ�������Ƚ���������������һ��
#include<stdio.h>
int Max_num(int x, int y, int z)
{
	return(x > y ? z > x ? z : x : y > z ? y : z);
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d\n", Max_num(a, b, c));

	//���ű��ʽ
	int d = (c = 5, a = c + 3, b = a + 4, c += 5);
	//���ű��ʽ ���� Ҫ����������㣬�����������ʽ�Ľ�������һ�����ʽ��ֵ
	printf("%d\n", d);
	return 0;
}