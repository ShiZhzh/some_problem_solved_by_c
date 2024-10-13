#include<stdio.h>
#include<string.h>
int way=1;
char*road1(char*p,int num1,int num2){
	int num;
	char mid[100];
	if(way==1){
		num=num1+num2;
		int n=0;
		while(num!=0){
			mid[n]=num%10+'0';
			n++;
			num=num/10;
		}
		mid[n]='=';
		n++;
		while(num2!=0){
			mid[n]=num2%10+'0';
			n++;
			num=num2/10;
		}
		mid[n]='+';
		n++;
		while(num1!=0){
			mid[n]=num1%10+'0';
			n++;
			num=num1/10;
		}
		strrev(mid);
		strcpy(p,mid);
		printf("ok+\n");
	}
	if(way==2){
		
	}
	if(way==3){
		
	}
	if(way==4){
		
	}
	return p;
}
char*road2(char*p,int num2){
	
	return p;
}
int main(){
	int n;
	scanf("%d",&n);
	char a[100];
	char b[n][100];
	int len[100];
	int num1;
	int num2;
	for(int i=0;i<n;i++){
		getchar();
		scanf("%s",a);
		if(strlen(a)==1){
			if(a[0]=='a'){
				way=1;
			}
			if(a[0]=='b'){
				way=2;
			}
			if(a[0]=='c'){
				way=3;
			}
			if(a[0]=='d'){
				way=4;
			}
			printf("ok1\n");
			scanf("%d%d",&num1,&num2);
		    char *p=NULL;
			p=road1(a,num1,num2);
			len[i]=strlen(p);
			strcpy(b[i],p);
			printf("ok1\n");
		}
		else{
			scanf("%d",&num2);
		    char *p=NULL;
			p=road2(a,num2);
			strcpy(b[i],p);
			printf("ok2\n");
		}
	}
	for(int i=0;i<n;i++){
		printf("%s",b[i]);
		printf("\n");
	}
	return 0;
}
