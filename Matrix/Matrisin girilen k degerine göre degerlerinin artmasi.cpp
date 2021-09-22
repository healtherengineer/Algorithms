#include<stdio.h>

int main()
{
	int n,k;
	printf("Lutfen dizi boyutunu giriniz : "); scanf("%d",&n);
	printf("Lutfen dizi degerlerini buyultmek istediginiz k degerini giriniz : "); scanf("%d",&k);
	int matris[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Eleman gir[%d][%d] : ",i,j); scanf("%d",&matris[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			matris[i][j]=matris[i][j]*k;
		}
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	
}
