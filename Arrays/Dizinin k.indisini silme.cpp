#include<stdio.h>
int main()
{
	
	int n,k;
	printf("Lutfen n degeri giriniz : "); scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("Deger giriniz (%d) : ",i); scanf("%d",&a[i]);
		
	}
	printf("\nLutfen silmek istediginiz indeks degerini giriniz : "); scanf("%d",&k);
	
	for(int i=k;i<n;i++)
	{
		a[i]=a[i+1];// burda da k. indis(silmek istedi�imiz indis)ten ba�layarak �st�ne yazd�ra yazd�ra ilerliyor.
	}
	for(int i=0;i<n-1;i++) // bir deger sildi�imiz i�in 1 tane az d�necek bu y�zden n-1 defa d�necek
	{
		printf("%d ",a[i]);
	}
	
	
	
}
