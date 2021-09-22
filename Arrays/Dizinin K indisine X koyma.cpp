#include<stdio.h>
int main()
{
	int x,k,n;
	printf("Eleman sayisi (n) giriniz : "); scanf("%d",&n);
	int ege[n+1];
	printf("\nK indeksine koymak istediginiz X degerini giriniz : "); scanf("%d",&x);
	printf("\nK indeksini giriniz :  "); scanf("%d",&k);
	 
	
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz (%d): ",i); scanf("%d",&ege[i]);
	}
for(int i=n;i>=k;i--) // diziyi büyültürken sondan baþlýyoruz ki degerleri kaybetmeyelim 
// ama diziyi küçültürken yani eleman silerken üstüne yazdýra yazdýra sildiðimiz için silmek istediðimiz indisten baþlýyor.
{
	ege[i+1]=ege[i];
}
	ege[k]=x; // k indisi boþaldýðýna göre artýk x i küt diye koyabiliriz.
	for(int i=0;i<=n;i++)
	{
		printf("%d ",ege[i]);
	}
	
	
}
