#include<stdio.h>
int main()
{
	int n;	
	printf("Satir degerini giriniz : "); scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			printf(" ");
		}
		for(int k=1;k<i*2;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<2;i++)
	{
		for(int t=n-2;t>=0;t--)
		{
			printf(" ");
		}
		printf("| |");
		printf("\n");
		
	}
	printf("\t\t\tHappy new years\a\a");
	
}
