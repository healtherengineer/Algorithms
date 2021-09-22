#include<stdio.h>
int main()
{
    int n; 
	printf("Lutfen n degerini giriniz : "); scanf("%d",&n);
		int matris[n][n];
   int k=n;
   	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Eleman giriniz [%d][%d] = ",i,j); scanf("%d",&matris[i][j]);
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
	printf("\n\n");
	int gecici;
	
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				k--;
				gecici=matris[i][j];
				matris[i][j]=matris[i][k];
				matris[i][k]=gecici;
			}
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

}
