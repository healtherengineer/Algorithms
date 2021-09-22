#include<stdio.h>
int main()
{
	/*
	// isim tanýmlarken yapmamýz gereken tek þey bu 3 tanýmlama;
	char isim[4]="Ege";
	char *isim3 = "ege";
	char isim1[]={'E','g','E'};
	char isim2[]="eGe";
	printf("%s",isim2);

	// ÇOKLU BÝR ÞEKÝLDE YANÝ BÝR SINFITAKI 3 KÝÞÝNÝN BÝLGÝSÝ ÝÇÝN ÝSE;
//	char name[3][20]={"Ege","Mustafa","Busra"};
//	printf("%s",name[1]);

char ders[2][4][20];
for(int i=0;i<2;i++)
{
for (int j=0;j<4;j++)
{
		printf("%d. siniflarin %d.dersini giriniz : ",i+1,j+1); scanf("%s",&ders[i][j]);
}
 printf("\n");
}
	
int n;
printf("How many names you want to enter = "); scanf("%d",&n);
	char isim[n][20];
	for(int i=0;i<n;i++)
	{
		printf("Enter the name (%d): ",i+1); scanf("%s",&isim[i]);
	}
	*/
	int n,vize[n],final[n];
printf("How many names you want to enter = "); scanf("%d",&n);
	char isim[n][20];
	for(int i=0;i<n;i++)
	{
		printf("Enter the name (%d): ",i+1); scanf("%s",&isim[i]);
	}
	int top=0;
	for(int i=0;i<n;i++)
	{
		printf("Enter the vize (%s): ",isim[i]); scanf("%d",&vize[i]);
		top+=vize[i];
	}
 float rslt=(float)top/(float)n;
	printf("average of vize = %.2f\n",rslt);
	int sum=0;
		for(int i=0;i<n;i++)
	{
		printf("Enter the final (%s): ",isim[i]); scanf("%d",&final[i]);
		sum=sum+final[i];
	}
	float rslt2=(float)sum/(float)n;
		printf("average of final = %.2f\n",rslt2);
	
	
}
