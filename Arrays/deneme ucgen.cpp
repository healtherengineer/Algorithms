#include<stdio.h>
int main()
{
	// e� kenar �cgen
	int a,b,c;
for(a=1;a<=15;a++)
 {
  for(b=1;b<=15-a;b++)
  {
   printf(" ");
  }
  for(c=1;c<=(2*a)-1;c++)
  {
   printf("*");
  }
  printf("\n");
 }
 
 // 
 
 
 /*   
     �      5 bosluk 1 y�ld�z 1. adim
    ���     4 bosluk 3 y�ld�z 2. adim
   �����    3 bosluk 5 y�ld�z 3. adim
  �������   2 bosluk 7 y�ld�z 4. adim
 ���������  1 bosluk 9 y�ld�z 5. adim
������������ 0 bosluk 11y�ld�z 6. adim
!!Her basamak ''(Adim-1)'' adet bosluk + ''(adim-1)*2+1'' tane yildizdan olusur!!
*/

int h,adim,bosluk,yildiz;
printf("*****Eskenar Ucgen Olusturma Robotu*****\n");
printf("Ucgenin Yuksekligini Giriniz: ");
scanf("%d",&h);

for(adim=1;adim<=h;adim++)
{
     for(bosluk=h;bosluk>=adim;bosluk--)//bosluk koyma yeri
      {
            printf(" ");
       }
      for(yildiz=1;yildiz<=(adim-1)*2+1;yildiz++)//yildiz koyma yeri
      {
            printf("*");
      }
 
printf("\n");
}
}
