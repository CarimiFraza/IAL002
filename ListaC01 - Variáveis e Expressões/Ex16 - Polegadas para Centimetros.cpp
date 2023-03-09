//Leia Polegadas e converta para Centímetros -> Fórmula:C = P * 2,54

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float P, C;

	printf("Digite as Polegadas: ");
	scanf("%f", &P);

	C = P * 2.54;
    
	printf("%.2f Polegadas equivale a %.2f Cm", P, C);    
    
    return 0;
}
