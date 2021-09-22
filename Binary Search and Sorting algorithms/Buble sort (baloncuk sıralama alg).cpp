#include<stdio.h>
void baloncuk(int dizi[],int eleman)
{
	int temp,i,j;
	for(i=0;i<eleman;i++)
	{
		for(j=i+1;j<eleman;j++)
		{
			if(dizi[i]>dizi[j])
			{
				temp=dizi[j];
				dizi[j]=dizi[i];
				dizi[i]=temp;
			}
		}
	}
}
int main()
{
	// BUBLE SORT (baloncuk sýralamasý)
	int n;
	printf("Dizi boyutunu giriniz : "); scanf("%d",&n);
	int sayi[n];
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz : "); scanf("%d",&sayi[i]);
	}
	baloncuk(sayi,n);
	                                //literative;
	/*int gecici;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(sayi[i]>sayi[j])
			{
				gecici=sayi[j];
				sayi[j]=sayi[i];
				sayi[i]=gecici;
			}
		}
	}
	*/
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",sayi[i]);
	}
	
	

}
