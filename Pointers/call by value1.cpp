#include<stdio.h>
void degerdegistir(int a , int b)
{
	int gecici=a;
	a=b;          // fonksiyon bitince a ile b �l�r a ve b local yerel de�i�kenlerdir bu y�zden.
	b=gecici;
	printf("a=%d\tb=%d",a,b);
}

int main()
{
   int x=12,y=6;
   
   degerdegistir(x,y); 
   printf("x: %d\ty:%d",x,y); // x ile y nin yeri de�i�medi 
}
