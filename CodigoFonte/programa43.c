#include <stdio.h>
#include <stdlib.h>

/*
 Calloc -> zera o espaço em memória inserindo zeros nos locais.

 Malloc -> pode conter 'lixos' que estão em memória.
 qtd = 3
 [3][66][99]
 */

int main() {

	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	scanf("%d", &qtd);

	p = (int*)calloc(qtd, sizeof(int));

	if(p) {
		printf("A variável 'numeros' ocupa %ld bytes na memória\n", qtd * sizeof(int));
	} else {
		printf("Memória insuficiente");
	}


	free(p);
	p = NULL; // Medida de segurança

	return 0;
}
