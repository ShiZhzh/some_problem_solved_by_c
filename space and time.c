#include<stdio.h>
int main()
{
	int a,b;
	a=a+b;
	b=a-b;
	a=a-b;
	
	int c;
	c=a;
	a=b;
	b=c;
}
//a b互换的两种方式
/*计算法交换可以节省空间
   但是可能会导致溢出
   
   中间变量法可以防止计算消耗
   但占用了空间*/ 
