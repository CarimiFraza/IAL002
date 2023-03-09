//Entrada: 3 valores com um dígito após o ponto decimal (dupla precisão: A, B e C)
//Saida1 - área do triângulo retângulo que tem A por base e C por altura.
//Saida2 - a área do círculo de raio C. (pi = 3.14159)
//Saida3 - a área do trapézio que tem A e B por bases e C por altura.
//Saida4 - a área do quadrado que tem lado B.
//Saida5 - a área do retângulo que tem lados A e B.
//3 dígitos após o ponto decimal

#include <iostream>

int main(){

	double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

	scanf("%lf %lf %lf",&A,&B,&C);
	
	TRIANGULO = A*C/2;
	CIRCULO = 3.14159*C*C;
	TRAPEZIO = (A+B)*C/2;
	QUADRADO = B*B;
	RETANGULO = A*B;
	    
	printf("TRIANGULO: %.3f\n", TRIANGULO);
	printf("CIRCULO: %.3f\n", CIRCULO);
	printf("TRAPEZIO: %.3f\n", TRAPEZIO);
	printf("QUADRADO: %.3f\n", QUADRADO);
	printf("RETANGULO: %.3f\n", RETANGULO);

    return 0;
}
