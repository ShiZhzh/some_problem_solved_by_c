# include<stdio.h>
# include<math.h>
int fir[100][100];
int c,d;
void m(int a[100][100],int b[100][100],int e,int f){
	//printf("%d %d",a[0][0],b[0][0]);
	int mul[100][100];
	for(int i=0;i<c;i++){
		for(int k=0;k<f;k++){
			int num=0;
			for(int j=0;j<e;j++){
			//printf("%d %d\n",a[i][j],b[j][k]);
			num+=a[i][j]*b[j][k];
			}
			mul[i][k]=num;
			//printf("%d\n",num);
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<f;j++){
			fir[i][j]=mul[i][j];
		}
	}
	c=c;
	d=f;
}
int main(){
	int n;
	int point=0;
	int e,f;
	scanf("%d",&n);
	scanf("%d%d",&c,&d);
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			scanf("%d",&fir[i][j]);
		}
	}
	for(int k=0;k<n-1;k++){
		int inside[100][100];
		scanf("%d%d",&e,&f);
		for(int i=0;i<e;i++){
			for(int j=0;j<f;j++){
				scanf("%d",&inside[i][j]);
				}
			}
		if(d!=e){
			printf("wrong");
			point++;
			break;
		}
		else
		{
			m(fir,inside,e,f);
		}
	}
	if(point==0){
		for(int i=0;i<c;i++){
			for(int j=0;j<d;j++){
				printf("%d\t",fir[i][j]);
			}printf("\n");
		}
	}
	return 0;
}

