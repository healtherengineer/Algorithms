#include<stdio.h>
int main()
{
	int n,m,k;
	printf("Satir degerini giriniz : "); scanf("%d",&n);
	printf("\nSutun degerini giriniz : "); scanf("%d",&m);
	printf("\nNxM boyutundaki matrisi esit olarak ne kadar buyutmek istersiniz : "); scanf("%d",&k);
	int kaynak[n][m],hedef[n*k][m*k];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d. satir %d. sutunu giriniz [%d][%d]",i,j,i,j); scanf("%d",&kaynak[i][j]);
		
		}
	}
	
	
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
	printf("%d ",kaynak[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(int i=0;i<n*k;i++)
	{
		for(int j=0;j<m*k;j++)
		{
		hedef[i][j]=0;
		}
	}
	printf("\n");
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		hedef[((i-1)*k)+1][((j-1)*k)+1]	=kaynak[i][j];
		}
	}
	printf("\n");
		for(int i=0;i<n*k;i++)
	{
		for(int j=0;j<m*k;j++)
		{
	printf("%d ",hedef[i][j]);
		}
		printf("\n");
	}
	int bas1,bas,son;
	for(int i=0;i<n*k;i++)
	{
		for(int j=0;j<m*k;j++)
		{
			if(hedef[i][j]==1)
			{   bas=j;
				for(int k=j+1;k<m*k;k++)
				{
					if(hedef[i][k]==1)
					{
						son=k;
					for(int t=bas+1;t<son;t++)
					{
						hedef[i][t]=1;
					}
					}
					
				}
			}
		}
	}
	printf("\n");
		for(int i=0;i<n*k;i++)
	{
		for(int j=0;j<m*k;j++)
		{
	printf("%d ",hedef[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
}
