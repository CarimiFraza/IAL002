//Consumo m�dio de um autom�vel: dist�ncia total percorrida (em Km) x total de combust�vel gasto (em litros)
// Entrada: 2 valores - um valor inteiro X representando a dist�ncia total percorrida (em Km)
//um valor real Y representando o total de combust�vel gasto, com um d�gito ap�s o ponto decimal
// Sa�da: Consumo m�dio do autom�vel com 3 casas ap�s a v�rgula, seguido da mensagem "km/l".

#include <iostream>

int main() {
    int X;
    float Y, consumo;
  
    scanf("%i %f", &X, &Y);
    
	consumo = X/Y;
	printf("%.3f km/l\n",consumo);

return 0;
}
