#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//第一步：找到目标字符串的\0
	while (*dest)// \0的ASCII码值是0
	{
		dest++;
	}
	//第二步：字符串追加
	while (*dest++ = *src++)//1.赋值 2.++ 3.每次检验的是*dest的值，所以等*dest为\0时停止
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = { "hello " };
	char arr2[] = { "world" };
	printf("%s\n", my_strcat(arr1, arr2));//利用回调函数 直接返回指针
	return 0;
}

//库函数strcat：
char* __cdecl strcat(char* dst, const char* src)
{
	char* cp = dst;

	while (*cp)
		cp++;                   /* find end of dst */

	while ((*cp++ = *src++) != '\0');       /* Copy src to end of dst */

	return(dst);                  /* return dst */

}

//再思考一个问题：字符串能不能自己追加自己呢？
//答案是不行的，为什么呢？
//因为第一次赋值后，\0就被覆盖了
//不断追加，出现死循环， 因为原来的结束标志\0被覆盖了