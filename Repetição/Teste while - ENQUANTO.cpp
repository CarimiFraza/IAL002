#include <stdio.h>
int main(void)
{
  int contador = 1; //declarando e inicializando a vari�vel de controle
  
  while (contador <= 20) // Testando a condi��o
  {
    printf("%d \n", contador); //Executando um comando dentro do la�o
    
    contador++; //atualizando a vari�vel de controle
  }  
  
  return 0;
}
