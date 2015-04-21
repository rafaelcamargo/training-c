#include <stdio.h>
#include <math.h>

void main(){
	double a, b, c, s, y, x, area;

	printf("Digite o primeiro valor:\n");
	scanf("%lf", &a);
	printf("Digite o segundo valor:\n");
	scanf("%lf", &b);

	y = pow(a, 2) + pow(b, 2);

	//c = sqrt(y);

	//printf("%.2f\n", c);

	// s = (a + b + c)/2;

	// x = s * (s-a) * (s-b) * (s-c);
	// area = sqrt(x);

	// printf("A area do triangulo de catetos %.2f e %.2f equivale a:\n", a, b);
	// printf("%.2f\n\n", area);

	printf("Potencia de a = %lf\n", pow(a, 2));
	printf("Raiz quadrada de b = %lf\n", sqrt(b));

	// float a, b, c;

	// printf("Valor do primeiro cateto:\n");
	// scanf("%f", &a);
	// printf("Valor do segundo cateto:\n");
	// scanf("%f", &b);

	// c = a * b / 2;

	// printf("Area igual a: %.2f\n", c);

}
