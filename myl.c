//两组数分别按顺序排列，将这两组数整合到一组并从小到大顺序排列 
#include<stdio.h>
int main() 
{
	int n,i,m;
	scanf("%d",&n);
	m=2*n;
	int a[n],b[n],c[m];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	} 
//第二种方法，有复杂度的要求，只能使用一层for
	int p=0,q=0;
	for( i=0;i<m;i++)
	{
		int ia=0;
		int ib=0; 
		if(a[p]<b[q])
		{
			c[i]=a[p];
		ia++;
		}
		if(a[p]>b[q])
		{
			c[i]=b[q];
		ib++;
		}
		if(p==n||q==n){
			break;
		}
		if(ia!=0){
			p++;
		}
		if(ib!=0){
			q++;
		}
	
		
	} 
	
//		for(i=0;i<2*n;i++)
//	{
//		printf("%d",c[i]);
//	}
	if(p==n)
	{
		
		for(;i<m;)
		{
			c[i]=b[q];
			q++;
			i++;
		
		}
	}
	if(q==n)
	{
	
		for(;i<m;)
		{
			c[i]=a[p];
			p++;
			i++;
		
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d\t",c[i]);
	}
}
