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
	
	// girilen cumledeki kelime say�s�n� bulan program
int harf=0,kelime=0;
for(int i=0;i<c2b;i++) // CUMLEDEK� HER KARAKTER� KONTROL ED�YORUZ
{
	while(cumle2[i]!=' ') // BOSLUK KARAKTER�NE GELENE KADAR KARAKTERLER� DOLANIYORUZ
	{
		harf=harf+1; // HARF KUMELER�N� TOPLUYORUZ
		i=i+1;// BOSLUGA GELENE KADAR � DEGER� ARTS�N D�YE
	}
	if(harf!=0) // EGER HARF SAYACI B�R TANE B�LE ARTTIYSA B�R TANE B�LE HARFL�K KARAKTER D�Z�S� VARSA B�R KEL�ME VARDIR
	{// BU Y�ZDEN KEL�ME +1 YAPIYORUZ.
		kelime=kelime+1;
	}
	harf=0; // SIRADAK� DENEY�M�ZDE HARF SAYACI 0 LANSIN D�YE DONGU SONUNDA SIFIRLIYORUZ.
}
printf("\n'%s' cumlesinde %d tane kelime vardir",cumle2,kelime);

}
