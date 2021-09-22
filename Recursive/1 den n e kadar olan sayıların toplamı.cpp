#include<stdio.h>
int ntoplam(int x)
{
if(x==0)
{
	return 0; 
	}	
	else
	{
		return x+ntoplam(x-1);
	}
}


int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",ntoplam(x));
	
	
}
