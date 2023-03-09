//Leia Angulo em Graus e converta para Radianos -> Fórmula: R = G * p/180, sendo G o angulo em graus e R em radianos e p = 3.14

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float G, R;

	printf("Digite o Angulo em Grau: ");
	scanf("%f", &G);

	R = G * (M_PI/180);
    
	printf("O Angulo %.4f em Grau equivale a %.4f Radianos", G, R);    
    
    return 0;
}
