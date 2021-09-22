#include<stdio.h>
int main()
{
	int n;
	printf("Lutfen dizinin eleman sayisini giriniz (n) :"); scanf("%d",&n);
	int sayi[n];
	  printf("Dizinin %d.elemanini giriniz : ",0); scanf("%d",&sayi[0]);
	  int max=sayi[0],min=sayi[0];
	for(int i=1;i<n;i++)
	{
		  printf("Dizinin %d.elemanini giriniz : ",i); scanf("%d",&sayi[i]);
		  if(sayi[i]>max)
		  {
		  	max=sayi[i];
		  }
		  if(sayi[i]<min)
		  {
		  	min=sayi[i];
		  }
	}
	
	printf("\nMax=%d\nMin=%d",max,min);
}
