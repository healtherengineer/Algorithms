#include<stdio.h>

int main()
{
	int matris[7][7];
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			matris[i][j]=0;
		}
	}
	
//	matris[3][0]=1; // 
	matris[1][3]=1;
	matris[2][2]=1;
	matris[2][3]=1;
	matris[2][4]=1;
	matris[3][1]=1;
	matris[3][2]=1;
	matris[3][3]=1;
	matris[3][4]=1;
	matris[3][5]=1;
	matris[4][2]=1;
	matris[4][3]=1;
	matris[4][4]=1;
	matris[5][3]=1;
		for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	int topy=0,sayac=0;
	for(int i=0;i<7;i++)
	{
		for(int j=0;j<7;j++)
		{
			if(matris[i][j]==1)
			{
				sayac++;
				topy=topy+j;
			}
		}
	}
	topy=topy/sayac;
	printf("\nOrta Sutun = %d ",topy);
	int k,c=0,t=0;
	for(int i=0;i<7;i++)
	{
		k=6;
		for(int j=0;j<topy;j++) //ÞEKLÝN ORTA NOKTASINDAKÝ SUTUNA KADAR GÝTMESÝ ÝÇÝN TOPY ÝLE SINIRLANDIRDIK
		{
			if(matris[i][j]==matris[i][k])// ÞEKLÝN KALAN J DEN SONRAKÝ YERÝNÝ DE HER  DEFASINDA K GEZÝYOR
			{
				c=c+1;
			}
			k-1;
		}
		if(c<3)
		{
			t=1;
			i=8;
			printf("\nSimetrik degildir . ");
		}

	}
	if(t==0)
	{
		printf("\nSimetriktir.");
	}
	
	
	
}
