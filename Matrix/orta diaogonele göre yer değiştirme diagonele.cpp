#include<stdio.h>
int main()
{
	int n;
	printf("Matrisinizin boyutunu giriniz : "); scanf("%d",&n);
	int matris[n][n];
	// Elemanlar� al�yoruz !!
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("Eleman giriniz [%d][%d] : ",i,j); scanf("%d",&matris[i][j]);
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
	
	int k=n-1,m,gecici,c=0;
	for(int i=0;i<n;i++)
	{    m=n-1; // M HER DEFASINDA N-1 DEN BASLASIN
		for(int j=0;j<n;j++)
		{   
			if(i==j)
			{
				gecici=matris[i][j];
				matris[i][j]=matris[k][m];
				matris[k][m]=gecici;
				c++;
			}
			m--;// AMA SUTUN DEGER�ER� D�NGU ���NDE AZALSIN
		}
		if(c==n/2)
		{
			//ORTANCA SATIRA GELD��� ZAMAN DURSUN K� B�RDAHA YER DE����P ESK� HAL�N� ALMASIN
			i=n;
		}
		k--;
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
