#include<stdio.h>
int main()
{
	int n ;
	printf("N degerini giriniz : "); scanf("%d",&n);
	int sayi[n];
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz : "); scanf("%d",&sayi[i]);
		
	}
	int c=0,min=0,ind=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(sayi[i]==sayi[j])
			{
				c=c+1;
		}
				}
		if(c>min)
		{
			ind=i;
			min=c;
		}
		c=0;// counteri s�f�rlamassak �al���rken s�k�nt� ��kart�r.��nk� �nceki degerin tekrar say�s�nda kal�r
	}
	printf("\nSayi dizisinin en cok tekrar eden rakami(%d) %d kere tekrar etmistir.",sayi[ind],min);
}
