#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* x)
{
	if (*x == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(x + 1);
	}
}
void reverse_string(char a[])
{
	int len = my_strlen(a);
	char tmp = 0;
	if (len <= 1)
	{
		return;
	}
	else
	{
		tmp = a[0];
		a[0] = a[len - 1];
		a[len - 1] = '\0';
		reverse_string(a + 1);
		a[len - 1] = tmp;
	}
}
int main()
{
	char arr[100] = { 0 };
	scanf("%s", &arr);
	reverse_string(arr);
	printf("%s", arr);
}