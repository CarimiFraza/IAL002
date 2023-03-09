#include <iostream>
#include <stdio.h> 
//main() {
//    int A, B, C, D, DIF;
//    scanf ("%d", &A);
//    scanf ("%d", &B);
//    scanf ("%d", &C);
//    scanf ("%d", &D);
//    DIFERENCA = (A*B-C*D);
//    printf ("DIFERENCA = %d", DIFERENCA);
//}
 
int main() {
 
  int A, B, C, D, DIF;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	DIF = ((A*B)-(C*D));
    printf("DIFERENCA = %d\n", DIF);
 
return 0;
   
}
