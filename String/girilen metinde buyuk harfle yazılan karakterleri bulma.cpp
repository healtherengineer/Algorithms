#include<stdio.h>
int boyut(char c[])
{
	int i=0;
	while(c[i]!='\0')
	{
		i++;
	}
	return i;
}

int main()
{
	int a=0;
	char buyukyaz[200];
	char buyuk[]="QWERTYUIOPASDFGHJKLZXCVBNM";
	char metin[200];
	printf("Lutfen bir metin giriniz : "); gets(metin);
	int mb=boyut(metin);
	for(int i=0;i<mb;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(buyuk[j]==metin[i])
			{
				buyukyaz[a]=metin[i];
				a++;
			}
		}
	}
	printf("\nBuyuk harfle yazilan karakterler == %s",buyukyaz);
}
