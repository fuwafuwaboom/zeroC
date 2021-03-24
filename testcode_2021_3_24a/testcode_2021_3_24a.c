#include<stdio.h>
#include<string.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//arr[10]中的10表示的是数组内的元素个数 元素下标从0开始
	printf("%d\n", arr[0]);//比如arr[0]就是数组arr[10]的第一个元素 可用下标的形式访问所有元素
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}//打印出数组的全部元素
	return 0;
}