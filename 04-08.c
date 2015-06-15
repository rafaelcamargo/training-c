#include <stdio.h>

void main(){

	int n = 0;
	float a, l;
	double s = 0;

	printf("Informe um valor para a aresta do quadrado:\n");
	scanf("%f", &l);

	printf("Informe um valor qualquer:\n");
	scanf("%f", &a);

	do{
		s = l * l;
		l = l/2;
		n++;
	} while (s > a);

	printf("O numero de quadrados necessarios foi igual a: %d\n", n);

}
