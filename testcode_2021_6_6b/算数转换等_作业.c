#define _CRT_SECURE_NO_WARNINGS 1
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
//#include<stdio.h>
//void print(int* x,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(x + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//
////���磺2 + 22 + 222 + 2222 + 22222
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 1 + 11 + 111 + 1111 + 11111;
//	printf("%d", a * i);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<stdio.h>
int pow(int a, int n)
{
	if (0 == n)
	{
		return 1;
	}
	else
	{
		int i = 0;
		int sum = 1;
		for (i = 0; i < n; i++)
		{
			sum *= a;
		}
		return sum;
	}
}
int main()
{
	int i = 0;
	for (i = 1; i <= 100000; i++)
	{
		int n = 0;
		while (pow(10,n) <= i)
		{
			n++;
		}
		int j = 0;
		int k = i;
		int sum = 0;
		for (j = 0; j < n; j++)
		{
			sum += pow((k % 10), n);
			k = k / 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}