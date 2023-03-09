// A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
// Entrada -> Valor de ponto flutuante (dupla precisão), correspondente ao raio da esfera.
//Saída -> "VOLUME" com um espaço antes e um espaço depois da igualdade. O valor deverá ser apresentado com 3 casas após o ponto.

#include<iostream>


int main() {
	double raio, volume;
	scanf("%lf",&raio);
	volume = (4/3.0)*3.14159*(raio*raio*raio);
	printf("VOLUME = %.3f\n",volume);
return 0;

}
