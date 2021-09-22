// girilen metindeki her kelimenin bas harfini buyuten pro
// burdaki asýl bilmemiz gereken ASCII karakter yapýsýnda buyuk harfler 65 den sonra baslar kucukler 96 dan sonra yani;
// A=65 -----> a=97 aralarindaki fark da hep 32 oldugundan buyuk harf gördükmu düzeltilecek.
#include<stdio.h>
int main()
{
	char metin[200];
	printf("Lutfen bir metin giriniz : "); gets(metin);
 
 for(int i=0;metin[i]!='\0';i++)
 {
    if(metin[0]>96)
    {
    	metin[0]=metin[0]-32;
	}
	if(metin[i]== ' ')
	{
		if(metin[i+1]>96)
		{
					metin[i+1]=metin[i+1]-32;
		}
	}
	 
	 }	
	printf("%s",metin);
	

	
}
