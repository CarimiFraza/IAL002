#include <iostream>
main()
{
    int n;
    printf ("Digite um Numero: ");
    scanf ("%d",&n); 
    while ( n != 1){  // V V V V V V V V V F
	  if (n % 2 == 0) // par!!!
	       n = n / 2;
	  else
	       n = 3*n + 1;
	  printf ("%d ",n);
	}
 }

//Teste    Tela=> 40, 20, 10 , 5, 16, 8, 4, 2, 1
//  n
//  13     16   
//  40      8
//  20      4
//  10      2 
//   5      1

