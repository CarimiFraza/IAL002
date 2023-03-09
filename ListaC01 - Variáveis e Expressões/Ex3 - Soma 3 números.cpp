//Peça ao usuario para digitar tres valores inteiros e imprima a soma deles
//#include <string.h>
//#include <math.h> 

#include <iostream>

main (){
	
	int n1, n2, n3,soma;
	
	//entrada
	printf ("Digite o primeiro numero inteiro: ");
	scanf ("%i", &n1);
	printf ("Digite o segundo numero inteiro: ");
	scanf ("%i", &n2);
	printf ("Digite o terceiro numero inteiro: ");
	scanf ("%i", &n3);
	
	//procesamento
	soma = n1+n2+n3;
	
	//saida
	printf ("Os numeros %i, %i e %i somados equivalem a: %i", n1, n2, n3, soma);
	
}
