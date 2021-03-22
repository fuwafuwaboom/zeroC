#include<stdio.h>
#include<string.h>//有关字符串函数的头函数
int main()
{
	char arr1[] = "abc";//多个字符放到“”中叫字符串 如"abc"\"hellobit"\""(空字符串)
	//"abc"--{'a','b','c','\0'} \0是字符串自带的 是字符串结束的标志 不算字符串的内容
	//字符串中的"\0"是转义字符 "\0"--【字符串结束】同理的还有"\n"--【换行】\t--【水平制表符Tab】
	printf("%s\n", arr1);
	char arr2[] = { 'a','b','c',0};
	//由''引起的叫字符 字符可以单独的放入数组里
	//'\0'的ASCII码值是0  所以0是字符串结束的标志
	char arr3[] = { 'a','b','c' };
	printf("%s\n", arr2);
	//数据在计算机存储的是二进制数值（由0和1构成的一串代码）
	//az$等用ASCII编码规则实现
	//a--97 A--65 97、65就是aA的ASCII码值
	printf("%d\n", strlen(arr1));//3
	//strlen--string length字符串长度--用来计算字符串长度
	printf("%d\n", strlen(arr2));//3 由此可见字符串结束标志是不算字符串内容的
	printf("%d\n", strlen(arr3));//15 此处输出多少都有可能 因为没有定义字符串长度		
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("%s\n", "c:\test\32\test.c");
	printf("%d\n", strlen("c:\test\32\test.c"));//13 \t算一个字符 \32也是一个转义字符 代表八进制数字 \32表示32作为八进制时对应的十进制数字为ASCII码值代表的东西
	//\32=3*8^1+2*8^0=26 查表知是一个→
	printf("%c%c\n", '\132', '\32');
	printf("%c\n", '\x61');//\x61是一个16进制数 \x61=6*16^1+1=97 → a
	return 0;	
}