#include<stdio.h>
int main()
{
	int val; 
    printf("����������ȥ��¥��:");
    scanf("%d", &val);
    switch (val)
    {
        case 1:
            printf("1�㿪!\n");
            break;
        case 2:
            printf("2�㿪!\n");
            break;
        case 3:
            printf("3�㿪!\n");
            break;
        default:
            printf("�ò㲻����, ����������\n");
    }
    return 0;
	
 }  
 //��ѡ1 break  ��ѡ�಻��break 
