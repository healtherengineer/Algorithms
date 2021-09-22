#include<stdio.h>
int yerinibul(int dizi[],int x,int ind)
{
	for(int i=0;i<ind;i++)
	{
		if(dizi[i]>x)
		{
			return i;
		}
	}
}
void kaydir(int dizi[],int t,int i)
{
	while(i>t)
	{
		dizi[i]=dizi[i-1];
		i--;
	}
}
/*void kaydir2(int dizi[],int t,int i)
{
	for(int j=i-1,j<t,j--)
	{
		dizi[j+1]=dizi[j]; // dizide boþluk acýyor t yerini bosaltýyor 
	}
}
*/
int main()
{
	int n;
	printf("Dizinizin eleman sayisini giriniz : "); scanf("%d",&n);
	int number[n];
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz : "); scanf("%d",&number[i]);
	}
	int temp,t;
	for(int i=0;i<n;i++)
	{
		temp=number[i];
		t=yerinibul(number,temp,i);
		kaydir(number,t,i);
		number[t]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",number[i]);
	}
	
	
}
