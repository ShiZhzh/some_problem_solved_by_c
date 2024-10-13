#include<stdio.h>
int main()
{
    short int x;
    char x0,x1;
    x=0x1122;     //0x22,0x11,数据寻址用的是低位字节的地址
    x0=((char *)&x)[0];  //低地址单元  
    x1=((char *)&x)[1];  //高地址单元
    printf("x0=0x%x,x1=0x%x",x0,x1);
    // 若x0=0x22,则是小端，若x0=0x11,则是大端 
   if  (x0==0x22) 
        printf ("\n小端存储模式\n");
   else 
       printf ("\n大端存储模式\n");
   return 0;
}

