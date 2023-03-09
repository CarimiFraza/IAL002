//Cilindro Cirgular - Leia Altura e Raio. Imprima Volume. Formula: V = pi * raio^2 * altura

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float R, A, V;

	printf("Digite o Raio do Círculo: ");
	scanf("%f", &R);

	printf("Digite a Altura do Círculo: ");
	scanf("%f", &A);

	V = (M_PI * (pow(R,2)))*A;
    
	printf("Se o Raio de um círculo é %.2f e a Altura é %.2f, o Volume é igual a %.2f", R, A, V);    
    
    return 0;
}
