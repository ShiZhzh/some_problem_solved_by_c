#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n = 0, a = 0, b, small, big; // n为数组大小,a为要查找的数
    int *mat;                        // 储存数组
    scanf("%d%d", &n, &a);
    mat = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        scanf("%d", &mat[i]);
    small = 0;
    big = n;
    b = (small + big) / 2;
    while (mat[b] != a)
    {
        if (mat[b] < a)
            small = b;
        if (mat[b] > a)
            big = b;
        b = (small + big) / 2;
        if (big - small <= 1)
        {
            b = -1;
            break;
        }
    }
    printf("%d", b);

    return 0;
}
