#include <iostream>

main() {
    int n1, n2, n3, c1, c2, c3, comparador;
    
	scanf("%d %d %d", &n1, &n2, &n3);
	
	c1 = n1;
	c2 = n2;
	c3 = n3;
    
    if (c1 < c2) {
		comparador = c1;
		c1 = c2;
		c2 = comparador;
	}
	if (c2 < c3) {
		comparador = c2;
		c2 = c3;
		c3 = comparador;
	}

	if (c1 < c2) {
		comparador = c1;
		c1 = c2;
		c2 = comparador;
	}
	
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",c3,c2,c1,n1,n2,n3);

}
