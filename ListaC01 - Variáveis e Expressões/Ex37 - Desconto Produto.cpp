//Leia o valor de um produto e imprima o valor com desconto de 12%

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float P, D, T;

	printf("Digite o Valor do Produtos: ");
	scanf("%f", &P);

	D = 12.00;	
	T = P - (P*(D/100));
    
	printf("Produto que custa %.2f com desconto de %.2f % é fica num Total de %.2f", P, D, T);    
    
    return 0;
}
