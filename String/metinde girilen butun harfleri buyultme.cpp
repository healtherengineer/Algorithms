#include<stdio.h>
int main()
{
	char metin[200];
	printf("Lutfen bir metin giriniz : "); gets(metin);
 
 for(int i=0;metin[i]!='\0';i++)
 {
		if(metin[i]>96)
		{
					metin[i]=metin[i]-32;
		}

	 
	 }	
	printf("%s",metin);
	

	
}
