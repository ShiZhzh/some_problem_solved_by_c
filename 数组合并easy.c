#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	int n2=2*n;
	int c[n2];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	//
	int ia=0;
	int ib=0;
	int ic=0;
	while(ia<n&&ib<n){
		if(a[ia]<b[ib]){
		c[ic]=a[ia];
		ia++;
		ic++;
		}
	else{
		c[ic]=b[ib];
		ib++;
		ic++;
		}
	}
	while(ia<n){
		c[ic]=a[ia];
		ic++;
		ia++;
	}
	while(ib<n){
		c[ic]=b[ib];
		ic++;
		ib++;
	}
	for(int i=0;i<n2;i++){
		printf("%d\t",c[i]);
	}
	return 0;
}
