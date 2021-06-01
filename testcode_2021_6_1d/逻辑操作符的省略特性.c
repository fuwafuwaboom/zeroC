#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//对于&&操作符 左边确定为假的时候 会跳过右边的所有语句 
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	i = a++ || ++b || d++;//对于||操作符 左边确定为真的时候 会跳过左边的所有语句
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	return 0;
}