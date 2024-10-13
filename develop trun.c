#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,area,d,e;
	scanf("%f%f%f",&a,&b,&c);//别忘了& 
	 d=(a+b+c)/2.0;//写/2不可以
	 e=d*(d-a)*(d-b)*(d-c);
	 area=sqrt(e);
	 printf("%f,%f\n",d,e);
	 printf("area=%f",area);
}
//顺序结构程序设计 
