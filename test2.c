#include<stdio.h>
int main(void){
	int i=6;
	int *p=&i;
	int a[]={1,2,3,4,5,6};
	char d='a';
	printf("%d\n",*p);
	printf("%d\n",p[0]);
	printf("%d\n",p[2]);
	printf("%d\n",*(a+2));
	printf("%c\n",d);
} 
