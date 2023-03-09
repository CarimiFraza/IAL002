//Leia Polegadas e converta para Centímetros -> Fórmula: P = C/ 2,54

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float C, P;

	printf("Digite os Centimetros: ");
	scanf("%f", &C);

	P = C/ 2.54;
    
	printf("%.2f Centimetros equivale a %.2f Polegadas", C, P);    
    
    return 0;
}
