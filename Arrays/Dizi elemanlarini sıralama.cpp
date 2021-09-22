#include<stdio.h>
int main()
{
		int n,gecici;
	printf("Dizinizin eleman sayisini giriniz  : "); scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz : "); scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		if(a[i]<a[j])
		{
			gecici=a[i];
			a[i]=a[j];
			a[j]=gecici;
		}
		}
	
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
