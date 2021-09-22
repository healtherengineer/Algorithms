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
int main()
{
	char metin[100],metin2[100];
	printf("metin1 i giriniz : "); gets(metin);
	printf("metin2 i giriniz : "); gets(metin2);
	int mb1=boyut(metin);
	int mb2=boyut(metin2);
	char bir_2[100],iki_1[100];
	int a=0;
	if(mb1==mb2)
	{
	for(int i=0;i<mb1;i++)
	{
		if(metin[i]!=metin2[i])
		{
			
			bir_2[a]=metin[i];
			iki_1[a]=metin2[i];
			
			a++;
		}
	}
	if(a>0)
	{
		printf("\nMetin1 ile Metin2 nin boyutlari esittir ama aralarýnda farkli karakterler vardir.");
		printf("\n metin1 in metin 2 den farkli karakterleri ==%s\n",bir_2);
		printf("\nmetin2 in metin 1 den farkli karakterleri== %s\n",iki_1);
			
		}
	}
	else{
		printf("Metinlerin boyutlari esit degildir. ");
}
	
	
	}


	

