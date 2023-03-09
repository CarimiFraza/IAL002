//Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int seg;
	float hora, min;

	printf("Segundos: ");
	scanf("%i", &seg);
	
	min = (seg / 60.00);
	hora = (min / 60.00);
	
	printf("%i segundos(s) é igual a %.2f minuto(s) e %.2f hora(s)", seg, min, hora);
    
    return 0;
}
