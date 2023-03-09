#include <stdio.h>

int main (){
	int tempo, final, contador = 0;
	scanf("%d %d", &tempo, &final);
	do{
  		contador++;
  		tempo++;
	if (tempo == 24) tempo = 0;
 	}
 	while(tempo != final);

printf("O JOGO DUROU %d HORA(S)\n", contador);
}
