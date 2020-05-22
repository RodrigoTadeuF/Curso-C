#include <stdio.h>
#include <stdlib.h>

struct st_arvore {
	int valor;
	struct st_arvore *sad; //sad = Sub arvore direita
	struct st_arvore *sae; // sae = Sub arvore esquerda
};

typedef struct st_arvore arvore;

arvore * criaArvore() {
	return NULL;
}

int arvoreEstaVazia(arvore* t) {
	return t == NULL;
}

void mostraArvore(arvore *t) {
	printf("<");
	if(!arvoreEstaVazia(t)) {
		printf("%d", t->valor);
		mostraArvore(t->sae);
		mostraArvore(t->sad);
	}
	printf(">");
}

void insereDadoArvore(arvore** t, int num) {
	if(*t == NULL) {
		*t = (arvore*)malloc(sizeof(arvore));
		(*t)->sae = NULL;
		(*t)->sad = NULL;
		(*t)->valor = num;
	} else {
		if(num < (*t)->valor) {
			insereDadoArvore(&(*t)->sae, num);
		}
		if(num >(*t)->valor) {
			insereDadoArvore(&(*t)->sad, num);
		}
	}
}

int estaNaArvore(arvore* t, int num) {
	if(arvoreEstaVazia(t)) {
		return 0;
	}

	return t-> valor = num || estaNaArvore(t->sae, num) || estaNaArvore(t->sad, num);
}

int main() {

	arvore* t = criaArvore();

	insereDadoArvore(&t, 12);
	insereDadoArvore(&t, 15);
	insereDadoArvore(&t, 10);
	insereDadoArvore(&t, 13);

	mostraArvore(t);

	if(arvoreEstaVazia(t)) {
		printf("\nArvore vazia\n");
	} else {
		printf("\nArvore não vazia\n");
	}

	if(estaNaArvore(t, 15)) {
		printf("\nO elemento 15 pertence a árvore\n");
	} else {
		printf("\nO elemento 15 não pertence a árvore\n");
	}

	if(estaNaArvore(t, 42)) {
			printf("\nO elemento 42 pertence a árvore\n");
		} else {
			printf("\nO elemento 42 não pertence a árvore\n");
		}

	return 0;
}
