//hipotenusa = raiz de a^2 + b^2

#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float AD, A, D;

	printf("Digite a Altura do Degrau em Cent�metros: ");
	scanf("%f", &AD);

	printf("Digite a Altura a ser alcan�ada: ");
	scanf("%f", &A);

	D = (A/AD);
    
	printf("Deve subir %.f Degrau(s)", D);    
    
    return 0;
}
