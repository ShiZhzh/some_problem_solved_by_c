#include<stdio.h>
int main()
{
    short int x;
    char x0,x1;
    x=0x1122;     //0x22,0x11,����Ѱַ�õ��ǵ�λ�ֽڵĵ�ַ
    x0=((char *)&x)[0];  //�͵�ַ��Ԫ  
    x1=((char *)&x)[1];  //�ߵ�ַ��Ԫ
    printf("x0=0x%x,x1=0x%x",x0,x1);
    // ��x0=0x22,����С�ˣ���x0=0x11,���Ǵ�� 
   if  (x0==0x22) 
        printf ("\nС�˴洢ģʽ\n");
   else 
       printf ("\n��˴洢ģʽ\n");
   return 0;
}

