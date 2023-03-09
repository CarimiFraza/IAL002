//Volume em metros cubicos m3 e apresente litros. Formula: L = 1000 * M, sendo L o volume em litros e M o volume em metros cubicos

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float L, M3;

	printf("Digite os Litros: ");
	scanf("%f", &L);

	M3 = L / 1000;
    
	printf("O Volume %.2f Litro(s) equivale a %.2f Metro(s) Cubico(s)", L, M3);    
    
    return 0;
}
