#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Hanoi(int n, char x, char y, char z)
{
    void move(char, int, char);
    if (n == 1)
        move(x, 1, z);
    else
    {
        Hanoi(n - 1, x, z, y);
        move(x, n, z);
        Hanoi(n - 1, y, x, z);
    }
}
void move(char start, int n, char end)
{
    static int k = 1;
    printf("��%2d�� ��%c-->%c\n", k, start, end);
    k++;
}
int main()
{
    int n, counter;
    printf("������������");
    scanf("%d", &n);
    printf("\n");
    Hanoi(n, '1', '2', '3');
    printf("\n");
    printf("�ƶ�������\n");
    return 0;
}