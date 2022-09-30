#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int i;//i是全局变量，全局变量不初始化默认值为0
int main()
{
	i--;//i == -1
	if (i > sizeof(i))//sizeof操作符的操作数类型是unsigned 所以前一个i会以unsigned int的角度被读取 结果就是大于
		printf(">\n");
	else
		printf("<\n");
	return 0;
}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222

//法一：片面考虑 应付题目
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 1 + 11 + 111 + 1111 + 11111;
	printf("%d", a * i);
	return 0;
}

//法二：适用于不同的a、n 真正实现数学公式
#include<stdio.h>
int main()
{
	//由a组成的前n项之和 - 不考虑溢出
	int a = 0;
	int n = 0;
	scanf("%d %d", &a, &n);//基准项a的值不要轻易变
	int i = 0;
	int sum = 0;
	int ret = 0;//造项 用ret做中间项 初始化为0
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;//算出一项

		sum += ret;
	}
	printf("sum = %d\n", sum);
	return 0;
}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//法一：自己的算法
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

//法二：鹏哥的算法
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 10000; i++)
	{
		//任务：判断i是否是自幂数，是就输出
		//1.计算i的位数n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		//2.计算所有n个数字的n次方之和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		//3.判断
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}