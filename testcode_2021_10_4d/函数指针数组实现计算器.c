#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*********************\n");
	printf("** 1.add     2.sub **\n");
	printf("** 3.mul     4.div **\n");
	printf("**      0.exit     **\n");
	printf("*********************\n");
}
int main()
{
	//计算器 - 计算整型变量的加、减、乘、除
	int x = 0;
	int y = 0;
	int ret = 0;
	int input = 0;
	do {
		system("cls");
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			int (*pfarr[])(int, int) = { NULL,Add,Sub,Mul,Div };
			//我们经常把这样的一个数组叫做“转移表”
			printf("请输入两个操作数：");
			scanf("%d %d", &x, &y);
			ret = (pfarr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
		}
		else
		{
			printf("选择错误\n");
		}
		Sleep(2000);
	} while (input);
	return 0;
}