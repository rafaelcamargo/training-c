#include <stdio.h>

void main(){

	float e, n, d;

	printf("Informe um valor:\n");
	scanf("%f", &e);

	n = 1;
	d = 2;

	while(n > e) {
		n = 1/d;
		d = d + 2;
	};

	printf("\nO primeiro valor da serie menor que E foi igual a: %.3f\n\n", n);

}
