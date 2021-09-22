#include<stdio.h> 
int main()
{
	int n;
	printf("Matrisinizin boyutunu girin lutfen : "); scanf("%d",&n);
 	int matris[n][n];
 	int b[n],a=0;
 		for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 		printf("Matris degeri giriniz [%d][%d] : ",i,j); scanf("%d",&matris[i][j]);
		 }
	 }
 	
 	
 	
 	
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			if(i==j)
 			{
 				b[a]=matris[i][j];
 				a++;
			 }
		 }
	 }
	 
	 printf("\n");
	 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 		printf("%d ",matris[i][j]);
		 }
		 printf("\n");
	 }
int gecici=0;
 	// aldýðýn diagonel deðerlerini b dizisinde gecici kullanarak yer deðiþtiriyorsun
for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			if(b[i]<b[j])
 			{
 				gecici=b[i];
 				b[i]=b[j];
 				b[j]=gecici;
			 }
		 }
	 }
	 
	 a=0;
 		for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			if(i==j)
 			{
 				matris[i][j]=b[a];
 				a++;
			 }
		 }
	 }
printf("\nYeni Matris ;\n");

	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 		printf("%d ",matris[i][j]);
		 }
		 printf("\n");
	 }




 }
