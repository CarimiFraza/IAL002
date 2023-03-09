//Leia um numero real e imprima o resultado do quadrado desse numero
//#include <string.h>

#include <iostream>
#include <math.h> 

main (){
	
	float numero, quadrado;
	
	//entrada
	printf ("Digite um numero real: ");
	scanf ("%f", &numero);
	
	//procesamento
	quadrado = pow(numero,2);
	
	//saida
	printf ("O quadrado de %.2f equivale a: %.2f", numero, quadrado);
	
}
