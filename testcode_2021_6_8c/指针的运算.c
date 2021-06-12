#define _CRT_SECURE_NO_WARNINGS 1

//1.指针+-整数的运算
//2.指针可以减去指针
//3.指针可以进行关系运算（比大小）


#include<stdio.h>
//利用指针的关系运算访问数组各个元素
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp = &values[0];
	for (; vp < &values[N_VALUES];)//指针的关系运算，后面的指针地址大
	{
		*vp++ = 0;//相当于 *vp = 0; vp++;
	}
	for (vp = &values[N_VALUES-1]; vp > &values[0];)
	{
		*--vp = 1;
	}
	//下面的写法是正确的，因为标准规定指针可以和后面的越界指针比较，但是不能和前面的越界指针比较

}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}
//指针减去指针 得到的是两个指针指代的元素和它们之间所有元素的个数
//即终点指针 - 起点指针 = 两指针之间的所有元素的个数

//灵活使用指针相减来实现my_strlen的第三种写法
int my_strlen1(char* str)//循环的写法
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen2(char* str)//指针相减的写法
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	//strlen()--求字符串长度
	int len = my_strlen1("abc");//传递的是abc字符串首元素的地址
	printf("%d\n", len);
	len = my_strlen2("abc");
	printf("%d\n", len);
	return 0;
}