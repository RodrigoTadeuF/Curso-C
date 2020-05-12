#include <stdio.h>
// Estrutura de repeticao While
/*
 Utilizando (while)
  for é utilizado quando o número de repetições é desconhecido, porém
  sabe-se o critério de parada e a verificação é feita antes de entrar
  na estrutura.
 */
int main() {

	// Variáveis
	int numero, soma = 0;

	//Entrada
	printf("Informe um número");
	scanf("%d", &numero);

	// Enquanto o numero for diferente de...
	while(numero != 0) {
		soma = soma + numero;
		printf("Informe um número");
		scanf("%d", &numero);
	}

	//Saída
	printf("A soma é %d", soma);

	return 0;
}
