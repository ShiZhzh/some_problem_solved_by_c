#include<stdio.h>
int score(int num){
	int point=0;
	if(num%2==0){
		point++;
	}
	if(num>4&&num<=12){
		point++;
	}
	return point;
}
int main(){
	int num=0;
	int m[4];
	scanf("%d",&num);
	int a=score(num);
	if(a==2){
		m[0]=1;
		m[1]=1;
		m[2]=0;
		m[3]=0;
	}
	if(a==1){
	    m[0]=0;
		m[1]=1;
		m[2]=1;
		m[3]=0;
	}
	if(a==0){
		m[0]=0;
		m[1]=0;
		m[2]=0;
		m[3]=1;
	}
	for(int i=0;i<4;i++){
		printf("%d ",m[i]);
	}
}
