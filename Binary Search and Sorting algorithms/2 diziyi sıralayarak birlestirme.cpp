#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,k=0;
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
	int i,j;
	while(i<=n && j<=m)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
		}
		else
		{
			c[k]=a[i];
			i++;
		}
	k++;
	}
	while(i<=n)
	{
		k++;
		c[k]=a[i];
		i++;
	}
	while(j<=m)
	{
		k++;
		c[k]=b[j];
		j++;
	}
	
	for(int k=0;k<(m+n)-1;k++)
	{
		printf("%d ",c[k]);
	}
	
	
	
	
}
