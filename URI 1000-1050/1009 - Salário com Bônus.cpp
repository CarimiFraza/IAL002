//leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro)
//15% de comiss�o com duas casas decimais

#include <stdio.h>

int main() {
	char vendedor;
	double sal,vendas, total;

	scanf("%s",&vendedor);
	scanf("%lf %lf",&sal,&vendas);
	total = sal+(vendas*0.15);
	printf("TOTAL = R$ %.2f\n", total);

return 0;

}
