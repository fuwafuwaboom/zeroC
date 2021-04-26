#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[] = { 'h','e','l','l','o'};
	char ch2[] = { 'h','e','l','l','\0' };
	char ch3[] = { "hell" };
	printf("%d ", strlen(ch1));
	printf("%d ", strlen(ch2));
	printf("%d\n", strlen(ch3));
	printf("%d ", sizeof(ch1));
	printf("%d ", sizeof(ch2));
	printf("%d\n", sizeof(ch3));
	return 0;
}