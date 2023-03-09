//Leia Area em metros quadrados (m2) e converta para Acres. Formula: A = M * 0,000247

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M2, A;

	printf("Digite os Metros Quadrados (m2): ");
	scanf("%f", &M2);

	A = M2 * 0.000247;
    
	printf("A Area %.2f Metro(s) Quadrado(s) equivale a %.6f Acres", M2, A);    
    
    return 0;
}
