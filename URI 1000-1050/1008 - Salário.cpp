//leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora
//Calcule o salário desse funcionário. Mostre o número e o salário do funcionário, com duas casas decimais.
//Entrada 2 números inteiros e 1 número com duas casas decimais

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
