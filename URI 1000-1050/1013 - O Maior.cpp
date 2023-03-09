#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, x, maior;
  
    scanf("%i %i %i", &a, &b, &c);
    
	x=(a+b+abs(a-b))/2;
	maior=(x+c+abs(x-c))/2;
    
	printf("%i eh o maior\n", maior);

return 0;
}
