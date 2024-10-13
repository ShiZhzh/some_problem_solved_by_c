#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	int t=0;
	int f=0;
	f=n/50;
	n=n%50;
	t=n/30;
	n=n%30;
	int num;
	num=n/10+t*4+f*7;
	
	printf("%d",num);
	
	return 0;
}
