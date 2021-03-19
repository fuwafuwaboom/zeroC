//include 包含 意思是包含一个叫stdio.h的文件
//stdio为std-standard i-input o-output表示引入库中的标准输入输出函数 
// 库函数是c语言自带的 也就是别人的东西 所以用之前得打个招呼
//.h为head-头文件后缀
#include <stdio.h>
int main()//主函数-程序的入口-main函数有且只有一个，不然会引起歧义
{
	//在这里完成任务
	//printf为print f-function 在屏幕上打印东西的功能
	//打印日语的“早上好”
	printf("おはよう\n");
	//看看各个类型的长度
	//计算机是硬件--通电--0/1
	//一个比特位可以承载一个0/1
	printf("%d\n", sizeof(char));//1 这些数字的单位是“字节”一个字节有8个bit比特位
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	//00000001
	//00000010
	//00000011
	//00000100
	//00000101
	//......
	//以上是8bit=1字节 0--2^8-1 同理int 4字节 0--2^32-1
	short age = 20;//向内存申请2个字节的空间=16bit,用来存放20
	float weight = 58.5f;//像内存申请4个字节的空间=32bit,存放小数
	return 0;
}