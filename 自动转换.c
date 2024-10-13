#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf("%s",a);
	int lenth=strlen(a);
	for(int i=0;i<lenth;i++){
		if(a[i]>96&&a[i]<123){
			a[i]=a[i]-32;	
		}
		else{
			continue;
		}
	}
	printf("%s",a);
} 
