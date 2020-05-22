#include <stdio.h>
#include <stdlib.h>

/*
 Malloc -
 */

int main() {

	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	scanf("%d", &qtd);

	int bytes = qtd * sizeof(int);

	p = (int*)malloc(bytes);

	if(p) {
		printf("A variável 'numeros' ocupa %ld bytes na memória\n", bytes);
	} else {
		printf("Memória insuficiente");
	}


	free(p);
	p = NULL; // Medida de segurança

	return 0;
}
