//Entrada: 3 valores com um d�gito ap�s o ponto decimal (dupla precis�o: A, B e C)
//Saida1 - �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
//Saida2 - a �rea do c�rculo de raio C. (pi = 3.14159)
//Saida3 - a �rea do trap�zio que tem A e B por bases e C por altura.
//Saida4 - a �rea do quadrado que tem lado B.
//Saida5 - a �rea do ret�ngulo que tem lados A e B.
//3 d�gitos ap�s o ponto decimal

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
