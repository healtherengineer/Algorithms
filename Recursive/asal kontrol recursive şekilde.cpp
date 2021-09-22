#include<stdio.h>
#include<math.h>
int asalkontrol(int x,int y)
{
	if(x<2)
	{
		return 0;
	}
	if(y==1)
	{
		return 1;
	}
	
	
		if(x%y==0) 
		{
			return 0;
			return asalkontrol(x,y-1);
		}
	
}
int main()
{
int x;
printf("x degeri gir : "); scanf("%d",&x);
int sonuc =asalkontrol(x,x/2);
if(sonuc==0)
{
		printf("\nAsal degildir ");
}
else 
{
	printf("\nAsaldir .");

}
}
