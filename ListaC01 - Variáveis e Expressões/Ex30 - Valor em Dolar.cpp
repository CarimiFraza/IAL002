//Leia quatro notas, calcule a media aritmetica e imprima o resultado

#include <iostream>
#include <string.h>
#include <math.h>
#include <iostream>
#include <locale.h>


int main(){
	
	float V, D, T;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite o valor: ");
	scanf("%f", &V);

	printf("Digite a cotacao do dolar: ");
	scanf("%f", &D);

	T = (V * D);
    
	printf("Valor em Dólar é %.2f", T);
    
    return 0;
}
