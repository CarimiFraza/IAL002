//Leia o valor do raio de um circulo e imprima a area do circulo. Formula: A = p * raio2

#include <iostream>
#include <string.h>
#include <math.h>

int main(){
	double area, n, raio;
	n =  3.14159;
	scanf("%lf", &raio);
	area = n*pow(raio,2);
	printf ("A=%.4lf\n", area);
	
    return 0;
}
