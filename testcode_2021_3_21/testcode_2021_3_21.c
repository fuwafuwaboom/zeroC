enum Sex//ö�ٳ���
{
	MALE,
	FEMALE,
	FUTA
};
#define TEN 10//#define����ı�ʶ������
#include<stdio.h>
int main()
{
	int a = 3;//����3�����泣��
	const int b = 5;//b���ǡ�const���εĳ������� b�����޸��ˣ����г����ԣ���b��Ȼ�Ǳ��������Գ�Ϊ����������
	//int arr[b] = { 0 }; ��ʱ�ᱨ�� ��Ϊarr[����]��b�����Ǳ���
	int arr[TEN] = { 0 };//��ʱ�Ͳ��ᱨ�� ��ΪTEN��define����ı�ʶ������
	printf("%d\n", a);//3
		a = 4;
	printf("%d\n", a);//4
	//˵��a��ֵ�����¸�ֵ��ˢ���� ��const�����ǲ��ܱ����¸�ֵ��
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", FUTA);//2  
	//˵��ö�ٳ�����ֵ�����Ƕ���ʱ��˳��0123....
	return 0;
}