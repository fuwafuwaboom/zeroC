#define _CRT_SECURE_NO_WARNINGS 1
//常见的浮点数：
//3.1415926
//1E10 1.0×10^10
//浮点家族：float double (long double)
//整型家族的取值范围：limits.h
//浮点型家族的取值范围：float.h

//#include<limits.h>
//int main()
//{
//	INT_MAX;//右击 - 转到定义
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 9;

	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("n的值为：%d\n", n);
	printf("pFloat的值为：%f\n", *pFloat);

	return 0;
}