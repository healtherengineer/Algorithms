#include<stdio.h>
// bu benim kafa bide 2 diziyi s�ralayarak birle�tirme var;
int main()
{
	int m,n;
	printf("A dizisinin boyutunu giriniz : "); scanf("%d",&n);
    printf("B dizisinin boyutunu giriniz : "); scanf("%d",&m);
int a[n],b[m],c[m+n],gecici;
// �NCEL�KLE D�Z�LER�M�Z� ALIYORUZ
for(int i=0;i<n;i++)
{
     printf("A icin eleman gir : "); 	scanf("%d",&a[i]);
}
for(int j=0;j<m;j++)
{
     printf("B icin eleman gir : "); 	scanf("%d",&b[j]);
}
//YEN� D�Z�YE ATIYORUZ
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
//O D�Z�Y� SIRALIYORUZ
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
