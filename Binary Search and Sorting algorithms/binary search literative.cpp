#include<stdio.h>
#include<math.h>
int ikiliarama(int dizi[],int x,int l,int h)
{
	int m;
	m=(l+h)/2;
	if(dizi[m]==x)
	{
		return m;
	}
	else if(dizi[m]<x)
	{
		return ikiliarama(dizi,x,m+1,h);
	}
	else
	{
		return ikiliarama(dizi,x,l,m-1);
	}
}
int main()
{
	
	
	int n;
	printf("Dizinizin boyutunu giriniz : "); scanf("%d",&n);
	int arama[n];
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz (%d) = ",i); scanf("%d",&arama[i]); // n . elemanina ta ha tamam mi paşam
	}
	int aranan;
	printf("\nAradiginiz degeri giriniz : "); scanf("%d",&aranan);
	printf("\n");
	int h=n;
	int l=0;
	// recursive
	//int rslt=ikiliarama(arama,aranan,l,h);
	//printf("%d ",rslt);
	// LİTERATİVE 
	int high=n-1;
	int low=0;
	int m;
	while(high>=low)
	{
	
		m=(high+low)/2;
		if(arama[m]==aranan)
		{
	    printf("%d. indistedir.",m); break;
		}
	  if(arama[m]>aranan)
		{
			high=m-1;
		}
	  if(arama[m]<aranan)
		{
			low=m+1;
		}
	}
	
	
}
