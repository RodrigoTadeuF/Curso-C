#include <stdio.h>
#include <stdlib.h>

int main() {

	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	scanf("%d", &qtd);

	int bytes = qtd * sizeof(int);

	p = (int*)malloc(bytes);

	for(int i = 0; i < qtd; i++) {
		printf("Informe o valor para a posição %d do vetor: ", i);
		scanf("%d", &p[i]);
	}

	for( int i = 0; i < qtd; i++) {
		printf("A variável 'numeros[%d]' vale %d\n", i, p[i]);
	}

	printf("A variável 'numeros' ocupa %ld bytes na memória\n", bytes);

	free(p);
	p = NULL; // Medida de segurança

	return 0;
}
