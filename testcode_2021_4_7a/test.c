#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	char Name[20];
	int age;
	float height;
	double score;
};
int main()
{
	struct Stu s = { "Ð¡°×",18,1.74,85.5 };
	printf("%s %d %f %lf", s.Name, s.age, s.height, s.score);
	struct Stu* pa = &s;
	printf("%s %d %f %lf", pa->Name, pa->age, pa->height, pa->score);
	return 0;
}