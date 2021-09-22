#include<stdio.h>
int altalta(int x)
{
	if(x==0)
	{
		return 0;
	}
	else
	{
	     altalta(x-1);
			printf("%d\n",x);
	}
}

int main()
{
	int n;
	printf("n gir : "); scanf("%d",&n);
	altalta(n);
}
