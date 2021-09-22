#include<stdio.h>
// bu benim kafa bide 2 diziyi sýralayarak birleþtirme var;
int main()
{
	int m,n;
	printf("A dizisinin boyutunu giriniz : "); scanf("%d",&n);
    printf("B dizisinin boyutunu giriniz : "); scanf("%d",&m);
int a[n],b[m],c[m+n],gecici;
// ÖNCELÝKLE DÝZÝLERÝMÝZÝ ALIYORUZ
for(int i=0;i<n;i++)
{
     printf("A icin eleman gir : "); 	scanf("%d",&a[i]);
}
for(int j=0;j<m;j++)
{
     printf("B icin eleman gir : "); 	scanf("%d",&b[j]);
}
//YENÝ DÝZÝYE ATIYORUZ
for(int k=0;k<n;k++)
{
	c[k]=a[k];
}
int t=0;
for(int k=n;k<m+n;k++)
{
	c[k]=b[t];
	t++;
}
//O DÝZÝYÝ SIRALIYORUZ
for(int i=0;i<m+n;i++)
{
	for(int j=0;j<i;j++)
	{
		if(c[i]<c[j])
		{
			gecici=c[j];
			c[j]=c[i];
			c[i]=gecici;
		}
	}
}
//YAZDIRIYORUZ
for(int i=0;i<m+n;i++)
{
	printf("%d ",c[i]);
}

}
