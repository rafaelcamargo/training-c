#include <stdio.h>

void main(){

	int a, b;
	float s;

	s = 1;
	a = 1;
	b = 1;

	while (a < 10 && b < 100) {
		a = a + 1;
		b = b == 1 ? 4 : a * a;

		if(a%2 == 0)
			s = s - (float) a/b;
		else
			s = s + (float) a/b;
	}

	printf("S igual a: %.2f\n", s);
}
