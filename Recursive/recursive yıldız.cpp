#include<stdio.h>
int abc(int x)
{  
if(x>1)
{
	abc(x-1);
}
for(int i=0;i<x-1;i++)
{
	printf("*");
}
printf("\n");
}

int main()
{
	int c;
	printf(" enter x :"); scanf("%d",&c);
	 abc(c);
	
}
