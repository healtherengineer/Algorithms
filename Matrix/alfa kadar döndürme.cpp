#include<stdio.h>
int main()
{
	int topx=0,topy=0,kume=0;
	int matris[10][8];
	matris[3][4]=1;
	matris[4][3]=1;
	matris[4][4]=1;
	matris[5][2]=1;
	matris[5][3]=1;
	matris[5][4]=1;
	matris[6][1]=1;
	matris[6][2]=1;
	matris[6][3]=1;
	matris[7][1]=1;
	matris[7][2]=1;
	matris[8][1]=1;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(matris[i][j]!=1)
			{
				matris[i][j]=0;
			}
		}
	}
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(matris[i][j]==1)
			{
			topx=topx+i;
			topy=topy+j;
			kume=kume+1;
			}
		}
	}
	topx=topx/kume;
	topy=topy/kume;
	printf("Girilen seklin orta noktasý(merkezi) nin kordinatlari =(%d,%d)",topx,topy);
	
	
	
	
	
}
