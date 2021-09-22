#include<stdio.h>
#include<string.h>
char *dondur(char *p,int indeks) //dönüþ tipi pointer olarak tanimlandi 
//fonksiyona metin yollandi char *p=metin; oldu
{
	int uzunluk = strlen(p); // strlen fonksiyonuyla alýnan o char pointerinin uzunlugu ölçüldü.
	
	
	if(indeks > uzunluk)
	{
		return NULL; // eðer indeks uzunluktan fazlaysa hemen garantiye aldý null degere yolladi
	}
	
	else
	{
		return p+indeks; // eger indeks buyuk degilse 
		 // zaten en yukarda baslangýc indeksinin adresi alýnmýstý yani 0. indeks
		 //bizde pointer olarak girilen indeksteki degerin adresi geri döndürüldü
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
	char *ptr = dondur(metin,ind); // bu ayný þey fonksiyonda önce char karakter dizisi p ye eþitleniyor
	         // p pointeri metin karakter dizsinin ilk indeksinin adresini gösteriyor
	         //sonra gönderilen indeks degerine göre null mý yoksa indekse mi yollanacagýna karar veriliyor
	         // ve adres döndürülüyor o adresde ptr pointerina esitleniyor
	         
	         
	         
	         // 46. line dan sonra da ekstra bir kontrol yapýlarak null sa null dýr yazýlýyor
	         //degilse oldugu adresten '\0 ' ý görene kadar yazdýrýyor.
	     
		   
	if(ptr == NULL)
	{
		printf("Pointer NULL dir.");
	}
	else
	{
		printf("%s",ptr);
	}
	
//	printf("%s",ptr); eger 46 dan 54 e kadar yorum satýrý yapýp
//sadece 56 yý calýþtýrýrsak veeee eger null oluyorsa cýktý < Null> OLUR !!!!.
	}
