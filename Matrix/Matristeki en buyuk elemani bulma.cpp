#include<stdio.h>
int main()
{
	int n,m;
	printf("Satir boyutunu giriniz : "); scanf("%d",&n);
		printf("\nSutun boyutunu giriniz : "); scanf("%d",&m);
	int matris[n][m],max,min;
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Eleman giriniz : "); scanf("%d",&matris[i][j]);
		}
	}
	max=matris[0][1];
	min=matris[0][1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matris[i][j]>max)
			{
				max=matris[i][j];
			}
			if(min>matris[i][j])
			{
				min=matris[i][j];
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	 printf("\n En buyuk matris degeri = %d\n En kucuk matris degeri = %d",max,min);
	
}
