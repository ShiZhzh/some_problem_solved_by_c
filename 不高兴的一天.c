#include<stdio.h>
int main(){
	int d[7][2];
	for(int i=0;i<7;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&d[i][j]);
		}
	} 
	int hour[7];
	int day[7];
	for(int i=0;i<7;i++){
		hour[i]=d[i][0]+d[i][1];
		day[i]=d[i][0]+d[i][1];
	}
	for(int i=1;i<=7;i++){
		for(int j=0;j<7-i;j++){
			int mid=0;
			if(hour[j]>hour[j+1]){
				mid=hour[j];
				hour[j]=hour[j+1];
				hour[j+1]=mid;
			} 
		}
	}
	
	if(hour[6]>8){
		for(int i=0;i<7;i++){
			if(day[i]==hour[6]){
				printf("%d",i+1);
				break;
			}
		}
	}
	else{
		printf("0");
	}
	return 0;
}
