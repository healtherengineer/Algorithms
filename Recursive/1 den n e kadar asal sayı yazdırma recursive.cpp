#include<stdio.h>
int asalkontrol(int x,int y)
{
   if(y==1)
   {
   	return 1;
   }
   if(x<2)
   {
   	return 0;
   }
   if(x%y!= 0)
   {
   	return asalkontrol(x,y-1);
   }
   else
   {
   	return 0;
   }
}

int main()
{
	int n,y,t=0;
	printf("Lutfen N degerini giriniz : "); scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		t=asalkontrol(i,i/2);
		if(t==1)
		{
			printf("%d\n",i);
		}
	}
	
}
