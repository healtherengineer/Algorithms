#include<stdio.h>
void arttir(int x)
{
	x=x+1;
}
void arttirPointer(int *x)
{
	*x=*x+1; // degerini arttirm�s oluruz x in
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
	printf("%d",a);// 1 artm�� olacak 3 yazacak ��nk� ayn� kutucu�u kullan�yorlar
	printf("\n*********************\n");
	// PO�NTER D�Z�LERDE;
	printf("Pointer Diziler Kullanimi : \n");
	int dizi[3]={5,9,12};
	int *ptr;
	ptr=dizi;// *ptr yi yazmakla dizi[0] � yazmak ayn� �ey.
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",*(ptr+i));
	}
	*(ptr+1)=10;// ayni �ey
	dizi[1]=10;// ayni �ey
		printf("\n*********************\n");
		char kelime[10]="Merhaba";
		char *isim="Mehmet";
		printf("%s",isim);
		
		
		//
	  *p;
		p=(int*)malloc(sizeof(int/*char olsa char derdik*/)*10);// 10 tane tam say�l�k bir yer ay�rm�� olursun 10 elemanl� bir diziyi dizi kullanmadan b�yle tan�mlayabilirsin
	  p[0]=2;
	  *p=2;
	  free(p);// p pointerina bundan sonra eri�me �ans�n�z yok .
	  //pointerin diziye g�re avantaj� = belle�i dinamik kullanmak i�in 
	  //kullan�c�n�n girece�i sayi elemanini dinamik olarak kullanabiliriz.
	  // bir bellek kutcu�unu 2 de�i�kenin dinamik kullanmasi.
	  // pointer == nesne; nesne tabanl� dillerde !!!(ek bilgi);
	  realloc();
	
	
	
	
}
