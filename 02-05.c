#include <stdio.h>

void main(){

	int x = 3;

	int y;

	int * z;

	printf("%d %p\n", x, &x);
	printf("Resposta: Valor de x e endereco da memoria de x.\n\n");

	y = (int) (&x);

	printf("%d %X\n", x, y);
	printf("Resposta: Valor de x e endereco da memoria de x convertido para hexa uppercase.\n\n");

	// z = y;

	// printf("%X %p\n", z, z);
	// printf("Resposta: Endereco de memoria de x conertido para inteiro e valor para o qual a ponta z.\n");

}