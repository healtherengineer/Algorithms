#include<stdio.h>
int main()
{
	char metin[200],b[200];
	printf("Lutfen metin giriniz : "); gets(metin);
	b[0]=metin[0];
	int a=1,c=0;
	for(int i=1;metin[i]!='\0';i++)
	{
		
		for(int j=1;metin[j]!='\0';j++)
		{
			if(metin[i]==metin[j])
			{
				c++;
			}
		}
			if(c==1)
				{
					b[a]=metin[i];
					a++;
				}
		c=0;
	}
	
	printf("\n%s",b);
	
	
	
}
