#define _CRT_SECURE_NO_WARNINGS 1
//qsort()��C�����Դ��Ŀ⺯��
//���������ʱ��������
//�����Լ�д�ĵ�ð������ֻ�����ض�������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void qsort(
          void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ ����void*�����ͣ��ʿ��Խ����������͵�ָ��
          size_t num, //�����������Ԫ�صĸ���
          size_t size,//ÿ��Ԫ��ռ�ü����ֽڣ�size��
          int (*compar)(const void*, const void*)//�����Ƚϴ���������������Ԫ�صĺ�����ָ�� ����ֵ 1> 0= -1<
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
    struct Stu s[] = { {"����",30},{"����",24},{"����",20} };
    int sz = sizeof(s) / sizeof(s[0]);
    //������������
    qsort(s, sz, sizeof(s[0]), cmp_age);
    print_struct(s, sz);
    //������������
    qsort(s, sz, sizeof(s[0]), cmp_name);
    print_struct(s, sz);
}
int main()
{
    qsort_int();
    qsort_struct();
    return 0;
}
