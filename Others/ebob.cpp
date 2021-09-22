#include<stdio.h>
#include<math.h>
int main()
{
	 int n1,n2;
printf("enter n1 : "); scanf("%d",&n1);
printf("enter n2 : "); scanf("%d",&n2);

if(n1>n2)
{
	for(int j=n2;j>=1;j--)
	{
		if(n1%j==0 && n2%j==0)
		{
				printf("\nThe largest common divisor of entered numbers = %d",j);
			j=1;
		}
	}
}
else
{
		for(int j=n1;j>=1;j--)
	{
		if(n1%j==0 && n2%j==0)
		{
				printf("\nthe largest common divisor of entered numbers = %d",j);
				j=1;
		}
	}
}
}
