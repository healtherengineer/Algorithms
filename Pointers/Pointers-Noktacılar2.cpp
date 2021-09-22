#include<stdio.h>
void arttir(int x)
{
	x=x+1;
}
void arttirPointer(int *x)
{
	*x=*x+1; // degerini arttirmýs oluruz x in
}
int main()
{
	int a ;
	a=2;
	int *p;
	p=&a;
	arttir(a);
	printf("%d \n",a); // 2 yazacak
	arttirPointer(p);
	printf("%d",a);// 1 artmýþ olacak 3 yazacak çünkü ayný kutucuðu kullanýyorlar
	printf("\n*********************\n");
	// POÝNTER DÝZÝLERDE;
	printf("Pointer Diziler Kullanimi : \n");
	int dizi[3]={5,9,12};
	int *ptr;
	ptr=dizi;// *ptr yi yazmakla dizi[0] ý yazmak ayný þey.
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(ptr+i));
	}
	*(ptr+1)=10;// ayni þey
	dizi[1]=10;// ayni þey
		printf("\n*********************\n");
		char kelime[10]="Merhaba";
		char *isim="Mehmet";
		printf("%s",isim);
		
		
		//
	  *p;
		p=(int*)malloc(sizeof(int/*char olsa char derdik*/)*10);// 10 tane tam sayýlýk bir yer ayýrmýþ olursun 10 elemanlý bir diziyi dizi kullanmadan böyle tanýmlayabilirsin
	  p[0]=2;
	  *p=2;
	  free(p);// p pointerina bundan sonra eriþme þansýnýz yok .
	  //pointerin diziye göre avantajý = belleði dinamik kullanmak için 
	  //kullanýcýnýn gireceði sayi elemanini dinamik olarak kullanabiliriz.
	  // bir bellek kutcuðunu 2 deðiþkenin dinamik kullanmasi.
	  // pointer == nesne; nesne tabanlý dillerde !!!(ek bilgi);
	  realloc();
	
	
	
	
}
