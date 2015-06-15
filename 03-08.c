#include <stdio.h>

void main(){

	float s, a, b;

	s = 1;
	a = 1;
	b = 1;

	while (a < 99 && b < 50) {
		a = a + 2;
		b = b + 1;
		s = s + a/b;
	}

	printf("S igual a: %.2f\n", s);

}
