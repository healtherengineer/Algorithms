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
int TirnakEkle(char Cumle[],int ind,int cb)
{
	int i;
	
	for ( i = cb ; i >= ind ; i--)
	{
		Cumle[i+1] = Cumle[i]; // dizide bosluk acýyorlar ind nin oldugu alaný bosaltmak için
	}
	
	Cumle[ind] = '\"';
	
}
int main()
{
	int c=0,t=0;
	char cumle[100];
	char aranan[100];
	printf("Lutfen bir cumle giriniz : "); gets(cumle);
	printf("aramak istediginiz kelimeyi giriniz : "); gets(aranan);
	int cb=boyut(cumle);
	int arananb=boyut(aranan);
	printf("Cumlenin boyutu = %d\nAranan kelimenin boyutu=%d\n",cb,arananb);
	for(int i=0;i<cb;i++)
	{
	
		if(cumle[i]==aranan[c])
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
			TirnakEkle(cumle,i+1,cb+1); // cb+1 yapmasýnýn sebebi kutucuk açýyorlar
			TirnakEkle(cumle,i-arananb+1,cb+2); // cb+2 yapmasýnýn sebebide zaten +1 oldu bir tane daha aratacak
		}
	}
	
	if(t==1)
	{
		printf("\n%s",cumle);
	}
	else
	{
		printf("Kelime bulunamadi");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
