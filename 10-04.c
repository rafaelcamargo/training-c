#include <stdio.h>

void main(){
	FILE *origin_fp;
	FILE *target_fp;

	// File structure
	int id;
	char username[40];
	float balance;

	// Program commands
	int account;
	char operation;
	float value;

	origin_fp = fopen("10-04.txt","r");
	target_fp = fopen("10-04_copy.txt","w");

	printf("\nDigite o numero da conta:\n");
	scanf("%d", &account);

	printf("Digite (D) para deposito ou (S) para saque:\n");
	scanf("%s", &operation);

	printf("Informe a quantia:\n");
	scanf("%f", &value);

	while(fscanf(origin_fp, "%d %s %f", &id, &username, &balance) != EOF){
		if(id == account){
			if(operation == 'D')
				fprintf(target_fp, "%d %s %.2f\n", id, username, balance + value);
			else
				fprintf(target_fp, "%d %s %.2f\n", id, username, balance - value);
		}
		else
			fprintf(target_fp, "%d %s %.2f\n", id, username, balance);
	}

	printf("\nWork completed!\n");
}