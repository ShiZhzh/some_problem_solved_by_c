#include<stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	int result=n;
	while(n!=1){
		result*=(n-1);
		n--;
	}
	printf("%d",result);
}
/*int f(int n){
	int a;
	if(n==1){
		a=n;
		return a;
	}
	else{
		a=n*f(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int result;
	if(n<=12){
		result=f(n);
	printf("%d",result);
	}
}*/
