//����a b��������� �ϲ�Ϊ����c ��Ȼ������� ���Ӷ�ΪO(n) 
#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    printf("����������a�ĸ�����");
    scanf("%d",&a);
    int m[a]={0};
    printf("����������a��"); 
    for(int i=0;i<a;i++){
        scanf("%d",&m[i]);
    }
    int b;
    printf("����������b�ĸ�����");
    scanf("%d",&b);
    int n[b];
    printf("����������b��"); 
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
