#include<stdio.h>
void arttir(int x)
{
	x=x+1;
}
int main()
{
	//POÝNTER (GÖSTERÝCÝ,ÝÞARETÇÝ)
	//Herhangi bir deðiþkenin bellek adresini tutan bir deðiþkendir.
	int a;
	a=2;
	//scanf("%d",&a);
	int *ptr;
	 ptr=&a;// a nýn adresteki degerini  ptr ye attýk ptr ==> bir iþaretçidir.
	printf("a'nin adresi :  %d",ptr);
        //	printf("%d",a); == printf("%d",*ptr); // ikisi ayný þey; //
        printf("\nA=%d",a);  // BUNUNLA
        printf("\nPTR DEN A = %d",*ptr); // BU 
        // AYNI ÇIKTIYI VERECEK!.// YANÝ A;
        
        
        a=5;// 2 mi yazar 5 mi ? 5 yazar çunkü a ve *ptr ayný kutucuðu kullanýyor!!
        printf("\n%d \n",*ptr);
        *ptr=20;// ikisi ortak bellek adresini kullanýyor o yüzden þimdi soruyorum 5 mi yazar 20 mi yazar?
        printf("%d \n",a); // 20 yazar
        
        
        
        
        
        
}
