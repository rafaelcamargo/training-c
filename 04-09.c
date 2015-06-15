#include <stdio.h>

void main(){

	int m, n;
	double t, p = 0;

	printf("Informe um valor para a aresta do triangulo:\n");
	scanf("%d", &m);

	printf("Informe a quantidade de sub triangulos:\n");
	scanf("%d", &n);

	t = (double) m;

	do {
		p += 3 * t;
		t = t/2;
		n--;
	} while (n >= 0);

	printf("A soma dos perimetros foi igual a: %.4f\n", p);

}
