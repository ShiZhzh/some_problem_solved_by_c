#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d",&a);
     	c=0;
		d=1;
	if(a<3){
	if(a==1){
		printf("0");
		    }
		if(a==2){
			printf("1");
			}
	}
	else{
	for(b=0;b<((a-1)/2);b++){
		
		c+=d;
		d+=c;
		
	    }		
			if(a%2==0){
				printf("%d",d);
			}
			if(a%2!=0){
				printf("%d",c);
			}
    }
} 
