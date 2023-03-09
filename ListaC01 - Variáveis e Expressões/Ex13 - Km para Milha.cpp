//Leia Km e converta para Milhas -> Fórmula: M = K / 1,61
// Na verdade Milha = 1.60934

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float K, M;

	printf("Digite a velocidade em Km: ");
	scanf("%f", &K);

	M = K /1.61;
    
	printf("A Velocidade %.2f em Km equivale a %.2f Milhas", K, M);    
    
    return 0;
}
