#include<stdio.h>
int maxbul(int *arr,int uzunluk) // dizinin uzunlugunu göndercez ve * ile pointer olarak tanımlıcaz
// yani int *arr= sayilar; yapıyor fonksiyona yollarkennn anladııııımmmm!!!!...yuppiiii
{
	int max;
	
	max= arr[0];
	
	for(int i=1;i<uzunluk;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			
		}
		
	}
	
	return max;
}

int main()
{
	//öncelikle maks bulma fonk siyonu yazalım bir tane
	
	int sayilar[5]={1,4399,12,966,333};
	int var=maxbul(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani = %d\n",var);
	
}
