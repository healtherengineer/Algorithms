#include<stdio.h>
int abc(int x)
{
int i=0;

for(i=0;i<x-1;i++)
   	{
   		printf("*");
    }	  
    printf("\n");

	if(x>1)
   {
   		 abc(x-1);
   }
	
}
int main()
{
	int x;
	printf("Lutfen x degerini giriniz : "); scanf("%d",&x);
	abc(x);
}
