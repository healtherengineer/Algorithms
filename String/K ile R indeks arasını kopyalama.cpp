#include<stdio.h>
int main()
{
	
 char cumle2[200];
	printf("Lutfen metin giriniz : "); gets(cumle2);
	// k ile r karakter arasini kopyalama

	int r,k;
	int s=0;
	printf("\nr giriniz : "); scanf("%d",&r);
	printf("\nk giriniz : "); scanf("%d",&k);
	int a=k-r;
		char kopya[a];
	for(int i=r;i<=k;i++)
	{
		kopya[s]=cumle2[i];
		s=s+1;
	}
	printf("\nKopyalanan metin = %s",kopya);
	
	
}
