#include<stdio.h>
int binary(int x)
{
	if(x>0)
	{
	    printf("%d",x%2);
		binary(x/2);
	}
	
}



int main()
{
	int v;
	printf("enter the value : "); scanf("%d",&v);
	int rslt=binary(v);
	printf("%d",rslt);
}
