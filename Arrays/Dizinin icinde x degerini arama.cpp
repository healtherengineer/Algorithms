#include<stdio.h>
int main()
{
	
	int n,x,c=0;
	printf("Lutfen n degeri giriniz : "); scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Deger giriniz (%d) : ",i); scanf("%d",&a[i]);
		
	}
	printf("\nLutfen x degeri giriniz : "); scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			c++;
			printf("\n%d. indiste %d sayisi vardir .",i,x);
		}
	}
	if(c==0)
	{
		printf("Aradigimiz %d degeri dizide mevcut degildir.",x);
	}
}
