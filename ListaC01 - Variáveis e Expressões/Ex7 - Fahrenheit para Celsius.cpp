//ler Fahrenheit e exibir em Celsius. Formula C = 5.0*(F - 32.0)/9.0

#include <iostream>
#include <string.h>
#include <math.h>

int main(){

float F, C;

printf("Digite a temperatura em graus Fahrenheit: ");
scanf("%f", &F);

C = 5.0*(F - 32.0)/9.0;
    
printf("A temperatura de %.2f F equivale a %.2f C", F, C);    
    
    return 0;
}
