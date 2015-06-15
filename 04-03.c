#include <stdio.h>
#include <math.h>

// Compile using -lm

void main(){

	int n;
	float x;
	double e, p;

	printf("Informe um valor inteiro:\n");
	scanf("%d", &n);

	printf("Informe um valor qualquer:\n");
	scanf("%f", &x);

	e = (double) 1 + x;

	while (n > 1){
		p = pow(x, n);
		e += (double) p/fat(n);
		n--;
	}

	printf("E igual a: %.4f\n", e);

}

int fat(n){
	if(n == 1)
		return 1;
	return n * fat(n - 1);
}
