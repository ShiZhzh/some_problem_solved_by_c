#include<stdio.h>
#include<string.h>
 
int main()
{
	char *a[10]={"dasd","fsf","dfssd","sdfsf","sdfs","sd","d","sdfs","sfs","fsvc"};
	char *t;
	
	for(int i=0;i<9;i++){
		for(int k=0;k<9-i;k++){
		if(strcmp(a[k],a[k+1])>0){
		t=a[k];
		a[k]=a[k+1];
		a[k+1]=t;
			} 
		}
	}
	for(int i=0;i<10;i++){
		printf("%s\t",a[i]);
	}
}
