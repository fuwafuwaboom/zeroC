#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
namespace ytx
{
	int scanf = 0;
	int printf = 0;
	namespace hxy
	{
		int scanf = 1;
		int printf = 1;
		void f()
		{
			::printf("hello world\n");
		}
	}
}

int main()
{
	printf("%d\n", ytx::scanf);
	printf("%d\n", ytx::printf);
	ytx::hxy::f();
	return 0;
}