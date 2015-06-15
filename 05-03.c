#include <stdio.h>

void main(){

	int n, c, d, r = 0;

	printf("Informe um valor inteiro:\n");
	scanf("%d", &n);

	c = n;

 	while (c != 0) {
    d = c % 10;
    r = r * 10 + d;
    c = c / 10;
	}

 	if(n == r)
 		printf("O valor inteiro e igual a um palindromo!\n");
 	else
 		printf("O valor inteiro nao e igual a um palindromo...\n");

}
