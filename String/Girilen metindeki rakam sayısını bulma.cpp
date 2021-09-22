#include<stdio.h>
int boyut(char x[])
{
	int t=0;
	while(x[t]!='\0')
	{
		t=t+1;
	}
	return t;
}
int main()
{
	char cumle3[200];
	printf("Lutfen metin giriniz : "); gets(cumle3);
	int c3b=boyut(cumle3);
	// metindeki rakam sayisini bulan program.
	char rakam[]={'0','1','2','3','4','5','6','7','8','9'};
	int p=0,y=0;
 for(int i=0;i<=c3b;i++)
 {
 	for(int j=0;j<10;j++)
 	{
 		if(cumle3[i]==rakam[j])
 		{
 			p=p+1;
 			y=y+1;
 			
	 }
	 if(p!=0)
	 {
	 	printf("\nCumlenin %d.indisinde rakam vardir .",i);
	 }
	 p=0;
 }
	
}
printf("\nToplam rakam sayisi %d ' dir",y);
}
