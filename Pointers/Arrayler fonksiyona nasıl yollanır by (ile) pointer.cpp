#include<stdio.h>
int maxbul(int *arr,int uzunluk) // dizinin uzunlugunu göndercez ve * ile pointer olarak tanýmlýcaz
// yani int *arr= sayilar; yapýyor fonksiyona yollarkennn anladýýýýýmmmm!!!!...yuppiiii
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
	//öncelikle maks bulma fonk siyonu yazalým bir tane
	
	int sayilar[5]={1,4399,12,966,333};
	int var=maxbul(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani = %d\n",var);
	
}
