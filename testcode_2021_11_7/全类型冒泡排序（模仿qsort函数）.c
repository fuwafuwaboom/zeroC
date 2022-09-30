#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Swap(char* a, char* b,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		*a = *a ^ *b;
		*b = *a ^ *b;
		*a = *a ^ *b;
		a++;
		b++;
	}
}
void bsort(void* base, int sz, int width, int(*cmp)(const void* a, const void* b))
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        int flag = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
            {
                Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);//交换
            }
            flag++;
        }
        if (0 == flag)
        {
            break;
        }
    }
}

int cmp_int(const void* a, const void* b)
{
    return *(int*)a - *(int*)b;
}
void print_arr(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bsort_int()
{
    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bsort(arr, sz, sizeof(arr[0]), cmp_int);
    print_arr(arr, sz);
    return;
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
void bsort_struct()
{
    struct Stu s[] = { {"张三",30},{"李四",24},{"王五",20} };
    int sz = sizeof(s) / sizeof(s[0]);
    //按照年龄排序
    bsort(s, sz, sizeof(s[0]), cmp_age);
    print_struct(s, sz);
    //按照姓名排列
    bsort(s, sz, sizeof(s[0]), cmp_name);
    print_struct(s, sz);
}
int main()
{
    bsort_int();
    bsort_struct();
    return 0;
}