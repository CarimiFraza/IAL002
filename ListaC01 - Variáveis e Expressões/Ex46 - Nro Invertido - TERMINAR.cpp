//Leia um numero inteiro positivo de 3 dígitos (de 100 a 999) e gere outro numero formado pelos dígitos invertidos do numero lido. Leia 123 e saia 321.

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, numinv, dezena, centena, unidade;

	printf("Digite um número de 3 dígito: ");
	scanf("%i", &num);

	centena = num / 100;
	dezena = num % 100 / 10;
    unidade = num % 100 % 1;
    numinv = centena + dezena*10 + unidade*100;
    
	printf("O invertido é: %i", numinv);    
    
    return 0;
}
