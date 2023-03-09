//Leia valor de area em hectares e converta para metros quadrados (m2). Formula: M = H * 10000

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float H, M;

	printf("Digite os Hectares: ");
	scanf("%f", &H);

	M = H * 10000;
    
	printf("A Area %.2f Hectares equivale a %.2f Metro(s) Quadrado(s) (m2)", H, 
	M);    
    
    return 0;
}
