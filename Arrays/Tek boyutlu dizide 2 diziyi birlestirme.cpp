#include<stdio.h>
int main()
{
	int m,n;
	printf("Ilk dizinin eleman sayisini giriniz (n) : "); scanf("%d",&n);
	printf("Ikinci dizinin eleman sayisini giriniz (m) : "); scanf("%d",&m);
	int a[n],b[m],c[m+n];
	for(int i=0;i<n;i++)
	{
		printf("A dizisinin %d. elemanini giriniz (%d)  : ",i,i); scanf("%d",&a[i]);
	}
		for(int i=0;i<m;i++)
	{
		printf("B dizisinin %d. elemanini giriniz (%d)  : ",i,i); scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(int i=0;i<m;i++)
	{
		c[n+i]=b[i];
	}
	for(int i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
}
