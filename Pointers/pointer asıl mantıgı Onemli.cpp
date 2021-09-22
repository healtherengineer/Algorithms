#include<stdio.h>
int main()
{
	
	int i,j=1;
	int *jp1,*jp2=&j;
	
	jp1=jp2; // jp2 nin içinde jp2 nin adresi var jp1 de artýk ayný adrese sahip.
	
	i = ++(*jp2); // jp2 nin gösterdiði adresteki degeri 1 arttýracak ONDAN sonra 2 iþlem olarak i ye atýcak.
	
	*jp2= *jp1 + i;
	
	printf("i = %d  j= %d  *jp1 = %d  *jp2= %d ",i,j,*jp1,*jp2);
	
	
	
	
	
}
