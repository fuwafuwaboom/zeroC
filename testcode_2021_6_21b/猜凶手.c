#define _CRT_SECURE_NO_WARNINGS 1
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//
//����Ϊ4�����ɷ��Ĺ���:
//
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

#include<stdio.h>
int main()
{
	int n = 0;
	for (n = 1; n <= 4; n++)
	{
		if (n != 1 && n == 3 && n == 4)
			break;
		if (n != 1 && n == 3 && n != 4 && n != 4)
			break;
		if (n != 1 && n != 3 && n == 4 && n != 4)
			break;
		if (n == 1 && n == 3 && n == 4 && n != 4)
			break;
	}
	switch (n)
	{
		case 1:
			printf("������A");
			break;
		case 2:
			printf("������B");
			break;
		case 3:
			printf("������C");
			break;
		case 4:
			printf("������D");
			break;
	}
	return 0;
}