#include<stdio.h>
 //girilen metinde ki b�t�n buyuk harfleri kucu�e ceviren program e�er turk�e alfabe kullan�yorsak
int main()
 {
 	char metin[200];
 		char buyuk[]="QWERTYUIOPASDFGHJKLZXCVBNM";
 		char kucuk[]="qwertyu�opasdfghjklzxcvbnm";
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















