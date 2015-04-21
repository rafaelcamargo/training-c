#include <stdio.h>

void main(){

	float t, l, a = 12, v = 80;

	t = (float) 35/60;
	l = v * t / a;

	printf("A quantidade de litros gastos na a viagem foi igual a:\n");
	printf("%.3f\n", l);

}