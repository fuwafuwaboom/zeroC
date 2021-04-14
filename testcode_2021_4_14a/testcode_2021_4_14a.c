#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int x, y, z;
    for (x = 0; x <= 100 / 5; x++)
        for (y = 0; y <= 100 / 3; y++)
            for (z = 0; z <= 100 * 3; z++)
            {
                if ((x * 5 + y * 3 + z / 3 == 100) && (z % 3 == 0) && (x + y + z == 100))
                {
                    printf("x=%d y=%d z=%d\n", x, y, z);
                }
                else
                    goto error;
            }
error:
    return 0;
}