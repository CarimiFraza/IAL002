// A f�rmula para calcular o volume �: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
// Entrada -> Valor de ponto flutuante (dupla precis�o), correspondente ao raio da esfera.
//Sa�da -> "VOLUME" com um espa�o antes e um espa�o depois da igualdade. O valor dever� ser apresentado com 3 casas ap�s o ponto.

#include<iostream>


int main() {
	double raio, volume;
	scanf("%lf",&raio);
	volume = (4/3.0)*3.14159*(raio*raio*raio);
	printf("VOLUME = %.3f\n",volume);
return 0;

}
