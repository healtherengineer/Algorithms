#include<stdio.h>
#include<conio.h>
int main()
{
	/*
	// & (ampersant) bellekteki adres degerini verir
	// * bellekte saklanan degiskenin degerini verir.
	// * isareti ni koyunca derleyici o degiskeni pointer olarak alg�lar.
	// pointer bir deger d�ndurcekse %p integer bir deger d�nd�recekse %d kullancaz	
	int a=32;
	int *ptr;
	ptr=&a;
	int b=*ptr;  // a=b den hi� bir fark� yok.
	printf("A ifadesinin degeri = %d ",a);
	printf("\nA degiskeninin bellekteki adresi = %p",&a);
	printf("\nA degiskeninin bellekteki adresi with pointer ile = %p",ptr);
	//	printf("\nA ifadesinin degeri = %d ",*ptr);
		printf("\nB ifadesinin degeri = %d ",b);
		int *ptr1,*ptr2; // do�ru bir tan�mlama 
		int *ptr3,ptr; // !!!!!!YANLI�!!!!!! TANIMLANMAZ.
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

	ptrdnm++; // e�er pointer degerini bir artt�r�rsak ondan sonraki kutucugun ba��n� g�sterir 4 byte sonras�n�n.
	
	

   printf("\nDeneme sayisinin yeni adresi = %x",ptrdnm);	
}
