#include<stdio.h>
void degerdegistir(int a,int b)
{
	int gecici;
	gecici=a;
	a=b;
	b=gecici;
	
	printf("a: %d  b:%d\n",a,b);
	
}
// fonksiyon biterseee x ve y ölür onlar local deðiþkenler 
// a ile b global deðiþkenler.

int main()
{
	
int a=10,b=5;
printf("A: %d  B:%d\n",a,b);
degerdegistir(a,b);

printf("A : %d  B: %d ",a,b);
	
	
	
}
