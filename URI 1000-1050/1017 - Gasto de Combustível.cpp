#include <iostream>

int main() {
    double tempo, velocidade, litro;
      
    scanf("%lf %lf", &tempo, &velocidade);
    
	litro = (tempo * velocidade)/12;
		
	printf ("%.3lf\n", litro);

return 0;
}
