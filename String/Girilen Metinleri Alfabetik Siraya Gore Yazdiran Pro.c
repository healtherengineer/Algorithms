#include <stdio.h>
#include <conio.h>

int BoyutBulucu(char x[])
{
	int i;
	for (i = 0; x[i] != '\0'; i++);
	return i;
}

int main ()
{
	char KucukHarf[] = {"abcdefghijklmnopqrstuvwxyz"};
	char BuyukHarf[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int bkb,i,j,c=0;
	bkb = BoyutBulucu(KucukHarf);
	char Cumle[5][200];
	
	for (i = 0; i < 5; i++)
	{
		printf ("%d.Cumleyi Giriniz: ",i+1);
		gets (Cumle[i]);
	}
	
	for (i = 0; i < bkb; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (Cumle[j][0] == KucukHarf[i])
			{
				c++;
			}
			else if (Cumle[j][0] == BuyukHarf[i])
			{
				c++;
			}
			if (Cumle[j][0] == KucukHarf[i])
			{
				if (c != 0)
				{
					printf ("%s\n",Cumle[j]);
					c--;	
				}
				else
				{
					j = 5;
				}
			}
			else if (Cumle[j][0] == BuyukHarf[i])
			{
				if (c != 0)
				{
					printf ("%s\n",Cumle[j]);
					c--;	
				}
				else
				{
					j = 5;
				}
			}
		}
	}
	getch ();
	return 0;
}
