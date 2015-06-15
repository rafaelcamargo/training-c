#include <stdio.h>

void main(){

	int e;
	float s, d;

	printf("Informe um valor inteiro:\n");
	scanf("%d", &e);

	s = 1;
	d = 2;

	printf("\nd: %.3f\n", d);
	printf("s: %.3f\n", s);

	if(e > 1.5) {
		do {
			s = s + 1/d;
			printf("\nd: %.3f\n", 1/d);
			printf("s: %.3f\n", s);
			d = d + 2;
		} while(s + 1/d < e);
	}

	printf("\nO valor máximo de S foi igual a: %.3f\n\n", s);

}
