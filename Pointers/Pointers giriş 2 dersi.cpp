#include<stdio.h>
int main ()
{
	int a=12,*ap;
	float b=3.3,*bp;
	double c=3.3321,*cp;
	char d='S',*dp;
	
	int sayi[]={23,1,4,5},*arrayp;

	 ap=&a; // değişkeni iki defa tanımlamana gerek yok ve
	 bp=&b; // pointer da bir değişken unutma
	 cp=&c;
	 dp=&d;
	
	
	arrayp=&sayi[0];
	
	printf("%p adresindeki int'in degeri = %d dir .\n",ap,*ap);
	printf("%p adresindeki float'in degeri = %.2f dir .\n",bp,*bp);
	printf("%p adresindeki double'in degeri = %.6lf dir .\n",cp,*cp);
	printf("%p adresindeki char'in degeri = %c dir .\n",dp,*dp);
	printf("%p adresindeki dizinin  int'in degeri = %d dir .\n",arrayp,*arrayp);
	
	
	
	
}
