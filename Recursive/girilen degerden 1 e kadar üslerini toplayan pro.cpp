#include<stdio.h>
int abc(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
		return x*x+abc(x-1);
	}
}

int main()
{
	int n;
	printf("N degeri giriniz : "); scanf("%d",&n);
	printf("%d",abc(n));
}
