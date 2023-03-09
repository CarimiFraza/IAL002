//Encanador a R$ 30,00 por dia. Programa pedir: nro dias trabalhados. Imprimir quantia liquida a ser paga, sabendo que desconta 8% IR.

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Dias;
	float Diaria, Desconto, Pagar;

	printf("Quantos dias foram trabalhados? ");
	scanf("%i", &Dias);
	
	Diaria = 30.00;
	Desconto = 8.00;
	
	Pagar = ((Diaria * Dias) - ((Diaria * Dias)*(Desconto/100)));
	
 	printf("Sabendo que a diária do Encanador é de %.2f, o valor a ser pago é de %.2f", Diaria, Pagar);
    
    return 0;
}
