#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int x = 0;
	int y = 20;
	a = x = y;//������ֵ������
	x = y + 1;
	a = x;//����д���������ˣ�����һ�㲻�Ƽ�ʹ��������ֵ��д��
	
	//���ϸ�ֵ��
	a = a + 100;//1
	a += 100;//1
	int b = 17;
	b = b << 3;//2
	b <<= 3;//2
	
	//��Ŀ������--ֻ��һ��������
	int flag = 0;
	scanf("%d", &flag);
	if (flag)
	{
		printf("hehe\n");
	}
	if (!flag)//!�߼�����������ٻ�����
	{
		printf("haha\n");
	}

	//sizeof
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);//˵��sizeof�ǲ��������Ǻ���
	printf("%d\n", sizeof(int));

	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof arr);//������
	printf("%d\n", sizeof(int [10]));//ȥ���������Ĳ��־������������

	short s = 5;
	int d = 10;
	printf("%d\n", sizeof(s = d + 2));//2��s��ռ�ռ��С�������ֽ�
	printf("%d\n", s);//5 ��Ϊsizeof�ڲ��ı��ʽ���������㣡
	//��Ϊs=d+2�ڱ����ڼ�ʹ�����ˣ����Ҵ�ʱ����sizeofʱֻ��Ҫ֪�����ͼ��ɣ�
	//��������仰�ͽ�����

	//~�Զ�����λ��λȡ��
	int e = -1;
	//-1�Ĳ��룺11111111111111111111111111111111
	int f = ~e;
	//f�Ĳ��룺00000000000000000000000000000000 -> 0 
	printf("%d\n", f);

	int g = 13;
	g = g | (1 << 4);
	printf("%d\n", g);
	g = g & ~(1 << 4);
	printf("%d\n", g);
	
	//++��--
	//����++����ʹ�ã���ʹ�á����ǡ�ִ����仰������++
	//ǰ��++����++��ʹ��
	return 0;
}