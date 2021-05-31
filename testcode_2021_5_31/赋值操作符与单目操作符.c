#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int x = 0;
	int y = 20;
	a = x = y;//连续赋值操作符
	x = y + 1;
	a = x;//这种写法更加明了，所以一般不推荐使用连续赋值的写法
	
	//复合赋值符
	a = a + 100;//1
	a += 100;//1
	int b = 17;
	b = b << 3;//2
	b <<= 3;//2
	
	//单目操作符--只有一个操作数
	int flag = 0;
	scanf("%d", &flag);
	if (flag)
	{
		printf("hehe\n");
	}
	if (!flag)//!逻辑反操作（真假互换）
	{
		printf("haha\n");
	}

	//sizeof
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);//说明sizeof是操作符不是函数
	printf("%d\n", sizeof(int));

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof arr);//数组名
	printf("%d\n", sizeof(int [10]));//去掉数组名的部分就是数组的类型

	short s = 5;
	int d = 10;
	printf("%d\n", sizeof(s = d + 2));//2，s所占空间大小是两个字节
	printf("%d\n", s);//5 因为sizeof内部的表达式不参与运算！
	//因为s=d+2在编译期间就处理过了，而且此时运算sizeof时只需要知道类型即可，
	//处理完这句话就结束了

	//~对二进制位按位取反
	int e = -1;
	//-1的补码：11111111111111111111111111111111
	int f = ~e;
	//f的补码：00000000000000000000000000000000 -> 0 
	printf("%d\n", f);

	int g = 13;
	g = g | (1 << 4);
	printf("%d\n", g);
	g = g & ~(1 << 4);
	printf("%d\n", g);
	
	//++与--
	//后置++：先使用（“使用”就是“执行这句话”）后++
	//前置++：先++后使用
	return 0;
}