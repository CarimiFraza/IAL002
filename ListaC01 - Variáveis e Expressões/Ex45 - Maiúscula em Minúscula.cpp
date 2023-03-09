//LETRA MAIUSCULA PARA MINUSCULA

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf ("Digite uma letra maiúscula : ");
	scanf ("%c", &letra);
	
	letra = letra+32;
	
	printf ("Letra minúscula: %c", letra);	
	    
    return 0;
}
