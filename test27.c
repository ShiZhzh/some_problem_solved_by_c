#include<stdio.h>
#include<string.h>
int main(){
	int a;
	char b[100]={0};
	scanf("%d",&a);
	scanf("%s",b);
	int len=strlen(b);
	char re[100];
	for(int i=0;i<len;i++){
		char m;
		if((b[i]-'a'+a)>25){
			m=b[i]+a-26;
		}
		else{
			m=b[i]+a;
		}
		re[i]=m;
	}
	for(int i=0;re[i]!='\0';i++){
		putchar(re[i]);
	}
}
