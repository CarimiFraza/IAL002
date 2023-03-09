//ler Kelvin e exibir em Celsius. Formula C = K - 273.15

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

float K, C;

printf("Digite a temperatura em graus Kelvin: ");
scanf("%f", &K);

C = K - 273.15;
    
printf("A temperatura de %.2f K equivale a %.2f C", K, C);    
    
    return 0;
}
