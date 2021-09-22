#include<stdio.h>
int main()
{
	int a=0,n;
	printf("Floyd ucgeni icin satir saiyisi giriniz : "); scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{     a=a+1;
			printf("%d ",a);
		}
			
		printf("\n");
	}
}
