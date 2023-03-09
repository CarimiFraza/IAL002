//Ler Total e mostrar:
//Total a pagar com desconto de 10%;
//Valor de cada parcela, no parcelamento de 3× sem juros;
///Comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
// Comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total);

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor, desc, parc3, com3, com5;

	printf("Qual o Valor? ");
	scanf("%f", &valor);
	
	desc = valor - (valor * (10.00/100.00));
	parc3 = valor / 3;
	com3 = valor * (3.00/100.00);
	com5 = valor * (5.00/100.00);
			
 	printf("Valor a vista, aplicado 10 porcento (%) de desconto é de %.2f \nParcelando em 3x parcelas no valor de %.2f \nComissão de 3 porcento (%) ref compras a vista é de %.2f \nComissão de 5 porcento (%) ref compras parceladas é de %.2f", desc, parc3, com3, com5);
    
    return 0;
}
