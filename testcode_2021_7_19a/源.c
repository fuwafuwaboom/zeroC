#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�

void Q1()
{
	int money = 0;
	scanf("%d", &money);//Ǯ������
	int total = money;//��ˮ������
	int empty = money;//��ƿ��
	//��ʼ�û�
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);

	/*�ⷨ�� ͨ���ҹ����ҵ�
	int money = 0;
	int total = 0;
	scanf("%d", money);
	if (money > 0)
	{
		total = 2 * money - 1;
	}
	printf("%d\n", total);
	*/
}

//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//��ǰ������ż��
		while (left < right && arr[left] % 2 == 1)
		{
			left++;
		}
		//�Ӻ���ǰ������
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		//����
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	return 0;
}
void Q2()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}

//�������
void Q3()
{
	int i = 0;
	int j = 0;
	int arr[10][10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

void Q4()
{
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c\n", killer);
		}
	}
	return 0;
}

//��һ����ȼ��ʱ����1h ���ʲ����ȣ����������������㣬�����������Ҳ��ͬ
//��ȷ��һ��15���ӵ�ʱ���

//1.��һ�������˵��� ��һ��һ�˵���
//2.���˵��ŵ�������� ��һ����ʣ�µľ��ǰ��Сʱ
//3.�ٰ�ʣ�µ������˵��� ʱ�����15����

//һ����ס��30¥
//������/�������˵�ʱ�� ������ֱ�ӵ�30¥�ؼ�
//����ʱ����������15¥Ȼ����¥�ݻؼ�
//Ϊʲô��

//36ƥ�� 6���ܵ�
//�������ٴ���ȷ��ǰ������
//25ƥ�� 5���ܵ���

//ţ���� ���� ������
//������̳ ���� ������

int main()
{
	Q1();
	Q2();
	Q3();
	Q4();
	return 0;
}
