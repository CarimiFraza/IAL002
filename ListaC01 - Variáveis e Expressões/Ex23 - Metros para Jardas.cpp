//Leia Metros e apresente Jardas. Formula: J = M / 0, 91.

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M, J;

	printf("Digite os Metros: ");
	scanf("%f", &M);

	J = M/0.91;
    
	printf("O Comprimento %.2f Metros equivale a %.2f Jardas", M, J);    
    
    return 0;
}
