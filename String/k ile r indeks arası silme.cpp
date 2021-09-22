#include<stdio.h>
int boyut(char x[])
{
	int i=0,s=0;
	while(x[i]!='\0')
	{
		s=s+1;
		i++;
	}
	return s;
}
int main()
{
	char metin[100];
	int r,k,a,t=0;
	printf("Metni giriniz : "); gets(metin);
	printf("K degerinir giriiniz : "); scanf("%d",&k);
	printf("R degerinir giriiniz : "); scanf("%d",&r);
	int mb=boyut(metin);
	a=r-k;
	for(int i=0;i<a;i++)
	{
		for(int j=k;j<=mb-t;j++)
		{
			metin[j]=metin[j+1];
		}
		t=t+1;
	}
	printf("%s",metin);
	
	
	
	
	
}
