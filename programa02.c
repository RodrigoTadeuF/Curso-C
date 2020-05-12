// Estruturas de decisão if, else, elseif
#include <stdio.h>

int main() {

	//Declaração de Variáveis
	int idade;

	//Entrada
	printf("Qual a sua idade? ");
	scanf("%d", &idade);

	//Processamento
	if(idade < 18) {
		printf("Você é menor de idade!\n");
	} else if (idade > 18 && idade < 60) {
		printf("Você é adulto!\n");
	} else {
		printf("Você é idoso!\n");
	}

	//Saída
	printf("Sua idade é %d\n", idade);

	return 0;
}
