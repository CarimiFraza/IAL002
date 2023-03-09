//Libras convertido para Quilogramas. Fórmula: K = L* 0, 45.

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float L, K;

	printf("Digite as Libras: ");
	scanf("%f", &L);

	K = L*0.45;
    
	printf("A Massa de %.2f Libras equivale a %.2f Quilogramas (Kg)", L, K);    
    
    return 0;
}
