#include<stdio.h>
int maxbul(int *arr,int uzunluk) // dizinin uzunlugunu g�ndercez ve * ile pointer olarak tan�ml�caz
// yani int *arr= sayilar; yap�yor fonksiyona yollarkennn anlad�����mmmm!!!!...yuppiiii
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
	//�ncelikle maks bulma fonk siyonu yazal�m bir tane
	
	int sayilar[5]={1,4399,12,966,333};
	int var=maxbul(sayilar,5);
	printf("Sayilar dizisinin en buyuk elemani = %d\n",var);
	
}
