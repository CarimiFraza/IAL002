//Cilindro Cirgular - Leia Altura e Raio. Imprima Volume. Formula: V = pi * raio^2 * altura

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float R, A, V;

	printf("Digite o Raio do C�rculo: ");
	scanf("%f", &R);

	printf("Digite a Altura do C�rculo: ");
	scanf("%f", &A);

	V = (M_PI * (pow(R,2)))*A;
    
	printf("Se o Raio de um c�rculo � %.2f e a Altura � %.2f, o Volume � igual a %.2f", R, A, V);    
    
    return 0;
}
