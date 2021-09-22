#include<stdio.h>
int main()
{
	char cumle[]="Ege, Cukurova,   Adana.!?";
	char cumle2[]="Berk, Besikduzu, Trabzon.!-?";
	char cumle3[]="Ege! 1 Cukurova, 2 Adana.!?1914";
	printf("%s\n",cumle);
	printf("%s\n",cumle2);
	printf("%s\n",cumle3);
	int t=0;
	while(cumle[t]!='\0')
	{
		t=t+1;
	}
	int cb=t;
	printf("\ncumlenin boyutu = %d",cb);
     t=0;
	while(cumle2[t]!='\0')
	{
		t=t+1;
	}
	int c2b=t;
	printf("\ncumle2'nin boyutu = %d",c2b);
	// 2 karakter dizisi 2metin birbirine esit mi deðilmi?cumle ile cumle 3 u kyaslýcaz
	 t=0;
	while(cumle3[t]!='\0')
	{
		t=t+1;
	}
	int c3b=t;
	printf("\ncumle3'nin boyutu = %d",c3b);
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
	
	// bosluk sayisini bulma cumle karakter dizisini baz alacaðým
	int c=0;
	for(int i=0;i<cb;i++)
	{
		if(cumle[i]==' ')
		{
			c=c+1;
		}
	}
	printf("\n'%s' cumlesinde %d tane bosluk karakteri vardir . ",cumle,c);
	// k ile r karakter arasini kopyalama
/*
	int r,k;
	int s=0;
	printf("\nr giriniz : "); scanf("%d",&r);
	printf("\nk giriniz : "); scanf("%d",&k);
		char kopya[k-r];
	for(int i=r;i<k;i++)
	{
		kopya[s]=cumle2[i];
		s=s+1;
	}
	printf("\nKopyalanan metin = %s",kopya);
	*/
	char rakam[]={'0','1','2','3','4','5','6','7','8','9'};
	int p=0,y=0;
 for(int i=0;i<=c3b;i++)
 {
 	for(int j=0;j<10;j++)
 	{
 		if(cumle3[i]==rakam[j])
 		{
 			p=p+1;
 			y=y+1;
 			
	 }
	 if(p!=0)
	 {
	 	printf("\nCumlenin %d.indisinde rakam vardir .",i);
	 }
	 p=0;
 }
	
}
printf("\nToplam rakam sayisi %d ' dir",y);



}
