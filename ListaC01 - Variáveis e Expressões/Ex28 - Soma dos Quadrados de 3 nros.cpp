//Fac¸a a leitura de tres valores e apresente como resultado a soma dos quadrados dos tres valores lidos

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float n1, n2, n3, S;

	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);

	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	
	S = (pow(n1,2)+ pow(n2,2) + pow (n3,2));
    
	printf("O quadrado dos numeros somadas equivale a %.2f", S);
    
    return 0;
}
