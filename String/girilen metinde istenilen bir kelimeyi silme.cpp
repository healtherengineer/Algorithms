#include<stdio.h>
int boyut(char x[])
{
	int i=0;
	while(x[i]!='\0')
	{
		
		i++;
	}
	return i;
}
int  karaktersil(char metin[],int ind,int boyut)
{
	for(int x=ind;x<boyut;x++)
	{
		metin[x]=metin[x+1];
	}
}
int main()
{
	char metin[100];
	char aranan[100];
	int c=0,t=0;
	printf("Metin giriniz : "); gets(metin);
	printf("\nAradiginiz kelimeyi giriniz : "); gets(aranan);
	int cb=boyut(metin);
	int arananb=boyut(aranan);
	for(int i=0;i<cb;i++)
	{
		if(metin[i]==aranan[c])
		{
			c=c+1;
			
		}
		else
		{
			c=0;
		}
		if(c==arananb)
		{
		       t=1;
			for(int j=0;j<arananb;j++)
			{
				karaktersil(metin,i,cb); //i burda metin sonu indeks degeri
				cb=cb-1;// HER DEFASINDA CUMLE BOYUTU 1 KARAKTER AZALACAK
				i=i-1;// EN SON EL�M�ZDEK� EGER MET�N SONU O Y�ZDEN S�L�NECEK KEL�ME BOYUTU DEFA DONGU VE
				// � �NDEKS�NDEN KEL�ME BASINA KADAR S�L�NECEK yani Metin sonundan --> metin bas�na kadar
		 }
         //i=0; // i=0 yaparsak diger buldu�u kelimeleride siliyor �unku tekrar d�n�yor basa
		}
	}
	if(t==1)
	{
		printf("\n%s",metin);
	}
	else
	{
		printf("kelime bulunamadi.");
	}
	
	

}
