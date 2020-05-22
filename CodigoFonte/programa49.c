#include <stdio.h>
#include <stdlib.h>

struct st_no {
	int valor;
	struct st_no *prox;
};

typedef struct st_no no;

int empty(no *le) {
	if(le->prox == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

void init(no *le) {
	le->prox = NULL;
}

void release(no *le) {
	if(!empty(le)) {
		no * proxNo, *atual;
		atual = le->prox;
		while(atual != NULL){
			proxNo = atual->prox;
			free(atual);
			atual = proxNo;
		}
	}
}

void show(no *le) {
	if(empty(le)) {
		printf("A Lista está vazia!\n\n");
		return;
	}
	no *tmp;
	tmp = le->prox;

	while(tmp != NULL){
		printf("%d", tmp->valor);
		tmp = tmp->prox;
	}
	printf("\n\n");
}

void insereInicio(no *le) {
	no *novo = (no*)malloc(sizeof(no));
	if(!novo) {
		printf("Sem memória disponível!\n");
		exit(1);
	}
	printf("Informe o valor: ");
	scanf("%d", &novo->valor);

	no * oldHead = le->prox;

	le->prox = novo;
	novo->prox = oldHead;
}

void insereFinal(no * le) {
	no * novo = (no*)malloc(sizeof(no));
	if(!novo){
		printf("Sem memória disponível!\n");
		exit(1);
	}
	printf("Informe o valor:");
	scanf("%d", &novo->valor);
	novo->prox = NULL;

	if(empty(le)) {
		le->prox = novo;
	} else {
		no *tmp = le->prox;

		while(tmp->prox != NULL) {
			tmp = tmp->prox;
		}
		tmp->prox = novo;
	}
}

void opcao(no *le, int op) {
	switch(op){

		case 0:
			release(le);
			break;
		case 1:
			show(le);
			break;
		case 2:
			insereInicio(le);
			break;
		case 3:
			insereFinal(le);
			break;
		case 4:
			init(le);
			break;
		default:
			printf("Comando inválido\n\n");
	}
}

int menu() {

	int opt;

	printf("Escolha a opção: \n");
	printf("[0] - Sair\n");
	printf("[1] - Exibir\n");
	printf("[2] - Adicionar no início\n");
	printf("[3] - Adicionar no final\n");
	printf("[4] - Zerar lista\n");
	printf("Opção: \n");
	scanf("%d", &opt);

	return opt;
}

int main() {

	no *le = (no*)malloc(sizeof(no));

	if(!le) {
		printf("Sem memória disponível");
		exit(1);
	}
	init(le);
	int opt;

	do {
		opt=menu();
		opcao(le, opt);
	} while(opt);

	free(le);

	return 0;
}
