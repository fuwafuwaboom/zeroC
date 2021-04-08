#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	double db = i;
	const double& rd = db;
	const float& rs = rd;
	return 0;
} 