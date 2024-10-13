#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
 
int main(){
	
	int seed,n;
	scanf("%d%d",&seed,&n);
	double m;//this is the result
	double x , y;
	int c=0;
	srand((unsigned)seed);
	for(int i=0;i<n;i++){
	    
		y= (double)rand()/(RAND_MAX+1.0) ;//%2+0;
        x= (double)rand()/(RAND_MAX+1.0)+1.0;//%2+0;
        //printf("%lf %lf\n",x,y);
		if(y<=(1/x)){
			c+=1;
		}
		//seed+=1;
		//printf("%d %d\n",c,d);
	}
	
	m=(double)c/(double)n;
	printf("%lf",m);
	return 0;
	
}
