#include<stdio.h>
#include<math.h>
//#define pi 3.1415926 
int main(){
  int n,m,x,y;
  scanf("%d",&n);
  m=n/2;
  x=n/2;
  y=n/2;
  n%=2;
 while(1)
  {
  	int plus=0;
  	plus+=x/2+y/4;
  	x%=2;
  	y%=4;//after exchange(what important is that throw the useful one)
  	x+=plus;
  	y+=plus;
  	m+=plus;//num change
  	if(plus==0)
  	break;
	plus=0;  
  }
  printf("%d %d %d %d",m,x,y,n);
}
