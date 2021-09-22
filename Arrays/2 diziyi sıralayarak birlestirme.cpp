#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// boyutlari farklý "SIRALI" iki diziyi birleþtirme
int main()
{
	int n,m,k=0;
	printf("A dizisinin boyutu (n) : "); scanf("%d",&n);
	printf("B dizisinin boyutu (m) : "); scanf("%d",&m);	
	int a[n],b[m],c[m+n];
	for(int i=0;i<n;i++)
	{
		printf("A nin elemani (%d) : ",i); scanf("%d",&a[i]);
	}
	for(int j=0;j<m;j++)
	{
			printf("B nin elemani (%d) : ",j); scanf("%d",&b[j]);
	}
	int i=0;
	int j=0;
	while(i<=n && j<=m)
	{
	
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
		}
		else
		{
			c[k]=b[j];
			j++;
		}
		  k++;
	}
	while(i<=n)
	{
		k++;
		i++;
		c[k]=a[i];
	
	}
	while(j<=m)
	{
     	k++;
     	j++;
		c[k]=b[j];	
		
	}

	for(int k=0;k<(m+n);k++)
	{
		printf("%d ",c[k]);
	}

	
}
