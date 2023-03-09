//A importancia de R$ 780.000,00 será dividida entre 3 ganhadores
// O primeiro ganhador recebera 46%;
// O segundo recebera 32%;
//O terceiro recebera o restante, LOGO 22%
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float G1, G2, G3, PREMIO, P1, P2, P3;

	//printf("PREMIO A SER DIVIDIDO: ");
	//scanf("%f", &PREMIO);
	
	PREMIO = 780000.00;
	
	G1 = 46.00;
	G2 = 32.00;
	G3 = ((100.00 - G1)-G2);
		
	P1 =  PREMIO * (G1/100);
	P2 =  PREMIO * (G2/100);
	P3 =  PREMIO * (G3/100);
    
	printf("Total de %.2f foi dividido em partes diferentes: \n %.f porcento (%) para o Ganhador 1, Total de %.2f \n %.f porcento (%) para o Ganhador 2, sendo %.2f \n %.f porcento (%) para o Ganhador 3, sendo %.2f", PREMIO, G1, P1, G2, P2, G3, P3);
    
    return 0;
}
