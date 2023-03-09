//Leia uma velocidade em M/s e converter para Km -> Fórmula: K = (M*3.6)

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M, K;

	printf("Digite a velocidade em M/s: ");
	scanf("%f", &M);

	K = (M*3.6);
    
	printf("A Velocidade %.4f Metros por Segundo (Ms) equivale a %.2f Quilometros por hora (KM)", M, K);    
    
    return 0;
}
