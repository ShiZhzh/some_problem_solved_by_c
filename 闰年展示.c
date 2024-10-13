#include<stdio.h>
#include<stdlib.h>
int ju(int year){
	int b=0;
	if(year%4==0){
		b=1;
		if(year%100==0){
			b=0;
			if(year%400==0){
				b=1;
			}
		}
	}
	return b; 
} 
int main(){
	int x;
	int y;
	scanf("%d%d",&x,&y);
	int n=y-x+1;
	int *m;
	m=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		m[i]=x;
		x++;
	}
	int num=0;
	int w[n];
	for(int i=0;i<n;i++){
		int year=m[i];
		if(ju(year)==1){
			w[num]=m[i];
			num++;
		}	
	}
	printf("%d\n",num);
	for(int i=0;i<num;i++){
		printf("%d ",w[i]);
	}
}
