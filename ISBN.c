#include<stdio.h>

int main(){
	char f[13];
	scanf("%s",f);
	
	int num[9];
	num[0]=f[0]-'0';
	for(int i=2;i<5;i++){
		int j=i-1;
		num[j]=f[i]-'0';
	}
	for(int i=6;i<11;i++){
		int j=i-2;
		num[j]=f[i]-'0';
	}
	
	int numb=0;
	for(int i=0;i<9;i++){
		int a=i+1;
		numb+=num[i]*a;
	}
	char l;
	if(numb%11==10){
		l='X';
	}
	else{
		l=(numb%11)+'0';
	}
	
	if(l==f[12]){
		printf("Right");
	}
	else{
		f[12]=l;
		printf("%s",f);
	}
	return 0;
}
