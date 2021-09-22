#include<stdio.h>
int main()
{
	int n,m;
	printf("Satir sayisini giriniz : "); scanf("%d",&n);
	printf("Sutun sayisini giriniz : "); scanf("%d",&m);
	int matris[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("Eleman giriniz  : "); scanf("%d",&matris[i][j]);
		}
	}
	int x,k,l;
	printf("Yerlestirmek istediginiz X sayisini giriniz : "); scanf("%d",&x);
		printf("Yerlestirmek istediginiz K satirini giriniz : "); scanf("%d",&k);
			printf("Yerlestirmek istediginiz L sutununu  giriniz : "); scanf("%d",&l);
		for(int i=n;i<=k;i--)
	{
		for(int j=m;j<=l;j--)
		{
		  matris[i+1][j+1]=matris[i][j];
		}
	}
	matris[k][l]=x;
	
		for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		{
		 printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	
}
