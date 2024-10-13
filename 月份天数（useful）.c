#include<stdio.h>

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
	int year;
	int mon;
	scanf("%d%d",&year,&mon);
	int p=0;
	p=ju(year);
	if(mon==2){
		if(p==1){
			printf("29");
		}
		else{
			printf("28");
		}
	} 
	else if(mon%2==1&&mon<8){
		printf("31");
	}
	else if(mon%2==0&&mon<7){
		printf("30");
	}
	else if(mon%2==1&&mon>7){
		printf("30");
	}
	else{
		printf("31");
	}
	return 0;
}
