//Leia quatro notas, calcule a media aritmetica e imprima o resultado

#include <iostream>
#include <string.h>
#include <math.h>
#include <iostream>
#include <locale.h>


int main(){
	
	float n1, n2, n3, n4, media;
	
	setlocale(LC_ALL, "Portuguese");

	printf("Digite a primeiro nota: ");
	scanf("%f", &n1);

	printf("Digite a segunda nota: ");
	scanf("%f", &n2);

	printf("Digite a terceira nota: ");
	scanf("%f", &n3);

	printf("Digite a quarta nota: ");
	scanf("%f", &n4);

	media = (n1+n2+n3+n4)/4;
    
	printf("A media das notas é %.2f", media);
    
    return 0;
}
