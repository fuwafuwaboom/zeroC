#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i;//i��ȫ�ֱ�����ȫ�ֱ�������ʼ��Ĭ��ֵΪ0
int main()
{
	i--;//i == -1
	if (i > sizeof(i))//sizeof�������Ĳ�����������unsigned ����ǰһ��i����unsigned int�ĽǶȱ���ȡ ������Ǵ���
		printf(">\n");
	else
		printf("<\n");
	return 0;
}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222

//��һ��Ƭ�濼�� Ӧ����Ŀ
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 1 + 11 + 111 + 1111 + 11111;
	printf("%d", a * i);
	return 0;
}

//�����������ڲ�ͬ��a��n ����ʵ����ѧ��ʽ
#include<stdio.h>
int main()
{
	//��a��ɵ�ǰn��֮�� - ���������
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);//��׼��a��ֵ��Ҫ���ױ�
	int i = 0;
	int sum = 0;
	int ret = 0;//���� ��ret���м��� ��ʼ��Ϊ0
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;//���һ��

		sum += ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//��һ���Լ����㷨
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
		while (pow(10, n) <= i)
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
			printf("%d\n", i);
		}
	}
	return 0;
}

//������������㷨
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//�����ж�i�Ƿ������������Ǿ����
		//1.����i��λ��n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2.��������n�����ֵ�n�η�֮��
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.�ж�
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}