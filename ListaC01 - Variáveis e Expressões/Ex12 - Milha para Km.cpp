//Leia Milhas e converta para Km -> Fórmula: K = 1,61 * M
// Na verdade MIlha = 1.60934

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M, K;

	printf("Digite a velocidade em Milhas: ");
	scanf("%f", &M);

	K = (1.6*M);
    
	printf("A Velocidade %.2f em Milhas equivale a %.2f Km", M, K);    
    
    return 0;
}
