#include<stdio.h>
#include<math.h> 
void clean(int **m,int x,int y,int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			m[x+i][y+j]=0;
		}
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int l=pow(2,n);
	int m[l][l]={0};
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			m[i][j]=1;
		}
	}
	int *p[l];
	for(int i=0;i<l;i++){
		p[i]=&m[i][0];
	}
	for(int a=1;a<=n;a++){
		int len=pow(2,n-a);
		int lenth=2*len;
		for(int i=0;i<l;i+=lenth){//一定注意i+=lenth而不是i+lenth 
			for(int j=0;j<l;j+=lenth){
				clean(p,i,j,len);
			}
		}
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<l;j++){
			printf("%d ",m[i][j]);
		}printf("\n");
	}printf("\n");
}
