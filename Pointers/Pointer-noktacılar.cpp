#include<stdio.h>
void arttir(int x)
{
	x=x+1;
}
int main()
{
	//PO�NTER (G�STER�C�,��ARET��)
	//Herhangi bir de�i�kenin bellek adresini tutan bir de�i�kendir.
	int a;
	a=2;
	//scanf("%d",&a);
	int *ptr;
	 ptr=&a;// a n�n adresteki degerini  ptr ye att�k ptr ==> bir i�aret�idir.
	printf("a'nin adresi :  %d",ptr);
        //	printf("%d",a); == printf("%d",*ptr); // ikisi ayn� �ey; //
        printf("\nA=%d",a);  // BUNUNLA
        printf("\nPTR DEN A = %d",*ptr); // BU 
        // AYNI �IKTIYI VERECEK!.// YAN� A;
        
        
        a=5;// 2 mi yazar 5 mi ? 5 yazar �unk� a ve *ptr ayn� kutucu�u kullan�yor!!
        printf("\n%d \n",*ptr);
        *ptr=20;// ikisi ortak bellek adresini kullan�yor o y�zden �imdi soruyorum 5 mi yazar 20 mi yazar?
        printf("%d \n",a); // 20 yazar
        
        
        
        
        
        
}
