#include<stdio.h>
int main()
{
	
	int i,j=1;
	int *jp1,*jp2=&j;
	
	jp1=jp2; // jp2 nin i�inde jp2 nin adresi var jp1 de art�k ayn� adrese sahip.
	
	i = ++(*jp2); // jp2 nin g�sterdi�i adresteki degeri 1 artt�racak ONDAN sonra 2 i�lem olarak i ye at�cak.
	
	*jp2= *jp1 + i;
	
	printf("i = %d  j= %d  *jp1 = %d  *jp2= %d ",i,j,*jp1,*jp2);
	
	
	
	
	
}
