//Leia o valor do raio de um circulo e imprima a area do circulo. Formula: A = p * raio2

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float R, A;

	printf("Digite o Raio do C�rculo: ");
	scanf("%f", &R);

	A = M_PI * (pow (R,2));
    
	printf("Se o Raio de um c�rculo � %.2f, a �rea desse c�rculo � %.2f", R, A);    
    
    return 0;
}
