//Leia Acres e converta para Area em metros quadrados (m2). Formula: M = A * 4048.58

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float A, M2;

	printf("Digite os Acres: ");
	scanf("%f", &A);

	M2 = A * 4048.58;
    
	printf("A Area %.2f Acres equivale a %.2f Metros Quadrado (m2)", A, M2);    
    
    return 0;
}
