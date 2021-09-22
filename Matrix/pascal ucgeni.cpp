#include<stdio.h>
int main()
{
	int satir;
printf("satir sayisini giriniz : "); scanf("%d",&satir);
int sutun=(satir*2);
	int pascal[satir][sutun];
	int mid=(sutun)/2;
	for(int i=0;i<satir;i++)
	{
		for(int j=0;j<sutun+1;j++)
		{
			pascal[i][j]=0;
		}
	}
	pascal[0][mid]=1;
	//pascal[1][mid-1]=1;
	//pascal[1][mid+1]=1;
	
		for(int i=1;i<satir;i++)
	{
		for(int j=1;j<(sutun);j++)
		{
			
			pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j+1]; // bu doğru
			
		}
	}
	
 printf("\n\n\n");
	
		for(int i=0;i<satir;i++)
	{
		for(int j=0;j<sutun;j++)
		{if(pascal[i][j]==0)
		{
			printf(" ");
		}
		else
		{
				printf("%d ",pascal[i][j]);
			}	
		
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
