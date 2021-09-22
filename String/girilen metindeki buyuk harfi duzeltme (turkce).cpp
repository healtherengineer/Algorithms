#include<stdio.h>
 //girilen metinde ki bütün buyuk harfleri kucuðe ceviren program eðer turkçe alfabe kullanýyorsak
int main()
 {
 	char metin[200];
 		char buyuk[]="QWERTYUIOPASDFGHJKLZXCVBNM";
 		char kucuk[]="qwertyuýopasdfghjklzxcvbnm";
 	printf("Lutfen metin giriniz : "); gets(metin);
 	for(int i=0;metin[i]!='\0';i++)
 	{
 		for(int j=0;j<26;j++)
 		{
 			if(metin[i]==buyuk[j])
 			{
 				metin[i]=kucuk[j];
			 }
		 }
 		
	 }
 	
 	printf("\n%s",metin);
 	
 }















