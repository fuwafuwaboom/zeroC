#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Sex
{
	MALE=3,
    FEMALE=5,
    SECRET=123
};
int main()
{
	enum Sex a = SECRET;
	printf("%d", a);
	return 0;
}