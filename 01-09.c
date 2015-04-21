#include <stdio.h>

void main(){

	float c, f;

	printf("Informe a temperatura em graus celsius:\n");
	scanf("%f", &c);

	f = (9*c + 160)/5;

	printf("A temperatura em Fahrenheit equivale a:\n");
	printf("%.2f\n", f);

}