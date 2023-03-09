#include <iostream>
#include <math.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int codfunc, codfunc2, rest1, rest2;
	float salatual, novosal, parunica, reaj, bonif, tempserv;
		
	// dados de entrada	
	printf ("Código Funcional: ");
	scanf("%d",&codfunc);
	printf ("Salário: ");
	scanf("%f", &salatual);
	printf ("Tempo: ");
	scanf("%f", &tempserv);
	
// processamento - reajuste
	if	(salatual <= 500 ) {
	reaj = salatual + (salatual*0.2);
	}
	else if	(salatual <= 1000) {
		reaj = salatual + (salatual*0.1);
	}
	else if	(salatual <= 1500) {
		reaj = salatual + (salatual*0.05);
	}
	else {
		reaj = salatual;
		printf ("Funcionário Sem Reajuste\n");
	}

// processamento - bonus

	if (tempserv < 1) printf ("Funcionário Sem Bônus\n");
	else if	(tempserv >= 1 && tempserv <= 3) bonif = 100;
	else if	(tempserv >= 4 && tempserv <= 6) bonif = 200;
	else if	(tempserv >= 7 && tempserv <= 9) bonif = 300;
	else bonif = 500;
	
// processamento - novo salário

	novosal = reaj + bonif;
	printf ("Novo Salário: %.2f\n", novosal);	

// processamento - codigo 2 ultimas casas

	codfunc2 = codfunc%1000%100;
	
// processamento - parcela unica

	if	(codfunc2 == 10) {
		parunica = 1500;
	}
	else if	(codfunc2 == 20) {
		parunica = 3000;
	}
	else parunica = 4000;
	printf ("Parcela Única: %.2f", parunica);
}

/* Descrição da Prova 
Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera: a) o salário atual b) o tempo de serviço.
Faça um programa que leia:
1) Código Funcional; 2) O valor do salário atual do funcionário;  3) O tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
Use as tabelas abaixo para calcular o nono salário (reajuste + bônus) deste funcionário e imprima o valor do novo salário, ou uma mensagem caso o funcionário não tenha direito a um reajuste ou bônus.

Salário Atual - Reajuste(%) - Tempo de Serviço - Bônus
0 à  500,00 (incluso) - 20% - Abaixo de 1 ano - Sem bônus
500,01 à 1000,00 (incluso) - 10% - De 1 a 3 anos - 100,00
1000,01 à 1500,00 (incluso) - 5% - De 4 a 6 anos - 200,00
Acima de 1500,00 - Sem reajuste - De 7 a 9 anos - 300,00
- - Mais de 9 anos - 500,00

De acordo com o código funcional que existe para diferenciar matriz e filiais, a empresa pagará mais uma parcela que será única a todos os funcionários e que virá a parte no recibo de pagamento.

Código Funcional - Pagamento único
Final xx10 - 1500,00
Final xx20 - 3000,00
Final xx30 - 4000,00
*/
