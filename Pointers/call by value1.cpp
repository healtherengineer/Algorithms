#include<stdio.h>
void degerdegistir(int a , int b)
{
	int gecici=a;
	a=b;          // fonksiyon bitince a ile b ölür a ve b local yerel deðiþkenlerdir bu yüzden.
	b=gecici;
	printf("a=%d\tb=%d",a,b);
}

int main()
{
   int x=12,y=6;
   
   degerdegistir(x,y); 
   printf("x: %d\ty:%d",x,y); // x ile y nin yeri deðiþmedi 
}
