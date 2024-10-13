#include<stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	int b[a][2];
	for(int i=0;i<a;i++){
		scanf("%d",&b[i][0]);
		scanf("%d",&b[i][1]);
	}
	int j=0;
	int low;
	int high;
	while(j<a){
		low=b[j][0];
		high=b[j][1];
		for(int i=j+1;i<a;i++){
			if(high<b[i][0]){
				break;				
			}
			else if(high<b[i][1]){
				high=b[i][1];
				j++;
			}
			else{
				j++;
			}
		}
		printf("%d %d\n",low,high);
		j++;
	}
}
