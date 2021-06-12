#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数组：一组相同类型元素的集合
//结构体：是一些数据类型的集合，称为成员变量
//结构体是数据类型的集合，所以它本质也是一个类型
struct Stu
{
	//结构体的成员变量
	char name[20];//名字
	int age;//年龄
	char id[20];//学号
}s1,s2;
//这种方式也可以创建结构体，s1,s2是全局变量
struct B
{
	struct Stu a;//结构体变量的成员可以是另一个结构体
	double height;
	double weight;
};

void print1(struct B t)//结构体传值调用
{
	printf("%s\n%d\n%s\n%lf\n%lf\n", t.a.name, t.a.age, t.a.id, t.height, t.weight);
	return;
}

void print2(struct B* ps)//结构体传址调用
{
	printf("%s\n%d\n%s\n%lf\n%lf\n", ps->a.name, ps->a.age, ps->a.id, ps->height, ps->weight);
	return;
}

int main()
{
	//结构体的创建
	struct Stu ss;//创建结构体变量，ss是局部变量

	//结构体的初始化
	struct B s = { {"tianxiao",20,2191300327},1.73,58.5 };
	//通过{}依次初始化
	//结构体可以嵌套初始化

	//访问结构体变量
	printf("%s\n%lf\n%lf\n", s.a.name, s.height, s.weight);
	//. 通过结构体名访问结构体变量
	struct B* ps = &s;
	printf("%s\n%lf\n%lf\n",(*ps).a.name, (*ps).height, (*ps).weight);
	printf("%s\n%lf\n%lf\n", ps->a.name, ps->height, ps->weight);
	//(*ps). 或者 -> 通过结构体指针访问结构体变量

	//结构体传参
	print1(s);//传值调用
	print2(&s);//传址调用
	//我们应该选择print2传址调用！
	//1.不需要重新开辟空间，节省了空间和时间
	//2.可以修改结构体中的值
	//结论：结构体传参要传结构体的地址

	return 0;
}
