#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//��һ�����ҵ�Ŀ���ַ�����\0
	while (*dest)// \0��ASCII��ֵ��0
	{
		dest++;
	}
	//�ڶ������ַ���׷��
	while (*dest++ = *src++)//1.��ֵ 2.++ 3.ÿ�μ������*dest��ֵ�����Ե�*destΪ\0ʱֹͣ
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = { "hello " };
	char arr2[] = { "world" };
	printf("%s\n", my_strcat(arr1, arr2));//���ûص����� ֱ�ӷ���ָ��
	return 0;
}

//�⺯��strcat��
char* __cdecl strcat(char* dst, const char* src)
{
	char* cp = dst;

	while (*cp)
		cp++;                   /* find end of dst */

	while ((*cp++ = *src++) != '\0');       /* Copy src to end of dst */

	return(dst);                  /* return dst */

}

//��˼��һ�����⣺�ַ����ܲ����Լ�׷���Լ��أ�
//���ǲ��еģ�Ϊʲô�أ�
//��Ϊ��һ�θ�ֵ��\0�ͱ�������
//����׷�ӣ�������ѭ���� ��Ϊԭ���Ľ�����־\0��������