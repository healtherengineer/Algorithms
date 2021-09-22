#include<stdio.h>
int main()
{
	int x,top=1;
	printf("X sayisini giriniz : "); scanf("%d",&x);
	for(int i=2;i<x;i++)
	{
		top=i*top;
		if(top==x)
		{
			printf("\nGirilen x sayisi %d! faktoriyeldir (%d)",i,top);
		}
	}
}
