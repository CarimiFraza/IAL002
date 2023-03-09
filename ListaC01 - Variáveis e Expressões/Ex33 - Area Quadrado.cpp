//Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	float lado, area;

	printf("Digite o lado do quadrado: ");
	scanf("%f", &lado);

	area = lado * lado;
    
	printf("A Area do quadrado é %.2f", area);
    
    return 0;
}
