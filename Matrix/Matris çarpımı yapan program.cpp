#include<stdio.h>
/*
int matrisyaz(int mx[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
     {
     	printf("%d",mx[i][j]);
	 }
	 printf("\n");
	}
}
*/
int main()
{
	int n;
	printf("Matrisinizin boyutunu giriniz  (n): "); scanf("%d",&n);
	int matris[n][n],matris2[n][n],matris3[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			matris[i][j]=0;
		}
	}
	printf("1. matris degerlerini giriniz : \n"); 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Eleman giriniz [%d][%d] : ",i,j); scanf("%d",&matris[i][j]);
		}
	}
	
	
		printf("\n2. matris degerlerini giriniz : \n"); 
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Eleman giriniz [%d][%d] : ",i,j); scanf("%d",&matris2[i][j]);
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
	printf("\n");
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
     {
     	printf("%d ",matris2[i][j]);
	 }
	 printf("\n");
	}
	
	int t=0,k=0,m,x=0;
	
	for(int j=0;j<n;j++)
	{
		for(int f=0;f<n;f++)
		{
			for(int m=0;m<n;m++)
		{ 
			t=t+matris2[m][j]*matris[f][m];
		}
		matris3[f][k]=t;
		t=0;
		}
		
		k++;
		
	}
	
	printf("\n");
		for(int m=0;m<n;m++)
	{
		for(int j=0;j<n;j++)
     {
     	printf("%d ",matris3[m][j]);
	 }
	 printf("\n");
	}
	
	
	
	
}
