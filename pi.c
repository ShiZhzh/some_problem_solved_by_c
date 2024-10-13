#include<stdio.h>
#include<math.h>
int main(){
    int N,i,j=-1;
    double PI=1.0,m=3.0,n=1.0;
    scanf("%d",&N);
    N=N*j;
    for(i=1;1;i++){
        if(i%2!=0){
            n=n*j;
        }
        PI=PI+(1/m)*n;
        m=m+2.0;
        n=1.0;
        if((1/m)<=pow(10,N)){
            break;
        }
    }
    printf("%lf",PI*4.0);
    return 0;
}
