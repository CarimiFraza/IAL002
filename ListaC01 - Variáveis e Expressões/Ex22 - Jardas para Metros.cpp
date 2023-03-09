//Leia Jardas e apresente Metros. Formula: M = 0, 91 * J.

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float J, M;

	printf("Digite as Jardas: ");
	scanf("%f", &J);

	M = 0.91*J;
    
	printf("O Comprimento %.2f Jardas equivale a %.2f Metros", J, M);    
    
    return 0;
}
