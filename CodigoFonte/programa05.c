#include <stdio.h>
// Estrutura de repeticao While
/*
 Utilizando (while)
  for é utilizado quando o número de repetições é desconhecido, porém
  sabe-se o critério de parada e a verificação é feita depois de entrar
  na estrutura.
 */

int main() {

	// Variáveis
		int numero, soma = 0;

		// Faça...Enquanto o numero for diferente de...
		do {
			//Entrada
			printf("Informe um número");
			scanf("%d", &numero);

			//Processamento
			soma = soma + numero;
		} while(numero != 0);

		//Saída
		printf("A soma é %d", soma);


	return 0;
}
