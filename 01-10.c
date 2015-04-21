#include <stdio.h>

void main(){

	int a, b, c;

	printf("Informe o valor de A:\n");
	scanf("%d", &a);
	printf("Informe o valor de B:\n");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;

	printf("O novos valores sao: A => %d, B => %d\n", a, b);

}