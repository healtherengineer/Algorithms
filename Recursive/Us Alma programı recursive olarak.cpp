#include<stdio.h>
int usal(int x,int y)
{
	if(y==0)
	{
		return 1;
	}
	else
	{
		return x*usal(x,y-1);
	}
}
int main()
{
	int x,y;
	printf("Taban degerini giriniz : "); scanf("%d",&x);
	printf("\nUs degerini giriniz  : "); scanf("%d",&y);
	int sonuc=usal(x,y);
	printf("\n%d",sonuc);
	
}
