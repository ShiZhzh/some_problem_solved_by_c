#include <stdio.h>
int main()
{
	int n;
	int sign=0;//��ʶ�Ƿ���wrong����� 
	int i,j,a,b,p,q,k;
	scanf("%d",&n);
	int y[100][100];
	int x[100][100];
	//a,b�ֱ��ǵ�һ������y���к��У������һ������ 
		scanf("%d%d",&a,&b);
		
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				scanf("%d",&y[i][j]);
			}
		}
		 
		int z[100][100];
		//��һ�����󵥶����������ʣ�µľ���������ǰ��Ļ���� 
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&p,&q);
		if(b!=p)
		{
			printf("wrong");
			sign=1;
			break;
		}
		//�ڶ�������p�������У�q��������
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
		}//Ϊɶ��Ҫ�ٸ�ֵ��y 
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
