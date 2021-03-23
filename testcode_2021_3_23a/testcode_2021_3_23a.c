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
	int day = 0;
	int line = 0;
	printf("开始编程\n");
	scanf("%d", &day);
	while (line < day)
	{
		printf("坚持敲代码 坚持天数：%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("好offer\n");
	else
		printf("坠入爱河无心学习\n");
	return 0;
}
