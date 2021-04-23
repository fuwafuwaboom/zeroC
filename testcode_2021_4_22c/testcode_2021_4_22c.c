#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* a)
{
	if (*a == 0)
	{
		return 0;
	}
	else if (*(a + 1) == '\\' && *(a + 2) == '0')
	{
		return 0;
	}
	else
	{
		return 1 + my_strlen(a + 1);
	}
}
void reverse_string(char* a)
{
	int len = my_strlen(a);
	if (len < 2)
	{
		return;
	}
	else
	{
		char temp = *a;
		*a = *(a + len - 1);
		*(a + len - 1) = '\0';
		reverse_string(a + 1);
		*(a + len - 1) = temp;
	}
}
int main()
{
	char a[100] = { 0 };
	scanf("%s", a);
	a[my_strlen(a)] = 0;
	reverse_string(a);
	printf("%s", a);
	return 0;
}