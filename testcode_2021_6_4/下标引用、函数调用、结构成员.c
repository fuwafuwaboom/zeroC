#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
void test()
{
	return;
}
struct Book
{
	char name[20];
	char id[20];
	int price;
};
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//int arr[10]�е�[]�����±����ò�����
	printf("%d\n", arr[4]);//[]�����±����ò�����������������������arr��4

	int ret = Add(arr[0], arr[9]);//()���Ǻ������ò��������������Ǻ�������ʵ�ʲ���
	printf("%d\n", ret);
	test();//()�Ĳ���������test������

	struct Book mathbook = { "��ѧ","c20210604",55 };
	printf("������%s\n", mathbook.name);//.���ǽṹ���Ա���ò�����
	printf("��ţ�%s\n", mathbook.id);//��ʽ�ǣ��ṹ�������.��Ա��
	printf("���ۣ�%d\n", mathbook.price);

	struct Book* pb = &mathbook;
	printf("������%s\n", (*pb).name);
	printf("��ţ�%s\n", (*pb).id);
	printf("���ۣ�%d\n", (*pb).price);

	printf("������%s\n", pb->name);//->���÷��� �ṹ��ָ��->��Ա��
	printf("��ţ�%s\n", pb->id);
	printf("���ۣ�%d\n", pb->price);
	return 0;
}