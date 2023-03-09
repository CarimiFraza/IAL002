//Quilogramas convertido para libras. Fórmula: L = K/0,45, sendo K a massa em quilogramas e L a massa em libras.

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float K, L;

	printf("Digite os Quilogramas (Kg): ");
	scanf("%f", &K);

	L = K/0.45;
    
	printf("A Massa de %.2f Quilogramas (Kg) equivale a %.2f Libras", K, L);    
    
    return 0;
}
