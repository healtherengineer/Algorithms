#include<stdio.h>
int main()
{
	int matris[5][5];
   int k=5;
   
   
   	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("Eleman giriniz [%d][%d] = ",i,j); scanf("%d",&matris[i][j]);
		}
	}
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",matris[i][j]); 
		}
		printf("\n");
	}
	printf("\n\n");
	int gecici;
	
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
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
	
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",matris[i][j]); 
		}
		printf("\n");
	}
	
	
	
	
}
