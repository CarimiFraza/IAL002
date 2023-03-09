//Leia um numero inteiro e imprima o seu antecessor e o seu sucessor

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int n, ant, suc;

	printf("Digite um número: ");
	scanf("%i", &n);

	ant = n - 1;
	suc = n + 1;
    
	printf("O antecessor de %i é igual a %i e o sucessor é igual a %i", n, ant, suc);
    
    return 0;
}
