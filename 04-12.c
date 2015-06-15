#include <stdio.h>

void main(){

	char l;
	int a=0, b=0, c=0, d=0, e=0, i=0;

	do {
		printf("Informe o conceito do aluno (aA-eE):\n");
		scanf("%c", &l);
		l = tolower(l);

		if(l == 'a')
			a++;
		else if(l == 'b')
			b++;
		else if(l == 'c')
			c++;
		else if(l == 'd')
			d++;
		else if(l == 'e')
			e++;
		else
			i++;

	} while (l != 'z');

	printf("Conceitos A: %d\n", a);
	printf("Conceitos B: %d\n", b);
	printf("Conceitos C: %d\n", c);
	printf("Conceitos D: %d\n", d);
	printf("Conceitos E: %d\n", e);
	printf("Conceitos incorretos: %d\n", i);

}
