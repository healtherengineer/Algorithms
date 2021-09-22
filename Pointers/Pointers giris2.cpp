#include<stdio.h>
int main()
{
	
	//write code
	
	int a = 12;
	
	int *a_ptr = &a;
	
	//printf("%p",a_ptr);
	//printf("\n%d",*a_ptr);
	float decimal =3.14;
	char ch= 'E';
	
	float *decimal_p = &decimal;
	char *ch_p = &ch;
	int arr[5]={1,2,3,4,5},*arr_ptr;
	for(int i=0;i<5;i++)
	{
			arr_ptr=&arr[i];
			printf("%d array elemaninin adresi = %p\n",*arr_ptr,arr_ptr);
	}
	printf("\n\n");
	arr_ptr=&arr[1];
	printf("%d integer degerinin adresi = %p\n",a,a_ptr);
	printf("%f float degerinin adresi   = %p\n",decimal,decimal_p);
	printf("%c char degerinin adresi  = %p\n ",ch,ch_p);
}
