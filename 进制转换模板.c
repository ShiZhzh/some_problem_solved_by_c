#include "stdio.h"
#include "math.h"
int a_to_ten(char[], int);
void ten_to_bprint(int, int);

int main()
{
    int a, b, c;
    char mat[1000];
    scanf("%d%d%s", &a, &b, mat);

    c = a_to_ten(mat, a);
    ten_to_bprint(c, b);

    return 0;
}

int a_to_ten(char mat[], int a)
{
    int lenth = 0, ten = 0;
    while (mat[lenth] != '\0')
    {
        lenth++;
    }
    for (int i = 0; i < lenth; i++)
    {
        if (mat[i] >= '0' && mat[i] <= '9')
        {
            ten += (mat[i] - '0') * pow(a, lenth - i - 1);
        }
        else
        {
            ten += (mat[i] - 'a' + 10) * pow(a, lenth - i - 1);
        }
    }
    return ten;
}

void ten_to_bprint(int ten, int a)
{
    char mat[1000];
    int lenth = 0;
    for (; ten != 0; lenth++)
    {
        if (ten % a < 10)
        {
            mat[lenth] = (ten % a) + '0';
        }
        else
        {
            mat[lenth] = (ten % a) - 10 + 'a';
        }
        ten = ten / a;
    }

    for (int i = lenth - 1; i >= 0; i--)
    {
        putchar(mat[i]);
    }
}
