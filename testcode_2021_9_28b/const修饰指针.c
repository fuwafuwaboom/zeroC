#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(src != NULL && dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int my_strlen(const char* str)
{
	assert(str != NULL);
	int i = 0;
	while (*str++)
		i++;
	return i;
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	printf("%d\n",my_strlen(arr1));
	return 0;
}