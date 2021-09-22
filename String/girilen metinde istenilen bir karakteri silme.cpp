#include<stdio.h>

int boyut(char metin[])
{
	int i=0,s=0;
	while (metin[i]!='\0')
	{
		s=s+1;
		
		i++;
	}
	return s;
}


void karaktersil(char metin[],int ind,int boyut)
{
	for(int x=ind;x<boyut;x++)
	{
		metin[x]=metin[x+1];
	}
}
int main()
{
	char cumle[200],harf;
	printf("Metin giriniz : "); gets(cumle);
	printf("\nLutfen kaldirmak istediginiz harfi giriniz : "); scanf("%c",&harf);
	int cb=boyut(cumle);
	for(int i=0;i<cb;i++)
	{
		if(cumle[i]==harf)
		{
			karaktersil(cumle,i,cb);
			i--; // burda neden i yi bir azalttýk? // sildiði harfin yerine önündeki harf geldi çunku mesela
			// metin den e yi silerken t üstüne yazýldý onu kontrol etmez eðer i-- yapmaZSAK!.
		}
	
	}
	printf("%s",cumle);
	
}
