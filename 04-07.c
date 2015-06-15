#include <stdio.h>

void main(){

	int n;
	float l;
	double a = 0;

	printf("Informe um valor para a aresta do quadrado:\n");
	scanf("%f", &l);

	printf("Informe a quantidade de sub-quadrados a ser gerada:\n");
	scanf("%d", &n);

	do{
		a += l * l;
		l = l/2;
		n--;
	} while (n >= 0);

	printf("A soma da areas dos quadrados foi igual a: %.4f\n", a);

}
