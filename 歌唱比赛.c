#include<stdio.h>
double getscore(int *m,int b){
	for(int i=1;i<=b;i++){
		for(int j=0;j<b-i;j++){
			int mid=0;
			if(m[j]>m[j+1]){
				mid=m[j];
				m[j]=m[j+1];
				m[j+1]=mid;
			}
		}
	}
	double score=0;
	double plus=0;
	for(int i=1;i<b-1;i++){
		plus+=m[i];
	}
	score=plus/(b-2);
	return score;
}
int main(){
	int a;
	int b;
	scanf("%d %d",&a,&b);
	int m[a][b]={0};
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&m[i][j]);
		}
	}
	double score[a];
	for(int i=0;i<a;i++){
		score[i]=getscore(m[i],b);
	}
	for(int i=1;i<=a;i++){
		for(int j=0;j<a-i;j++){
			double mid=0;
			if(score[j]>score[j+1]){
				mid=score[j];
				score[j]=score[j+1];
				score[j+1]=mid;
			}
		}
	}
	printf("%.2f",score[a-1]);
}
