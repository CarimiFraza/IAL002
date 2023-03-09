//Leia Angulo em Radianos e converta para Graus -> Fórmula: G = R * 180/p, sendo G o angulo em graus e ˆ R em radianos e p = 3.14

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float G, R;

	printf("Digite o Angulo em Radianos: ");
	scanf("%f", &R);

	G = R * (180/M_PI);
    
	printf("O Angulo %.4f em Radianos equivale a %.4f Graus", R, G);    
    
    return 0;
}
