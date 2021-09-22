#include<stdio.h>
int faktoriyel(int x)
{
	// simple case 0! dir .
	if(x==0)
	{
		return 1;
	}
	else
	{
		return x*faktoriyel(x-1);
	}
	// bu þunu yapcak;
	/*
	a=5 olsaydý;
	faktoriyel(5)==> faktoriyel(4)*5; // faktoriyel(4) bilinmiyor 
	faktoriyel(4)==>faktoriyel(3)*4;
		faktoriyel(3)==>faktoriyel(2)*3;
		faktoriyel(2)==>faktoriyel(1)*2;
	faktoriyel(1)==>faktoriyel(0)*1;
	faktoriyel(0)==> return 1; //
	*/
	
}


int main()
{
	int a;
	printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz : ");  scanf("%d",&a);
	int sonuc= faktoriyel(a);
	printf("\n%d",sonuc);
	
}
