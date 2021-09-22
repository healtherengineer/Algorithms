#include<stdio.h>
void subarray(int a[],int start,int end)
{
	if(a[3]==end)
	{
		return;
	}
	else if(start>end)
	{
		subarray(a,0,end+1);
	}
	else
	{
		printf("[");
		for(int i=start;i<end;i++)
		{
			printf("%d,",a[i]);
		}
		printf("]");
	    subarray(a,start+1,end);
		
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	subarray(arr,0,0);
}
