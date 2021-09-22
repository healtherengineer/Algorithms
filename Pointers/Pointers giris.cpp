#include<stdio.h>
#include<conio.h>
int main()
{
	/*
	// & (ampersant) bellekteki adres degerini verir
	// * bellekte saklanan degiskenin degerini verir.
	// * isareti ni koyunca derleyici o degiskeni pointer olarak algýlar.
	// pointer bir deger döndurcekse %p integer bir deger döndürecekse %d kullancaz	
	int a=32;
	int *ptr;
	ptr=&a;
	int b=*ptr;  // a=b den hiç bir farký yok.
	printf("A ifadesinin degeri = %d ",a);
	printf("\nA degiskeninin bellekteki adresi = %p",&a);
	printf("\nA degiskeninin bellekteki adresi with pointer ile = %p",ptr);
	//	printf("\nA ifadesinin degeri = %d ",*ptr);
		printf("\nB ifadesinin degeri = %d ",b);
		int *ptr1,*ptr2; // doðru bir tanýmlama 
		int *ptr3,ptr; // !!!!!!YANLIÞ!!!!!! TANIMLANMAZ.
		*/
		char isim[]="Ege";
		int age=20;
		char capital='E';
		float height=1.78;
		double weight=80.6;
		
		
		int *p_age;
		char *p_capital;
		float *p_height;
		double *p_weight;
		p_age=&age;
		p_capital=&capital;
		p_height=&height;
		p_weight=&weight;
		
		printf("%d nin bellekteki adresi = %x\n",age,p_age); // x yazarsan hexadecimal degerlerini yazar.
		printf("%s nin Bas harfi %c bellekteki adresi = %p\n",isim,capital,p_capital);
		printf("%.2f nin bellekteki adresi = %x\n",height,p_height);
		printf("%.2lf nin bellekteki adresi = %p\n",weight,p_weight);

printf("\n****************************************\n");

    int deneme;
   printf("Deneme sayisini giriniz : ");  scanf("%d",&deneme);
    int *ptrdnm;
    ptrdnm=&deneme;
	printf("\nDeneme sayisinin adresi = %x\t Degeri =%d ",ptrdnm,*ptrdnm);

	ptrdnm++; // eðer pointer degerini bir arttýrýrsak ondan sonraki kutucugun baþýný gösterir 4 byte sonrasýnýn.
	
	

   printf("\nDeneme sayisinin yeni adresi = %x",ptrdnm);	
}
