#include <iostream>
main()
{
  int x , y, aux;
  printf ("Entre com um Numero: ");
  scanf ("%d",&x);
  printf ("Entre com outro Numero: ");
  scanf ("%d",&y);
  while (x != y)  {
     if (x > y) 
       x = x - y;
     else 
       { aux = x;
         x = y;
         y = aux;
       }  
 }   
 printf ( "MDC: %d ", x);
}
// Teste
//  x     y    aux
//  20   16
