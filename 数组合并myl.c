#include <stdio.h>
int main()
{
	int m,n;
	int i=0,k=0; 
	int a[m];
	int b[n];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int c[m+n];
	i=0;
	int l=0;
	while(i<m&&k<n)
	{
		if(a[i]>b[k])
		{
			c[l]=b[k];
			l++;
			k++; 
		}
		if(a[i]<b[k])
		{
			c[l]=a[i];
			l++;
			i++;
		}
	}	
	if(i=m-1)
	{
		for( ;k<n;k++)
		{
			c[l]=b[k];
			l++;
		}
	}
	if(k=n-1)
	{
		for( ;i<m;i++)
		{
			c[l]=a[i];
			l++;
		}
	}
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
//	printf("%d",c[5]);
	
 }
