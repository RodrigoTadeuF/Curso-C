// Aula sobre variáveis
#include <stdio.h>

int main() { // A chave delimita um bloco de código (início do bloco)
	//Declarando variáveis
	//int idade; inteiro

	//Declarando e inicializando variáveis
	int idade = 0;

	//Função para escrever  algo na saída padrão (console)
	printf("Qual a sua idade? ");  // o ; finaliza um comando

	//Receber dados
	scanf("%d", &idade);

	//Saída de dados
	printf("A sua idade é %d", idade);

	return 0;
} // (fim do bloco)
