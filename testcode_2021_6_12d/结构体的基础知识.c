#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���飺һ����ͬ����Ԫ�صļ���
//�ṹ�壺��һЩ�������͵ļ��ϣ���Ϊ��Ա����
//�ṹ�����������͵ļ��ϣ�����������Ҳ��һ������
struct Stu
{
	//�ṹ��ĳ�Ա����
	char name[20];//����
	int age;//����
	char id[20];//ѧ��
}s1,s2;
//���ַ�ʽҲ���Դ����ṹ�壬s1,s2��ȫ�ֱ���
struct B
{
	struct Stu a;//�ṹ������ĳ�Ա��������һ���ṹ��
	double height;
	double weight;
};

void print1(struct B t)//�ṹ�崫ֵ����
{
	printf("%s\n%d\n%s\n%lf\n%lf\n", t.a.name, t.a.age, t.a.id, t.height, t.weight);
	return;
}

void print2(struct B* ps)//�ṹ�崫ַ����
{
	printf("%s\n%d\n%s\n%lf\n%lf\n", ps->a.name, ps->a.age, ps->a.id, ps->height, ps->weight);
	return;
}

int main()
{
	//�ṹ��Ĵ���
	struct Stu ss;//�����ṹ�������ss�Ǿֲ�����

	//�ṹ��ĳ�ʼ��
	struct B s = { {"tianxiao",20,2191300327},1.73,58.5 };
	//ͨ��{}���γ�ʼ��
	//�ṹ�����Ƕ�׳�ʼ��

	//���ʽṹ�����
	printf("%s\n%lf\n%lf\n", s.a.name, s.height, s.weight);
	//. ͨ���ṹ�������ʽṹ�����
	struct B* ps = &s;
	printf("%s\n%lf\n%lf\n",(*ps).a.name, (*ps).height, (*ps).weight);
	printf("%s\n%lf\n%lf\n", ps->a.name, ps->height, ps->weight);
	//(*ps). ���� -> ͨ���ṹ��ָ����ʽṹ�����

	//�ṹ�崫��
	print1(s);//��ֵ����
	print2(&s);//��ַ����
	//����Ӧ��ѡ��print2��ַ���ã�
	//1.����Ҫ���¿��ٿռ䣬��ʡ�˿ռ��ʱ��
	//2.�����޸Ľṹ���е�ֵ
	//���ۣ��ṹ�崫��Ҫ���ṹ��ĵ�ַ

	return 0;
}
