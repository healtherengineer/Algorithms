#include<stdio.h>
int main()
{
		char cumle[]="Ege, Cukurova,   Adana.!?";
	char cumle2[]="Berk Besikduzu Trabzon";
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
	
}
