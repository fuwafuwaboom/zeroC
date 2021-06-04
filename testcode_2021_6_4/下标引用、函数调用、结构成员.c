#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
void test()
{
	return;
}
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//int arr[10]中的[]不是下标引用操作符
	printf("%d\n", arr[4]);//[]就是下标引用操作符，它的两个操作数是arr和4

	int ret = Add(arr[0], arr[9]);//()就是函数调用操作符，操作数是函数名和实际参数
	printf("%d\n", ret);
	test();//()的操作数就是test函数名

	struct Book mathbook = { "数学","c20210604",55 };
	printf("书名：%s\n", mathbook.name);//.就是结构体成员引用操作符
	printf("书号：%s\n", mathbook.id);//方式是：结构体变量名.成员名
	printf("定价：%d\n", mathbook.price);

	struct Book* pb = &mathbook;
	printf("书名：%s\n", (*pb).name);
	printf("书号：%s\n", (*pb).id);
	printf("定价：%d\n", (*pb).price);

	printf("书名：%s\n", pb->name);//->的用法是 结构体指针->成员名
	printf("书号：%s\n", pb->id);
	printf("定价：%d\n", pb->price);
	return 0;
}