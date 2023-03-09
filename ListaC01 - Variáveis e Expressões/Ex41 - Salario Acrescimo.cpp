//Leia o valor da hora de trabalho e numero de horas trabalhadas no mês. Imprima o valor a ser pago, adicionando 10% sobre o valor calculado.

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float Vhora, Hora, Acresc, Salario;

	printf("Qual valor da hora de trabalho? ");
	scanf("%f", &Vhora);

	printf("Quantas horas foram trabalhadas no mês? ");
	scanf("%f", &Hora);
	
	Acresc = 10.00;
	
	Salario = ((Vhora * Hora) + ((Vhora * Hora)*(Acresc/100)));
	
 	printf("Valor da hora sendo de %.2f Reais e Trabalhadas %.2f Horas, Valor a ser pago, com acréscimo de %.2f porcento(%) é de %.2f Reais", Vhora, Hora, Acresc, Salario);
    
    return 0;
}
