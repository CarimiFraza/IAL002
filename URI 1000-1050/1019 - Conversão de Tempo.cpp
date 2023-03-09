#include <iostream>

int main() {
    
	int N, H, M, S;

	scanf("%i", &N);

	H=(N/3600);
	M=(N-(3600*H))/60;
	S= (N-(3600*H)-(M*60));

	printf("%i:%i:%i \n",H,M,S);


return 0;

}
