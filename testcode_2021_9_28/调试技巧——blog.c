#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void my_strcpy(char* dest,const char* src)
{
	assert(src != NULL && dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return;
}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}