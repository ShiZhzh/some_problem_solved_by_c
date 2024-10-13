//数组a b都是有序的 合并为数组c 仍然是有序的 复杂度为O(n) 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("请输入数组a的个数：");
    scanf("%d",&a);
    int m[a]={0};
    printf("请输入数组a："); 
    for(int i=0;i<a;i++){
        scanf("%d",&m[i]);
    }
    int b;
    printf("请输入数组b的个数：");
    scanf("%d",&b);
    int n[b];
    printf("请输入数组b："); 
    for(int i=0;i<b;i++){
        scanf("%d",&n[i]);
    }
    int c=a+b;
    int plus[c]={0};
    
    int *p=&m[0];
    int *q=&n[0];
    int *l=&plus[0];
    
    for(int i=0;i<c;i++){
        if(*p<*q){
            *l=*p;
            p++;
        }
        else if(*p>*q){
            *l=*q;
            q++;
        }
        else{
            *l=*p;
            l++;
            *l=*q;
            p++;
            q++;
        }
        l++;
    /*for(int i=0;i<c;i++){
        printf("%d ",plus[i]);
    }
    printf("\n");*/
    }
    
    for(int i=0;i<c;i++){
        printf("%d ",plus[i]);
    }
}
