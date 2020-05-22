#include <stdio.h>
#include <stdlib.h>

/*
 Realloc - Realocação de memória
 
 */

int main() {

	int qtd, *p;

	printf("Informe a quantidade de elementos para o vetor: ");
	scanf("%d", &qtd);

	int bytes = qtd * sizeof(int);

	p = (int*)malloc(qtd * sizeof(int));
	
	if(p) {
		printf("A variável 'numeros' ocupa %ld bytes na memória\n", bytes);
		
		printf("Informe a quantidade de elementos para o vetor: ");
		scanf("%d", &qtd);		
	
		p = (int*)realloc(p, qtd * sizeof(int));

	} else {
		printf("Memória insuficiente");
	}

	
	free(p);
	p = NULL; // Medida de segurança

	return 0;
}
