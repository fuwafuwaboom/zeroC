#define _CRT_SECURE_NO_WARNINGS 1
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N)

//f(n) < o(N)��˼���ǲ���˳�����
#include <stdio.h>
#define ROW 3
#define COL 4
int Find(int arr[ROW][COL], int* row, int* col, int n)
{
    *row = 0;
    *col = COL - 1;
    while ((*row < ROW) && (*col >= 0))
    {
        if (arr[*row][*col] > n)
        {
            (*col)--;
        }
        else if (arr[*row][*col] < n)
        {
            (*row)++;
        }
        else
            return 1;
    }
    return 0;
}
int main()
{
    int arr[ROW][COL] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int input = 0;
    int row = 0;
    int col = 0;
    scanf("%d", &input);
    int ret = Find(arr, &row, &col, input);
    if (ret == 1)
    {
        printf("��%d��, ��%d��\n", row + 1, col + 1);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
