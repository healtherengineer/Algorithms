#include<stdio.h>

int main()
{
	
  int arr[5]={1,2,3,4,5};
  
  int *ptr = arr; // bunu yaptýktan sonra dizinin ilk adresini ptr göstericisine attýn ve artýk, 
                  // o pointer da arr yle ayný þey yani arr[1] = ptr[1] ayný þeydir.
//  int *ptr=&arr[0]; ikisi ayný þey demektir.
printf("%u\n",ptr);
// 4 byte sonraki adresi aldý 
printf("ARADA 4 BYTE FARK VAR.\n");
printf("%u\n",ptr+1);
// o adresteki degerde bir sonraki adresi tuttugu için
//þöyle bir çýktý olur
printf("Bir sonraki adresteki deger = %u\n",*ptr+1);
printf("\n********\n");

printf("%d\n",*ptr);
printf("%d\n",*(ptr+1));
printf("%d\n",*(ptr+2));
printf("%d\n",*(ptr+3));
printf("%d\n",*(ptr+4));	

//*(ptr+1)---> ptr[1]; //hiçbir fark yok
//köþeli parantez hayat kurtariyor
// gördüðün gibiiiii
ptr[0]=19;// arr ile ayný þey demiþtim
printf("\n%d",ptr[0]);
printf("\n%d",ptr[1]);
printf("\n%d",ptr[2]);
printf("\n%d",ptr[3]);
printf("\n%d",ptr[4]);

printf("\n%u",&(ptr[0])); // bu þekilde de adres bilgisini alabilirsin


}
