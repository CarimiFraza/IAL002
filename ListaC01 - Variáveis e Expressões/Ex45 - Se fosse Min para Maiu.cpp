//LETRA MAIUSCULA PARA MINUSCULA

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	char letra [20];
	
	printf ("Digite uma letra min�scula : ");
	scanf ("%c", &letra);
	
	//letra = letra-32;
	strlwr(letra);
	
	printf ("Letra mai�scula: %c", letra);	
	    
    return 0;
}
