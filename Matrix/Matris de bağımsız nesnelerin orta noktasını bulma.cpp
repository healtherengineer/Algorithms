#include<stdio.h>
#include<math.h>

int main()
{
	
	int matris[8][8],matris2[8][8];

	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			matris[i][j]=0;
			matris2[i][j]=0;
		}
	}
	matris[0][0]=1;
	matris[0][1]=1;
	matris[1][1]=1;
	matris[2][1]=1;
	matris[2][2]=1;
	matris[2][5]=2;
	matris[2][6]=2;
	matris[2][7]=2;
	matris[3][6]=2;
	matris[4][6]=2;
	matris[5][2]=3;
	matris[6][1]=3;
	matris[6][2]=3;
	matris[6][3]=3;
	matris[7][2]=3;

	// 1. nesne için orta noktasini bulma
	int topx1=0,topy1=0,sayac=0;
		for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(matris[i][j]==1)
			{
				sayac=sayac+1; // nesne sayisini saklýyoruz
				topx1=topx1+i; // i yani satir degerlerini topluyoruz
				topy1=topy1+j; // j yani sütün degerlerini topluyoruz
			}
		}
		
	}
	topx1=topx1/sayac; // nesne sayisina x toplamlarýný bolunce x merkez kordinatýný buluyoruz
	topy1=topy1/sayac; // ayný þekilde y merkez kordinatýný buluyoruz
    matris[topx1][topy1]=7;
    matris2[topx1][topy1]=5;
	
	
	
	
	//2. nesne için
	int topx2=0,topy2=0,sayac1=0;
		for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(matris[i][j]==2)
			{
				sayac1=sayac1+1;
				topx2=topx2+i;
				topy2=topy2+j;
			}
		}
		
	}
	topx2=topx2/sayac1;
	topy2=topy2/sayac1;
    matris[topx2][topy2]=7;
	  matris2[topx2][topy2]=5;
	
	
	//3.nesne için
	int topx3=0,topy3=0,sayac2=0;
		for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(matris[i][j]==3)
			{
				sayac2=sayac2+1;
				topx3=topx3+i;
				topy3=topy3+j;
			}
		}
		
	}
	topx3=topx3/sayac2;
	topy3=topy3/sayac2;
    matris[topx3][topy3]=7;
	  matris2[topx3][topy3]=5;
		for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	printf("\n");
		for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{if(matris2[i][j]>3)
		{
			printf("%d ",matris2[i][j]);
		}
			else
			{
				printf(" ",matris[i][j]);
			}
		}
		printf("\n");
	}
	float uzaklik1_2=pow(topx2-topx1,2) + pow(topy2-topy1,2);
	uzaklik1_2=sqrt(uzaklik1_2);
	printf("1 ile 2 arasindaki uzaklik = %f",uzaklik1_2);
	float uzaklik1_3=pow(topx3-topx1,2) + pow(topy3-topy1,2);
	uzaklik1_3=sqrt(uzaklik1_3);
		printf("\n1 ile 3 arasindaki uzaklik = %f",uzaklik1_3);
		float uzaklik2_3=pow(topx3-topx2,2) + pow(topy3-topy2,2);
	uzaklik2_3=sqrt(uzaklik2_3);
		printf("\n2 ile 3 arasindaki uzaklik = %f",uzaklik2_3);
	
}
