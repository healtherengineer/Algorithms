#include<stdio.h>
int main(){
	int sayi[]={1,3,5,6,2};
	int *p=sayi;
	printf("%u\n",*p);
		printf("%u\n",*(p+1));
			printf("%u\n",*(p+2));
				printf("%u\n",*(p+3));
					printf("%u\n",*(p+4));
	//*(p+1)------> p[1]; ikisi ayný þeydir.					
					printf("\n\n\n");
	printf("%u\n",p[0]);
		printf("%u\n",p[1]);
			printf("%u\n",p[2]);
				printf("%u\n",p[3]);
					printf("%u\n",p[4]);
					
					
					
					
					
					
					
					
					
					
					
					
					
}
