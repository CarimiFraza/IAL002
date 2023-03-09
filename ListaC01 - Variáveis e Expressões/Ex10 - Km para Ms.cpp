//Leia uma velocidade em km/h e converter para m/s -> Fórmula: M = K/3.6

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M, K;

	printf("Digite a velocidade em K/h: ");
	scanf("%f", &K);

	M = (K/3.6);
    
	printf("A Velocidade %.2f Quilometros por hora (KM) equivale a %.4f Metros por Segundo (Ms)", K, M);    
    
    return 0;
}
