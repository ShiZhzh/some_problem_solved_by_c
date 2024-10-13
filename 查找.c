#include <stdio.h>
#include <math.h>
#include<malloc.h> 
#include<stdlib.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int m[a];
	for(int i=0;i<a;i++){
	    scanf("%d",&m[i]);
	 } 
		int low=0;
	    int high=a;	
		int mid;
		mid=(low+high)/2;
	    while(m[mid]!=b){
		if(b>m[mid]){
			low=mid;
		}
		if(b<m[mid]){
			high=mid;
		}
		mid=(low+high)/2;
		 if (high - low <= 1)
        {
            mid = -1;
            break;
        }
    }
	printf("%d",mid);
	return 0;
}
