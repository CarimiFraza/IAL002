//Consumo médio de um automóvel: distância total percorrida (em Km) x total de combustível gasto (em litros)
// Entrada: 2 valores - um valor inteiro X representando a distância total percorrida (em Km)
//um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal
// Saída: Consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".

#include <iostream>

int main() {
    int X;
    float Y, consumo;
  
    scanf("%i %f", &X, &Y);
    
	consumo = X/Y;
	printf("%.3f km/l\n",consumo);

return 0;
}
