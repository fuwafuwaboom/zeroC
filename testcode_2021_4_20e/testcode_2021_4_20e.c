#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(char* a)
{
	if (*a == 0)
	{
		return;
	}
	else if (*(a + 1) == '\\' && *(a + 2) == '0')
	{
		printf("%c", *a);
	}
	else
	{
		print(a + 1);
		printf("%c", *a);
	}
}
int main()
{
	char a[100] = { 0 };
	scanf("%s", a);
	print(a);
	return 0;
}