#include <iostream>
main() {
 int c1, c2, ano;
 ano = 2021;
 printf ("Habitantes cidade 1: ");
 scanf ("%d",&c1);
 printf ("Habitantes cidade 2: ");
 scanf ("%d",&c2);
   
while (c1 <= c2){  // V V V V  V  V  V F
    c1 = c1 + 15;
    c2 = c2 + 10;
    ano= ano + 1;
 } 
 printf ("Ano : %d",ano);
}

// teste (variáveis do programa)
// c1   c2   ano
// 100  130     2021
// 115  140     2022
// 130  150     2023
// 145  160     2024
// 160  170     2025
// 175  180     2026
// 190  190     2027   
// 205  200     2028

// Tela : Ano 2028
