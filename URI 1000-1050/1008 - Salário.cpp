//leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora
//Calcule o sal�rio desse funcion�rio. Mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.
//Entrada 2 n�meros inteiros e 1 n�mero com duas casas decimais

#include <iostream>

main () {
int FUNCIONARIO, HORAS;
double SALARIOH, SALARIOF;

scanf("%d",&FUNCIONARIO);
scanf("%d",&HORAS);
scanf("%lf",&SALARIOH);

SALARIOF=(HORAS*SALARIOH);

printf("NUMBER = %d\n", FUNCIONARIO);
printf("SALARY = U$ %.2lf\n", SALARIOF);
}
