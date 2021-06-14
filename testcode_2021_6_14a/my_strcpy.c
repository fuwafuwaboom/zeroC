#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void my_strcpy(char* dest, char* src)//原始版本：通过指针逐个拷贝字符
{//dest - destination src - source
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;//最后那个\0的拷贝
}
void my_strcpy1(char* dest, char* src)//改进一代：代码优美简洁
{
	while (*dest++ = *src++)//dest第一次为h，不为0，两者都++后继续循环，直到\0出现，拷贝给dest后，值为0，循环停止
	{
		;
	}
}
#include<assert.h>
void my_strcpy2(char* dest, char* src)//改进二代：考虑了传递空指针NULL的情况，而空指针是不能访问内存的，所以空指针是不能解引用操作的
{
	assert(src != NULL);//断言,断言表达式为0，断言失败，则会直接报错到指定语句
	//断言可以很直观的发现错误，是很好的编程习惯！
	assert(dest != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}
void my_strcpy3(char* dest, const char* src)//改进三代：通过const指定了source字符串！这样就手动维护了我们的逻辑
{
	assert(src != NULL);
	assert(dest != NULL);
	while (*dest++ = *src++)//写成while (*src++ = *dest++) 由于有const存在 就会直接报错
	{
		;
	}
}
char* my_strcpy4(char* dest, const char* src)//改进四代：把返回值作为目标空间的起始地址
{
	assert(src != NULL);
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
size_t my_strlen(const char* str)//size_t:无符号整型unsigned int
{
	assert(str != NULL);//未来使用指针的时候都最好断言一下！
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

size_t _cdecl win_strlen(const char* str)//库函数strlen的写法
//_cdecl 函数调用约定 系统用来约定函数调用中的一些细节 我们写可以不加
{
	const char* eos = str;
	while (*eos++);
	return(eos - str - 1);
}

int main()
{
	char arr1[20] = "xxxxxxxxxxxxx";
	char arr2[] = "hello";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	my_strcpy1(arr1, arr2);
	printf("%s\n", arr1);

	my_strcpy2(arr1, arr2);
	printf("%s\n", arr1);

	my_strcpy3(arr1, arr2);
	printf("%s\n", arr1);
	
	printf("%s\n", my_strcpy4(arr1, arr2));//【printf("%s\n",数组名/数组首地址)】就是打印整个字符串！
	
	printf("%d\n", my_strlen("tianxiao719"));

	return 0;
}

//详解const修饰指针！

//const 修饰变量 这个变量就被称为常变量 它的值不能再被改变

void const1()
{
	const int num = 10;//const修饰num使得num的值无法改变
	int* p = &num;
	*p = 20;
	printf("%d\n", num);//结果通过指针p直接访问num的内存却做到了改变num的值
	//这个结果是不符合我们预期的
	//相当于我们把门关上了希望防贼，结果贼从窗户进来了
	return 0;
}

void const2()
{
	const int num = 10;//关“门” (num不可改)
	const int* p = &num;//关“窗户” (*p不可改)
	//const放在*左边的时候，修饰的是*p（int const* p语法也是对的）
	//表示指针指向的内容(*p)是不能通过指针来改变的
	//但是，p仍然是一个指针变量，p仍然是能改变的！
	printf("%d\n", num);
	return 0;
}

void const3()
{
	const int num = 10;
	int* const p = &num;//此时 p 是常变量，*p 仍然可改
	printf("%d\n", num);
	return 0;
}

void const4()
{
	const int num = 10;
	int const * const p = &num;//“此时女孩既吃不到凉皮又不能换男朋友”
	printf("%d\n", num);
	return 0;
}

