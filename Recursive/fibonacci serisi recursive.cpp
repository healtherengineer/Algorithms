#include<stdio.h>
int fib(int x)
{    
	if(x==0)
	{
		return 0;
	}
	if(x==1)
	{
		return 1;
	}
	else
	{  int deger=fib(x-1)+fib(x-2);
	printf("%d ",deger);
	   return deger;
	 //	return fib(x-1)+fib(x-2); // bu do�ru olan ama ben fib lerin degerlerini yazd�rmak istiyorum
	 
	}
	 

}

int main()
{
	int f;
	printf("Fibonacci nin kacinci elemanini istersiniz : "); scanf("%d",&f);
	fib(f);
	//int sonuc=fib(f);
//printf("\n%d",sonuc);
	
}
