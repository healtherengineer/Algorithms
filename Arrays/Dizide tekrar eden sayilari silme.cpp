#include<stdio.h>
int main()
{
	int n;
	printf("Dizinizin boyutunu giriniz : "); scanf("%d",&n);
	int a[n],c=0,s,y[n];
	//elemanlarý almýþým
	
	for(int i=0;i<n;i++)
	{
		printf("Eleman giriniz : "); scanf("%d",&a[i]);
	}
	
	int m=0;
		for(int i=0;i<n;i++)
	{
      for (int j=0;j<n;j++)
      {
      	if(a[i]==a[j])
      	{
      		c=c+1;
      		if(c>1)
      		{ 	/*s=s+c;
      		for(int k=i;k<n;k++)
      			{
      				a[k]=a[k+1];
				  }
				  n=n-1;// bu çok önemli
			  }*/
			  y[m]=a[i]; // tekrar eden sayilari dizide tutmuþum.
			  m++;
		  }
	  }
	  
	}
	c=0;
}
	printf("\n");
	
	for(int l=0;l<m;l++) // tekrar eden sayýlar silineceði için yeni dizinin boyutu kadar dönecek 
	{
		for(int i=0;i<n;i++)
		{
			if(y[l]==a[i])
			{
				for(int k=i;k<n;k++)
      			{
      				a[k]=a[k+1];
				  }
				  n=n-1;
			}
		}
	}
	for(int t=0;t<n;t++)
	{
		printf("%d ",a[t]);
	}








}
