//include ���� ��˼�ǰ���һ����stdio.h���ļ�
//stdioΪstd-standard i-input o-output��ʾ������еı�׼����������� 
// �⺯����c�����Դ��� Ҳ���Ǳ��˵Ķ��� ������֮ǰ�ô���к�
//.hΪhead-ͷ�ļ���׺
#include <stdio.h>
int main()//������-��������-main��������ֻ��һ������Ȼ����������
{
	//�������������
	//printfΪprint f-function ����Ļ�ϴ�ӡ�����Ĺ���
	//��ӡ����ġ����Ϻá�
	printf("���Ϥ褦\n");
	//�����������͵ĳ���
	//�������Ӳ��--ͨ��--0/1
	//һ������λ���Գ���һ��0/1
	printf("%d\n", sizeof(char));//1 ��Щ���ֵĵ�λ�ǡ��ֽڡ�һ���ֽ���8��bit����λ
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	//00000001
	//00000010
	//00000011
	//00000100
	//00000101
	//......
	//������8bit=1�ֽ� 0--2^8-1 ͬ��int 4�ֽ� 0--2^32-1
	short age = 20;//���ڴ�����2���ֽڵĿռ�=16bit,�������20
	float weight = 58.5f;//���ڴ�����4���ֽڵĿռ�=32bit,���С��
	return 0;
}