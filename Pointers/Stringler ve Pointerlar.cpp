#include<stdio.h>
#include<string.h>
int benimstrlen(char karakter[])
{
	int i=0;
	while(karakter[i]!='\0')
	{
		i++;
	}
	
	return i;
	
}


//pointer strlenght
int pointerstrlen(char *karakter)
{
	int i=0;
	while(karakter[i]!='\0')
	{
		i++;
	}
	
	return i;
	
}

int main()
{
	
	char yazi[]="Fenerbahce";
	
	char *ptr=yazi; // yazi karakter dizisinin ilk adresi atandi 
	
	printf("%s",yazi); //c�kt� Fenerbahce
	printf("\n%s",ptr); // c�kt� yine Fenerbahce
	// AMAAAA EGER
	printf("\n%s",ptr+1); // yaparsan c�kt� enerbahce olur 
	                // cunku ptr+1 . kutucugun adresini alir
	
	
	printf("\nGirilen yazi %d boyutlu bir char karakter dizisidir.",benimstrlen(yazi));
	//29 . line daki gibi bir dizi yolluyormu�cas�na yapabiliriz amaaaaa
	// pointer yard�m�yla yapmak istersek
	printf("\nGirilen yazi %d boyutlu bir char karakter dizisidir.",pointerstrlen(ptr));
	//yapar�z vee fonksiyonun i�ine bir pointer g�nderdi�imizi s�yleriz
	
}
