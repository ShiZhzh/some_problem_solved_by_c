#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int i;
	for(i=0;;i++){
		if(i%3==x){
			if(i%5==y){
				if(i%7==z){
					printf("%d",i);
					break;
				}
			}
		}
	}
}
