#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++){
		scanf("%d",&m[i]); 
	}	
	int find[n];
	for(int i=0;i<n;i++){
		find[i]=0;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			int mid;
			if(m[j]>m[j+1]){
				mid=m[j];
				m[j]=m[j+1];
				m[j+1]=mid;
			}
		}
	} 
	
	for(int i=0;i<n;i++){
		int p=0;
		for(int j=0;j<n;j++){
			if(m[i]==m[j]){
				p++;
			}
		}
		find[i]=p;
	}
	
	int max=0;
	int where;
	for(int i=0;i<n;i++){
		if(max<find[i]){
			where=i;
			max=find[i];
		}
	}
	
	printf("%d",m[where]);
	
	return 0;
} 
