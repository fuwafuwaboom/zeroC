#define _CRT_SECURE_NO_WARNINGS 1

//1.ָ��+-����������
//2.ָ����Լ�ȥָ��
//3.ָ����Խ��й�ϵ���㣨�ȴ�С��


#include<stdio.h>
//����ָ��Ĺ�ϵ��������������Ԫ��
#define N_VALUES 5
int main()
{
	float values[N_VALUES];
	float* vp = &values[0];
	for (; vp < &values[N_VALUES];)//ָ��Ĺ�ϵ���㣬�����ָ���ַ��
	{
		*vp++ = 0;//�൱�� *vp = 0; vp++;
	}
	for (vp = &values[N_VALUES-1]; vp > &values[0];)
	{
		*--vp = 1;
	}
	//�����д������ȷ�ģ���Ϊ��׼�涨ָ����Ժͺ����Խ��ָ��Ƚϣ����ǲ��ܺ�ǰ���Խ��ָ��Ƚ�

}



int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}
//ָ���ȥָ�� �õ���������ָ��ָ����Ԫ�غ�����֮������Ԫ�صĸ���
//���յ�ָ�� - ���ָ�� = ��ָ��֮�������Ԫ�صĸ���

//���ʹ��ָ�������ʵ��my_strlen�ĵ�����д��
int my_strlen1(char* str)//ѭ����д��
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen2(char* str)//ָ�������д��
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	//strlen()--���ַ�������
	int len = my_strlen1("abc");//���ݵ���abc�ַ�����Ԫ�صĵ�ַ
	printf("%d\n", len);
	len = my_strlen2("abc");
	printf("%d\n", len);
	return 0;
}