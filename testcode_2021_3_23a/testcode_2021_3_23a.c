#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("欢迎来到编程的世界\n");
	printf("你要好好学习吗？（1/0）:");
	scanf("%d", &input);
	if (input == 1)
	printf("好工作\n");
	else
		printf("回家种地\n");
	return 0;
}