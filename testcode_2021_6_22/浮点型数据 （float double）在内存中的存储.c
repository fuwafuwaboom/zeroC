#define _CRT_SECURE_NO_WARNINGS 1
//�����ĸ�������
//3.1415926
//1E10 1.0��10^10
//������壺float double (long double)
//���ͼ����ȡֵ��Χ��limits.h
//�����ͼ����ȡֵ��Χ��float.h

//#include<limits.h>
//int main()
//{
//	INT_MAX;//�һ� - ת������
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 9;

	float* pFloat = (float*)&n;//����������9��ַȡ���ŵ�������ָ����
	printf("n��ֵΪ��%d\n", n);//9
	printf("pFloat��ֵΪ��%f\n", *pFloat);//0

	*pFloat = 9.0;
	printf("n��ֵΪ��%d\n", n);//0 10000010 001000000000000000000000000000000
	printf("pFloat��ֵΪ��%f\n", *pFloat);//9.0

	return 0;
}