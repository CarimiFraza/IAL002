#include <iostream>
main(){
 int numero, soma, impar;
 printf ("Digite um numero: ");
 scanf ("%d", &numero);
 soma = 0;
 impar = 1;
 while (soma < numero){   // V V  V  F
   soma = soma + impar;
   impar = impar + 2;
 } 

 if (soma == numero) {
           printf ("O numero %d e quadrado perfeito", numero);
 }
 else {
           printf ("O numero %d nao e quadrado perfeito", numero);
 } 
}
// TESTE(variáveis do programa)
//  numero   soma  impar
//    9        0     1 
//             1     3
//             4     5
//             9     7

//Tela
//O numero 9 e quadrado perfeito
