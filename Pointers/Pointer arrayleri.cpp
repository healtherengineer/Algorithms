#include<stdio.h>
char *gunismi(char *gundizisi[],int uzunluk,int hangigun)
{
	if(hangigun>=1 && hangigun<=7)
	{
		return gundizisi[hangigun-1];
		
	}
	
	else
	{
		return NULL;
	}
}
int main()
{
	
	char *gunler[7]={"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	
	char *ptr=gunismi(gunler,7,5);
	
	if(ptr==NULL)
	{
		printf("<> NULL <>");
	}
	else
	{
		printf("%s",ptr);
	}
}
