#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）

void Q1()
{
	int money = 0;
	scanf("%d", &money);//钱的总数
	int total = money;//汽水的总数
	int empty = money;//空瓶数
	//开始置换
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);

	/*解法二 通过找规律找到
	int money = 0;
	int total = 0;
	scanf("%d", money);
	if (money > 0)
	{
		total = 2 * money - 1;
	}
	printf("%d\n", total);
	*/
}

//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从前往后找偶数
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		//从后往前找奇数
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		//交换
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	return 0;
}
void Q2()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}

//杨辉三角
void Q3()
{
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

void Q4()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}

//有一根香燃烧时间是1h 材质不均匀，现有两根这样的香，这两根香材质也不同
//请确认一个15分钟的时间段

//1.把一根香两端点着 另一根一端点着
//2.两端点着的香结束后 另一根香剩下的就是半个小时
//3.再把剩下的香两端点着 时间就是15分钟

//一个人住在30楼
//下雨天/电梯有人的时候 坐电梯直接到30楼回家
//其他时候他会做到15楼然后爬楼梯回家
//为什么？

//36匹马 6个跑道
//比赛多少次能确定前三名？
//25匹马 5个跑道呢

//牛客网 —— 智力题
//比特论坛 —— 智力题

int main()
{
	Q1();
	Q2();
	Q3();
	Q4();
	return 0;
}
