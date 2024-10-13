#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
int find(int ,int ,int [],int []);
int main()
{
	int c,n;
	scanf("%d %d",&c,&n);
	int w[100]={0};
	int v[100]={0};
	for(int i=0;i<n;i++){
		scanf("%lld",&w[i]);
	} 
	//fflush(stdin);
	for(int i=0;i<n;i++){
		scanf("%lld",&v[i]);
	}
	find(c,n,w,v);
	return 0;
}
int find(int c,int n,int w[],int v[])
{
	int a=pow(2,n);
	int x[100]={0};
	int y[a];
	int weight,value=0;
	int curweight,curvalue=0;
	for(int m=0;m<a;m++){
		int b=m;
		for(int i=0;i<n;i++){
			y[i]=b%2;
			b=b/2;
		}
		for(int i=0;i<n;i++){
			curweight+=y[i]*w[i];
			curvalue+=y[i]*v[i];
		}
		if(curweight<=c&&curvalue>=value){
			weight=curweight;
			value=curvalue;
		     for(int i=0;i<n;i++){
		     	x[i]=y[i];
			 }
			 curweight = 0;
			 curvalue = 0;
		}
		curweight=0;
		curvalue=0;
	}
	for(int i=0;i<n;i++){
		if(x[i]==1){
			printf("%d ",i+1);
		}
	}
	printf("%d ",weight);
	printf("%d ",value);
	return 0;
}
