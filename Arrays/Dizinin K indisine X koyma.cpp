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
for(int i=n;i>=k;i--) // diziyi b�y�lt�rken sondan ba�l�yoruz ki degerleri kaybetmeyelim 
// ama diziyi k���lt�rken yani eleman silerken �st�ne yazd�ra yazd�ra sildi�imiz i�in silmek istedi�imiz indisten ba�l�yor.
{
	ege[i+1]=ege[i];
}
	ege[k]=x; // k indisi bo�ald���na g�re art�k x i k�t diye koyabiliriz.
	for(int i=0;i<=n;i++)
	{
		printf("%d ",ege[i]);
	}
	
	
}
