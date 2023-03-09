//ler Celsius e exibir Fahrenheit. Formula F = C*(9.0/5.0)+32.0

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

float C, F;

printf("Digite a temperatura em graus Celsius: ");
scanf("%f", &C);

F = C*(9.0/5.0)+32.0;    
    
printf("A temperatura de %.2f C equivale a %.2f F", C, F);    
    
    return 0;
}
