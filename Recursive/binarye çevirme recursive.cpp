#include<stdio.h>
int binary(int x)
{
	if(x>0)
	{
      binary(x/2);
		     printf("%d",x%2);
				  
	  
	}
	else
	{
		return x;
	}
}


int main()
{
	int a;
	printf("Lutfen Bir deger giriniz : "); scanf("%d",&a);
	binary(a);
	
}
