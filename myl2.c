#include <stdio.h>
int main()
{
	int n;
	int sign=0;//标识是否有wrong的输出 
	int i,j,a,b,p,q,k;
	scanf("%d",&n);
	int y[100][100];
	int x[100][100];
	//a,b分别是第一个矩阵y的行和列，输入第一个矩阵 
		scanf("%d%d",&a,&b);
		
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				scanf("%d",&y[i][j]);
			}
		}
		 
		int z[100][100];
		//第一个矩阵单独分离出来，剩下的矩阵依次与前面的积相乘 
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&p,&q);
		if(b!=p)
		{
			printf("wrong");
			sign=1;
			break;
		}
		//第二个矩阵，p是他的行，q是他的列
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&z[i][j]);
			}
		}
		int x[100][100];
		for(i=0;i<a;i++)
		{
			for(j=0;j<q;j++)
			{
				x[i][j]=0; 
				for(k=0;k<b;k++)
				{
					x[i][j]+=y[i][k]*z[k][j];
				}
			}
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<q;j++)
			{
				y[i][j]=x[i][j];
			}
		}//为啥还要再赋值给y 
	}
	if(sign==0)
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ",y[i][j]);
			}
			printf("\n");
		}
	}
	return 0; 
}
