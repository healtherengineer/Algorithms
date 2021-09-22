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
{  char cumle[200],cumle3[200];
    	printf ("Lutfen 2 Adet Cumle Giriniz Fakat Cumleler 200 Karakterden Az Olmali!\n1.Cumle : ");
	    gets (cumle);
      	printf ("2.Cumle : ");
     	gets (cumle3);
     	int cb=boyut(cumle);
     	int c3b=boyut(cumle3);
		// 2 karakter dizisi 2metin birbirine esit mi deðilmi?cumle ile cumle 3 u kyaslýcaz
		int a=0;
if(cb==c3b)
{
	
	for(int i=0;i<cb;i++)
	{
		if(cumle[i]==cumle3[i])
		{
			a=a+1;
		}
	}
}
	if(a==cb)
	{
		printf("\nCumlelerin boyutlari aynidir (%d) cumleler esittir.",cb);
	}
	else
	{
		printf("\nCumleler esit degildir.");
	}
	
	
	
}
