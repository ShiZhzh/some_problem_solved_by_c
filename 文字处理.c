#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	char m[200];
	scanf("%d",&n);
	scanf("%s",m);
	for(int i=0;i<n;i++){
		int a=0;
		int b=0;
		int way=0;
		char str[200];
		scanf("%d",&way);
		if(way==1){
			scanf("%s",str);
			strcat(m,str);
			printf("%s\n",m);
		} 
		if(way==2){
			scanf("%d%d",&a,&b);
			int p=0;
			for(int j=a;j<(a+b);j++){
				m[p]=m[j];
				p++;
			}
			while(m[p]!='\0'){
				m[p]='\0';
				p++;
			}
			printf("%s\n",m);
		}
		if(way==3){
			scanf("%d",&a);
			scanf("%s",str);
			int p=0;
			char mid[200]={0};
			for(int j=a;m[j]!='\0';j++){
				mid[p]=m[j];
				p++;
			}
			p=a;
			while(m[p]!='\0'){
				m[p]='\0';
				p++;
			}
			strcat(m,str);
			strcat(m,mid);
			printf("%s\n",m);
		}
		if(way==4){
			scanf("%s",str);
			int p=0;
			int where=-1;
			int score=0;
			int len=strlen(str);
			while(m[p]!='\0'){
				if(m[p]==str[0]){
					int q=0;
					for(int j=p;j<(p+len);j++){
						if(m[j]==str[q]){
							score++;
							q++;
						}
					}
					if(score=len){
						where=p;
						break;
					}
				}
				p++;	
			}
			printf("%d\n",where);
		}
	}	
	return 0;
} 
