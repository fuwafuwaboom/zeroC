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
void reverse_string(char a[],int len)
{
	char tmp = 0;
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	scanf("%s", &arr);
	reverse_string(arr,my_strlen(arr));
	printf("%s", arr);
}