//Receba o salario-base de um funcionario. Imprima Salario com gratifica��o de 5% sobre o salario-base mas paga 7% de imposto sobre o salario-base. 

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float SB, GR, IR, TG, TI, S;

	printf("Qual o Sal�rio Base? ");
	scanf("%f", &SB);
	
	GR = 5.00;
	IR = 7;00;
	
	TG = (SB*(GR/100));
	TI =  (SB*(IR/100));
	S = (SB + TG) - TI;
		
 	printf("Salario Base � de %.2f \nGratifica��o � de %.2f porcento (%), sendo de %.2f \nImposto � de %.2f porcento (%), sendo de %.2f \nSalario ser� de %.2f", SB, GR, TG, IR, TI, S);
    
    return 0;
}
