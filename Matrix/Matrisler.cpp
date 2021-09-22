#include<stdio.h>
#include<conio.h>
void yazdirmatris(int dizi[100][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d",dizi[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	
	int matris[3][2]={{1,2},{3,4},{5,6}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	//
	int n,m;
	printf("Lutfen satir degerini giriniz : "); scanf("%d",&n);
		printf("Lutfen sutun degerini giriniz : "); scanf("%d",&m);
	int matris2[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&matris2[i][j]);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",matris2[i][j]);
		}
		printf("\n");
	}
	

	return 0;
	getch();
}
