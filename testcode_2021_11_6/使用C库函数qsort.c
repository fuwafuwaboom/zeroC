#define _CRT_SECURE_NO_WARNINGS 1
//qsort()是C语言自带的库函数
//而且排序的时候不挑类型
//我们自己写的的冒泡排序只能排特定的数据
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void qsort(
          void* base,//base中存放的是待排序数据中第一个对象的地址 由于void*无类型，故可以接收所有类型的指针
          size_t num, //待排序的数据元素的个数
          size_t size,//每个元素占用几个字节（size）
          int (*compar)(const void*, const void*)//用来比较待排序数据中相邻元素的函数的指针 返回值 1> 0= -1<
           );

int cmp_int(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
void print_arr(int arr[],int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void qsort_int()
{
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    print_arr(arr, sz);
    return 0;
}



struct Stu
{
    char name[20];
    int age;
};

int cmp_age(const void* a, const void* b)
{
    return ((struct Stu*)a)->age - ((struct Stu*)b)->age;
}
int cmp_name(const void* a, const void* b)
{
    return strcmp(((struct Stu*)a)->name, ((struct Stu*)b)->name);
}
void print_struct(struct Stu* ss, int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%s %d ", (ss + i)->name, (ss + i)->age);
    }
    printf("\n");
}
void qsort_struct()
{
    struct Stu s[] = { {"张三",30},{"李四",24},{"王五",20} };
    int sz = sizeof(s) / sizeof(s[0]);
    //按照年龄排序
    qsort(s, sz, sizeof(s[0]), cmp_age);
    print_struct(s, sz);
    //按照姓名排列
    qsort(s, sz, sizeof(s[0]), cmp_name);
    print_struct(s, sz);
}
int main()
{
    qsort_int();
    qsort_struct();
    return 0;
}
