#include <stdio.h>

void main(){

	int a = 5, b = 3;
	int c;

	c = a++ + --b;
	printf ("a=%d b=%d c=%d\n", a, b, c);
	printf("Resposta: 6, 2, 8\n\n");

	c = ++a + b--;
	printf ("a=%d b=%d c=%d\n", a, b, c);
	printf("Resposta: 7, 1, 8\n\n");

	c = --a + ++b;
	printf ("a=%d b=%d c=%d\n", a, b, c);
	printf("Resposta: 6, 2, 8\n\n");

	c = a-- + b++;
	printf ("a=%d b=%d c=%d\n", a, b, c);
	printf("Resposta: 5, 3, 8\n\n");

}