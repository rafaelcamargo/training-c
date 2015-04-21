#include <stdio.h>

void main(){

	int a, b;

	printf("Informe dois valores (a, b) inteiros:\n");
	scanf("%d %d", &a, &b);

	if(a%b == 0)
		printf("A divisivel por B.\n");
	else if(b%a == 0)
		printf("B divisivel por A.\n");
	else
		printf("Nem A divisivel por B, nem B divisivel por A.\n");
}