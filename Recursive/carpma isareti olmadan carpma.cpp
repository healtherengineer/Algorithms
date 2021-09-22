#include<stdio.h>
int carpma(int x,int y)
{
	if(y==0)
	{
		return 0;
	}
	else
	{
		return x+carpma(x,y-1);
	}
}
int main()
{
	int a,b;
	printf ("a gir: "); scanf("%d",&a);
	printf ("b gir: "); scanf("%d",&b);
	printf ("\nSONUC=%d",carpma(a,b)); 
}
