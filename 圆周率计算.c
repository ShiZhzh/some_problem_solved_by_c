#include <stdio.h>
#include<math.h>
int main()
{
	int n,t=1;
	
	scanf("%d",&n);
	double i=1.0,sum=0,a=1.0;

//	for(i=1;t<pow(10,(-1.0)*n);i=i+2)
	while(1.0/i>pow(10.0,-(double)n))
	{
		
		a=t*1.0/i;
	    //printf("%lf ",a);
		sum=a+sum;
		//printf("%lf\n",sum);
        i+=2;
		t=(-1)*t;
  		
		
		
	
		
	
	}
	printf("%lf",4*sum); 
	return 0; 
	
	
}
