#include<stdio.h>

int main(){
	int plan[12];
	for(int i=0;i<12;i++){
		scanf("%d",&plan[i]);
	}	
	int mon=0;
	int money=0;
	int store=0;
	for(int i=0;i<12;i++){
		mon=i+1;
		money+=300;
		if((money-plan[i])>=100){
			store+=100*((money-plan[i])/100);
			money=(money-plan[i])%100;
		}
		else if((money-plan[i])<0){
			printf("-%d",mon);
			return 0;
		}
		else{
			money-=plan[i];
		}
	}
	money+=store+store/5;
	printf("%d",money);
	return 0;
}
