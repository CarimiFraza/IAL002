//Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.


#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int n, soma;

	printf("Digite um número: ");
	scanf("%i", &n);

	soma = (n*3)+1 + (n*2)-1;
    
	printf("A soma do sucessor de seu triplo com o antecessor de seu dobro é %i", soma);
    
    return 0;
}
