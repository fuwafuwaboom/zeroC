#define _CRT_SECURE_NO_WARNINGS 1
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�

#include <stdio.h>

void exchange(int* a, int* b)//exchange���� ��������������ֵ
{
    int c = *a;
    *a = *b;
    *b = c;
}

void perm(int str[], int start, int str_size)//str����ȫ���еĶ��� startȫ���е���� str_size��Ԫ�ظ���
{
    int i = 0, j = 0;

    if (start == str_size)//start == str_size ��ζ�� ��һ���е�start = str_size - 1 Ҳ����˵������ͷ�� �����ݹ�
    {
        /* �����ǰ������ */
        if (((str[1] == 2 && str[0] != 3) || (str[1] != 2 && str[0] == 3))
            && ((str[1] == 2 && str[4] != 4) || (str[1] != 2 && str[4] == 4))
            && ((str[2] == 1 && str[3] != 2) || (str[2] != 1 && str[3] == 2))
            && ((str[2] == 5 && str[3] != 3) || (str[2] != 5 && str[3] == 3))
            && ((str[4] == 4 && str[0] != 1) || (str[4] != 4 && str[0] == 1)))
        printf("A=%d B=%d C=%d D=%d E=%d\n", str[0], str[1], str[2], str[3], str[4]);
    }
    else
    {
        for (j = start; j < str_size; j++)
        {
            exchange(&str[j], &str[start]);//���ΰ�ÿ��Ԫ�طŵ���һ
            perm(str, start + 1, str_size);//��ʣ�µ�Ԫ��ȫ����
            exchange(&str[j], &str[start]);//�ٰѵ�һ��Ԫ�ػ�ԭ��ȥ ��ԭ����˳��
        }
    }
    return;
}
int main()
{
    int a[5] = { 1,2,3,4,5 };
    perm(a, 0, 5);
    return 0;
}



