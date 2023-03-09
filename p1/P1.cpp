#include <iostream>
#include <math.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	
	int codfunc, codfunc2, rest1, rest2;
	float salatual, novosal, parunica, reaj, bonif, tempserv;
		
	// dados de entrada	
	printf ("C�digo Funcional: ");
	scanf("%d",&codfunc);
	printf ("Sal�rio: ");
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
		printf ("Funcion�rio Sem Reajuste\n");
	}

// processamento - bonus

	if (tempserv < 1) printf ("Funcion�rio Sem B�nus\n");
	else if	(tempserv >= 1 && tempserv <= 3) bonif = 100;
	else if	(tempserv >= 4 && tempserv <= 6) bonif = 200;
	else if	(tempserv >= 7 && tempserv <= 9) bonif = 300;
	else bonif = 500;
	
// processamento - novo sal�rio

	novosal = reaj + bonif;
	printf ("Novo Sal�rio: %.2f\n", novosal);	

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
	printf ("Parcela �nica: %.2f", parunica);
}


