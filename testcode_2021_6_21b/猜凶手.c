#define _CRT_SECURE_NO_WARNINGS 1
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//
//以下为4个嫌疑犯的供词:
//
//A说：不是我。
//
//B说：是C。
//
//C说：是D。
//
//D说：C在胡说
//
//已知3个人说了真话，1个人说的是假话。
//
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

#include<stdio.h>
int main()
{
	int n = 0;
	for (n = 1; n <= 4; n++)
	{
		if (n != 1 && n == 3 && n == 4)
			break;
		if (n != 1 && n == 3 && n != 4 && n != 4)
			break;
		if (n != 1 && n != 3 && n == 4 && n != 4)
			break;
		if (n == 1 && n == 3 && n == 4 && n != 4)
			break;
	}
	switch (n)
	{
		case 1:
			printf("凶手是A");
			break;
		case 2:
			printf("凶手是B");
			break;
		case 3:
			printf("凶手是C");
			break;
		case 4:
			printf("凶手是D");
			break;
	}
	return 0;
}