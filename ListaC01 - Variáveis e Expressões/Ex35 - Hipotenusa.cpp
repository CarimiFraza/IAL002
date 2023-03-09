//hipotenusa = raiz de a^2 + b^2

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float A, B, H;

	printf("Digite o valor de A: ");
	scanf("%f", &A);

	printf("Digite o valor de B: ");
	scanf("%f", &B);

	H = pow((pow (A,2))+ (pow(B,2)), 0.5);
    
	printf("Se A é igual a %.2f e B é igual a %.2f, Hipotenusa é %.4f", A, B, H);    
    
    return 0;
}
