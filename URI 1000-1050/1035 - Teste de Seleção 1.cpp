// Entrada: Quatro n�meros inteiros A, B, C e D.
//Se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos
//e se a vari�vel A for par escrever a mensagem "Valores aceitos", sen�o escrever "Valores nao aceitos".
//Sa�da - Mostre a respectiva mensagem ap�s a valida��o dos valores.

#include <iostream>
#include <stdio.h>

int main()
{
 int A, B, C, D;

 scanf("%d %d %d %d", &A, &B, &C, &D);

 if (B > C && D > A && C+D > A+B && C > 0 && D > 0 && A%2 == 0)
 {
  printf("Valores aceitos\n");
 }
 else
 {
  printf("Valores nao aceitos\n");
 }

 return 0;
}
