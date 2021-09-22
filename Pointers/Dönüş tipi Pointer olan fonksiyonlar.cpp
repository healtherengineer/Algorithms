#include<stdio.h>
#include<string.h>
char *dondur(char *p,int indeks) //d�n�� tipi pointer olarak tanimlandi 
//fonksiyona metin yollandi char *p=metin; oldu
{
	int uzunluk = strlen(p); // strlen fonksiyonuyla al�nan o char pointerinin uzunlugu �l��ld�.
	
	
	if(indeks > uzunluk)
	{
		return NULL; // e�er indeks uzunluktan fazlaysa hemen garantiye ald� null degere yolladi
	}
	
	else
	{
		return p+indeks; // eger indeks buyuk degilse 
		 // zaten en yukarda baslang�c indeksinin adresi al�nm�st� yani 0. indeks
		 //bizde pointer olarak girilen indeksteki degerin adresi geri d�nd�r�ld�
		 //yani char *ptr=p+indeks; oldu
	}
	
	
}


int main()
{
	char metin[]="Yazilim";

	int ind;
	printf("Indeks degeri giriniz : "); scanf("%d",&ind);
	printf("\n");
	/*
	1. islem ==> char *ptr=metin;           // bununlaaaaa 
	2. islem ==> ptr=ptr+ind;
	*/
	char *ptr = dondur(metin,ind); // bu ayn� �ey fonksiyonda �nce char karakter dizisi p ye e�itleniyor
	         // p pointeri metin karakter dizsinin ilk indeksinin adresini g�steriyor
	         //sonra g�nderilen indeks degerine g�re null m� yoksa indekse mi yollanacag�na karar veriliyor
	         // ve adres d�nd�r�l�yor o adresde ptr pointerina esitleniyor
	         
	         
	         
	         // 46. line dan sonra da ekstra bir kontrol yap�larak null sa null d�r yaz�l�yor
	         //degilse oldugu adresten '\0 ' � g�rene kadar yazd�r�yor.
	     
		   
	if(ptr == NULL)
	{
		printf("Pointer NULL dir.");
	}
	else
	{
		printf("%s",ptr);
	}
	
//	printf("%s",ptr); eger 46 dan 54 e kadar yorum sat�r� yap�p
//sadece 56 y� cal��t�r�rsak veeee eger null oluyorsa c�kt� < Null> OLUR !!!!.
	}
