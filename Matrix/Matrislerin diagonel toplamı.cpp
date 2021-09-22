#include<stdio.h>
int main()
{
	
	int top=0;
	int n,m;
	printf("Satir degerini giriniz : "); scanf("%d",&n);
	printf("Sutun degerini giriniz : " ); scanf("%d",&m);
	int matrx[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Eleman giriniz [%d][%d] : ",i,j); scanf("%d",&matrx[i][j]);
		}
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j)
			{
				top=top+matrx[i][j];
			}
		}
	}
	printf("\n\n");
	 for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		printf("%d ",matrx[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n Diagonel toplamlari = %d",top);
	
	
}
