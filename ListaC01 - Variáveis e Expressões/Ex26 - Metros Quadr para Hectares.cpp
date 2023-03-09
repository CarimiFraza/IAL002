//Leia valor de area em metros quadrados (m2) e converta para hectares. Formula: H = M * 0, 0001

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M, H;

	printf("Digite os Metro(s) Quadrado(s): ");
	scanf("%f", &M);

	H = M * 0.0001;
    
	printf("A Area %.2f Metro(s) Quadrado(s) (m2) equivale a %.4f Hectares", M, H);    
    
    return 0;
}
