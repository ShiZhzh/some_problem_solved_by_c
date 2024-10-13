#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n==1||n==0){
		printf("Today, I ate %d apple.\n",n);
	}
	else{
		printf("Today, I ate %d apple",n);
		printf("s.");
	}
	return 0;
}
