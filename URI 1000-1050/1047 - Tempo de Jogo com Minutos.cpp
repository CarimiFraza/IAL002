#include <stdio.h>

int main (){
	int hr_ini, min_ini, min_f, hr_tot, min_tot, final;
    scanf("%d %d %d %d", &hr_ini, &min_ini, &final, &min_f);
    
	hr_tot = final - hr_ini;

    if (hr_tot < 0)
    {
        hr_tot = 24 + (final - hr_ini);
    }
min_tot = min_f - min_ini;
 if (min_tot < 0) {
   min_tot = 60 + (min_f - min_ini);
   hr_tot--;
}
    if (hr_ini == final && min_ini == min_f) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr_tot, min_tot);
}
