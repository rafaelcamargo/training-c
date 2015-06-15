#include <stdio.h>

void main(){

	float e, a = 0;
	int n, c = 0;

	printf("Informe um valor para a espessura da folha:\n");
	scanf("%f", &e);

	printf("Informe a quantidade de empilhamentos:\n");
	scanf("%d", &n);

	do {
		a += a ? a : e*2;
		printf("Altura: %.4f | Empilhada: %d\n", a, c);
		c++;
	} while (c <= n);

	printf("A altura final da pilha foi igual a: %.2f\n", a);

}
