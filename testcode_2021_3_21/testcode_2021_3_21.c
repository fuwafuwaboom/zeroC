enum Sex//枚举常量
{
	MALE,
	FEMALE,
	FUTA
};
#define TEN 10//#define定义的标识符常量
#include<stdio.h>
int main()
{
	int a = 3;//数字3是字面常量
	const int b = 5;//b就是“const修饰的常变量” b不能修改了，具有常属性，但b仍然是变量，所以称为“常变量”
	//int arr[b] = { 0 }; 此时会报错 因为arr[常量]而b本质是变量
	int arr[TEN] = { 0 };//此时就不会报错 因为TEN是define定义的标识符常量
	printf("%d\n", a);//3
		a = 4;
	printf("%d\n", a);//4
	//说明a的值被重新赋值后被刷新了 而const常量是不能被重新赋值的
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", FUTA);//2  
	//说明枚举常量的值是他们定义时的顺序0123....
	return 0;
}