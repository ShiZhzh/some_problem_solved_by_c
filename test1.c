#include<stdio.h>
#include<string.h>
int main(){
	char mid[100];
	int n=0;
	int num=89;
		while(num!=0){
			mid[n]=num%10+'0';
			n++;
			num=num/10;
		}
	printf("%s",mid);
	printf("%d",n);
}
