#include<stdio.h>
int main()
{
	int val; 
    printf("请输入您想去的楼层:");
    scanf("%d", &val);
    switch (val)
    {
        case 1:
            printf("1层开!\n");
            break;
        case 2:
            printf("2层开!\n");
            break;
        case 3:
            printf("3层开!\n");
            break;
        default:
            printf("该层不存在, 请重新输入\n");
    }
    return 0;
	
 }  
 //多选1 break  多选多不加break 
