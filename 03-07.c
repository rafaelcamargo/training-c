#include <stdio.h>

void main(){

	int n, f;

	printf("Informe um número inteiro:\n");
	scanf("%d", &n);

	f = fat(n);

	printf("Fatorial de %d foi igual a: %d\n", n, f);

}

int fat(n){
	if(n == 1)
		return 1;
	return n * fat(n - 1);
}
