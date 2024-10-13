#include<stdio.h>
int main()
{
   short int x;         //2字节
   char x0,x1,*cp;   //1字节
   x=0x1122;           //0x22,0x11,数据寻址用的是低位字节的地址
   cp=(char *)&x;    //将x的地址转换成字符指针，指向x的起始地址;
                             //注：cp指向一个字节的数据
   x0=*cp;           //x0=c[0];  //低地址单元  
   x1= *(cp+1);      //x1=*(++cp);  x1=c[1];  //高地址单元
   // 若x0=0x22,则是小端，若x0=0x11,则是大端 
   if  (x0==0x22) 
        printf ("\n小端存储模式\n");
   else 
       printf ("\n大端存储模式\n");
   return 0;
}

