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
		a[i]=a[i+1];// burda da k. indis(silmek istediðimiz indis)ten baþlayarak üstüne yazdýra yazdýra ilerliyor.
	}
	for(int i=0;i<n-1;i++) // bir deger sildiðimiz için 1 tane az dönecek bu yüzden n-1 defa dönecek
	{
		printf("%d ",a[i]);
	}
	
	
	
}
