#include<stdio.h>
int boyut(char x[])
{
	int t=0;
	while(x[t]!='\0')
	{
		t=t+1;
	}
	return t;
}
int main()
{
     char cumle2[200];
	printf("Lutfen metin giriniz : "); gets(cumle2);
	int c2b=boyut(cumle2);
	
	// girilen cumledeki kelime sayýsýný bulan program
int harf=0,kelime=0;
for(int i=0;i<c2b;i++) // CUMLEDEKÝ HER KARAKTERÝ KONTROL EDÝYORUZ
{
	while(cumle2[i]!=' ') // BOSLUK KARAKTERÝNE GELENE KADAR KARAKTERLERÝ DOLANIYORUZ
	{
		harf=harf+1; // HARF KUMELERÝNÝ TOPLUYORUZ
		i=i+1;// BOSLUGA GELENE KADAR Ý DEGERÝ ARTSÝN DÝYE
	}
	if(harf!=0) // EGER HARF SAYACI BÝR TANE BÝLE ARTTIYSA BÝR TANE BÝLE HARFLÝK KARAKTER DÝZÝSÝ VARSA BÝR KELÝME VARDIR
	{// BU YÜZDEN KELÝME +1 YAPIYORUZ.
		kelime=kelime+1;
	}
	harf=0; // SIRADAKÝ DENEYÝMÝZDE HARF SAYACI 0 LANSIN DÝYE DONGU SONUNDA SIFIRLIYORUZ.
}
printf("\n'%s' cumlesinde %d tane kelime vardir",cumle2,kelime);

}
