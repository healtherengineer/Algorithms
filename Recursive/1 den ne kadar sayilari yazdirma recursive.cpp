#include<stdio.h>
int yazdir(int x)
{
	if(x>=1)
	{
		 yazdir(x-1);
		printf("%d\n",x);

	
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int n;
	printf("Lutfen N degerini giriniz : "); scanf("%d",&n);
	yazdir(n);
}
