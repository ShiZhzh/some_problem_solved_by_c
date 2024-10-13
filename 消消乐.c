#include<stdio.h>

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int b[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int p[m][n]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			p[i][j]=0;
		}
	}
	for(int i=1;i<m-1;i++){
		for(int j=1;j<n-1;j++){
			if(b[i-1][j]==b[i][j]&&b[i][j]==b[i+1][j]){
				p[i][j]+=2;
			}
			if(b[i][j-1]==b[i][j]&&b[i][j]==b[i][j+1]){
				p[i][j]+=1;
			}
		}
	}
	for(int i=1;i<m-1;i++){
		if(b[i-1][0]==b[i][0]&&b[i+1][0]==b[i][0]){
			p[i][0]+=2;
		}
		if(b[i-1][n-1]==b[i][n-1]&&b[i][n-1]==b[i+1][n-1]){
			p[i][n-1]+=2;
		}
	}
	for(int i=1;i<n-1;i++){
		if(b[0][i-1]==b[0][i]&&b[0][i]==b[0][i+1]){
			p[0][i]+=1;
		}
		if(b[m-1][i-1]==b[m-1][i]&&b[m-1][i]==b[m-1][i+1]){
			p[m-1][i]+=1;
		}
	} 
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(p[i][j]==1){
				b[i][j-1]=0;
				b[i][j]=0;
				b[i][j+1]=0;
			}
			if(p[i][j]==2){
				b[i-1][j]=0;
				b[i][j]=0;
				b[i+1][j]=0;
			}
			if(p[i][j]==3){
				b[i][j+1]=0;
				b[i][j]=0;
				b[i][j-1]=0;
				b[i-1][j]=0;
				b[i+1][j]=0;
			}
		} 
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}printf("\n"); 
	}printf("\n");
	
	return 0;
}
