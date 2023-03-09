#include <stdio.h>

main (){
	double A, B, C, nummaior, nummenor, nummeio;
	scanf("%lf %lf %lf", &A, &B, &C);

	if (A >= B && A >= C){
		nummaior = A;
		nummeio = B;
		nummenor = C;
	}
	if (B >= A && B >= C){
		nummaior = B;
		nummeio = A;
		nummenor = C;
	}
	else{
		nummaior = C;
		nummeio = A;
		nummenor = B;
	}
	if (nummaior >= nummeio + nummenor){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
	if ( (nummaior*nummaior) == (meio*meio) + (menor*menor)){
		printf("TRIANGULO RETANGULO\n");
	}
	if ((maior*maior) > (meio*meio) + (menor*menor)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if ((maior*maior) < (meio*meio) + (menor*menor)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if (maior == meio && maior == menor){
		printf("TRIANGULO EQUILATERO\n");
	}
	if (maior == meio && maior != menor && menor != meio){
		printf("TRIANGULO ISOSCELES\n");
	}
	if (meio == menor && maior != meio && maior != menor){
		printf("TRIANGULO ISOSCELES\n");
	}
	if (maior == menor && menor != meio && maior != meio){
		printf("TRIANGULO ISOSCELES\n");
	}
}
}
