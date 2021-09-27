#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
struct Doc
{
	char name[20];
	int age;
	char subject[20];
};
struct class
{
	struct Stu wang;
	struct Stu li;
	struct Doc zhang;
};
void print1(struct class t)
{
	printf("%s %d %lf\n%s %d %lf\n%s %d %s\n",
		t.wang.name, t.wang.age, t.wang.score,
		t.li.name, t.li.age, t.li.score,
		t.zhang.name, t.zhang.age, t.zhang.subject);
}void print2(struct class* pt)
{
	printf("%s %d %lf\n%s %d %lf\n%s %d %s\n",
		pt->wang.name, pt->wang.age, pt->wang.score,
		pt->li.name, pt->li.age, pt->li.score,
		pt->zhang.name, pt->zhang.age, pt->zhang.subject);
}
int main()
{
	struct class s = { {"王刚",18,95.5},{"李明",19,83.5},{"张哲",46,"Math"} };
	struct class* ps = &s;
	print1(s);
	print2(&s);
	return 0;
}