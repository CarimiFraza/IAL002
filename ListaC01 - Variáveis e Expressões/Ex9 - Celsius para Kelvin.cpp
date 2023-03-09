//ler Celsius e exibir em Kelvin. Formula K = C + 273.15,

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

float C, K;

printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &C);

K = C + 273.15;
    
printf("A temperatura de %.2f C equivale a %.2f K", C, K);    
    
    return 0;
}
