#include <stdio.h>
// Estruturas de repetição
/*
 Utilizando (for)
  for é utilizado quando o número de repetições é conhecido.
 */
int main() {
	// Variáveis
	int numero, soma = 0;

	// Para o int iniciando em 0, quanto o i < 5 incrementa o i em 1.
	for(int i = 0; i < 5; i++) {

		//Entrada
		printf("Informe um número");
		scanf("%d", &numero);

		//Processamento
		soma = soma + numero
	}

	//Saída
	printf("A soma é %d", soma);

	return 0;
}
