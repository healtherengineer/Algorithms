#include<stdio.h>
void callbyreference(int *a,int *b) // burda int *a=&x ve int *b=&y; olduu.
{
	int gecici=*a;
	
	
	*a=*b;
	
	
	*b=gecici;
		
}

int main()
{
	
	int x=12,y=17;
	printf("X : %d  Y:%d\n",x,y);
callbyreference(&x,&y);// adreslerini yollad�m call by adress yani ADRESLER�YLE �A�IRDIM FONKS�YONA.

printf("X : %d  Y:%d",x,y);

}
