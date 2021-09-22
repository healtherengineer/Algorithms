#include<stdio.h>
int cifthesapla(int x)
{
	if(x==-1)
	{
		return 0;
	}
	else
	{
		if(x%2==0)
		{
			printf("Cift=%d\n",x);
		}
		else
		{
			printf("Tek=%d\n",x);
		}
		return cifthesapla(x-1);
	}
	
}

int main()
{
	int sayi;
	printf("1 den N e kadar hesaplamak istediginiz cift sayi sinirini giriniz : "); scanf("%d",&sayi);
	cifthesapla(sayi);
	
	
}
