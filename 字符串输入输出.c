#include "stdio.h"

int main()
{
    int a;
    char str[100] = {0};
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        while(getchar() != '\n');
        scanf("%[^\n]", str);
        printf("%s\n", str);
    }

    return 0;
}
