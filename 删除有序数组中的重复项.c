#include<stdio.h>

int del(int *nums,int numsSize){
	int i=0;
	int j=0;
	nums++;
	i++;
	while(nums[i]>=nums[i-1]&&i<numsSize){
		if(nums[i]==nums[i-1]){
			printf("a\n");
			nums[j]=nums[i-1];
			j++;
			i+=2;
		}
		else{
			printf("b\n");
			nums[j]=nums[i-1];
			i++;
			j++;
		}
	}
	return j+1;
}

int main(){
	int n[100]={0};
	int *nums=n;
	for(int i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	int k=del(nums,5);
	printf("%d\n",k);
	for(int i=0;i<100;i++){
		printf("%d",n[i]); 
	}printf("\n");
	for(int i=1;i<k;i++){
		if(nums[i]==nums[i-1]){
			printf("false");
			break;
		} 
		if(i==k-1){
			printf("true");
		}
	} 
}
