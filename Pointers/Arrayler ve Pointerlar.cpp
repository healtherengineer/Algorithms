#include<stdio.h>

int main()
{
	
  int arr[5]={1,2,3,4,5};
  
  int *ptr = arr; // bunu yapt�ktan sonra dizinin ilk adresini ptr g�stericisine att�n ve art�k, 
                  // o pointer da arr yle ayn� �ey yani arr[1] = ptr[1] ayn� �eydir.
//  int *ptr=&arr[0]; ikisi ayn� �ey demektir.
printf("%u\n",ptr);
// 4 byte sonraki adresi ald� 
printf("ARADA 4 BYTE FARK VAR.\n");
printf("%u\n",ptr+1);
// o adresteki degerde bir sonraki adresi tuttugu i�in
//��yle bir ��kt� olur
printf("Bir sonraki adresteki deger = %u\n",*ptr+1);
printf("\n********\n");

printf("%d\n",*ptr);
printf("%d\n",*(ptr+1));
printf("%d\n",*(ptr+2));
printf("%d\n",*(ptr+3));
printf("%d\n",*(ptr+4));	

//*(ptr+1)---> ptr[1]; //hi�bir fark yok
//k��eli parantez hayat kurtariyor
// g�rd���n gibiiiii
ptr[0]=19;// arr ile ayn� �ey demi�tim
printf("\n%d",ptr[0]);
printf("\n%d",ptr[1]);
printf("\n%d",ptr[2]);
printf("\n%d",ptr[3]);
printf("\n%d",ptr[4]);

printf("\n%u",&(ptr[0])); // bu �ekilde de adres bilgisini alabilirsin


}
