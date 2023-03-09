//Volume em metros cubicos m3 e apresente litros. Formula: L = 1000 * M, sendo L o volume em litros e M o volume em metros cubicos

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

	float M3, L;

	printf("Digite os Metros Cubicos (m3): ");
	scanf("%f", &M3);

	L = 1000 * M3;
    
	printf("O Volume %.2f Metros Cubicos (m3) equivale a %.2f Litros", M3, L);    
    
    return 0;
}
