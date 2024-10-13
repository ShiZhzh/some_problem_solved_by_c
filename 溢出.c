#include <stdio.h>
int main()
{
       char a=-115,b=-14;
       char c=a+b;
    //a+b的结果应该是-129
    //但输出是127，溢出
       printf("c=%d\n",c);  // 127
       return 0; 
 } 

