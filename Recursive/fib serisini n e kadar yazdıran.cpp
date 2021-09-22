#include<stdio.h>
// bu iterative olarak yazýmý recursive deðil
int fib(int x)
{
	int a=1;
	int b=1,c;
	for(int i=0;i<x;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	
}
int main()
{
	int a;
	printf("N degeri giriniz : "); scanf("%d",&a);
	fib(a);
}
