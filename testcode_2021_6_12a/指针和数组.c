#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int empty()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	//��������������Ԫ�صĵ�ַ
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%p<==>%p\n", &arr[i], p + i);
		*(p + i) = i;
	}
	//pΪ�׵�ַ��p+i���ǵ�i��Ԫ�صĵ�ַ
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	int* p = arr;
	//arr[2] <--> *(p+2) <--> *(2+p) <--> *(arr+2) <--> *(2+arr)
	//Ҳ����˵arr[2] <--> *(arr+2) <--> *(2+arr) <--> 2[arr]
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);//������д����Ȼ�ǵȼ۵�
	//Ϊʲô�أ�
	//��Ϊ[]��һ�������������������ڴ���[]ʱ
	//������һ��ת����arr[2] --> *(arr+2)
	//���ӷ������㽻���ɵģ�����2[arr] --> *(2+arr) --> *(arr+2)
	printf("%d\n", arr[2]);
	printf("%d\n", p[2]);//������д��Ҳ�ǵȼ۵�
	//��Ϊp[2] --> *(p+2) --> *(arr+2)
	return 0;
}