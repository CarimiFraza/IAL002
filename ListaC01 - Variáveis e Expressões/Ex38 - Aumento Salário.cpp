//Leia o salario. Imprima o novo salario com aumento de 25%

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float S, A, T;

	printf("Digite o Salário: ");
	scanf("%f", &S);

	A = 25.00;	
	T = S + (S*(A/100));
    
	printf("O Salário de %.2f com aumento de %.2f % é %.2f", S, A, T); 
    
    return 0;
}
