#include <stdio.h>

int main() {
	int n;  //Variável que guarda seu valor em memória

	int* p;  //Ponteiro é um valor que aponta para um endereço em memória

	printf("Informe um número: ");
	scanf("%d", &n);

	p = &n;

	printf("O número informado foi %d\n", n);

	printf("Endereço de memória: %d\n", &n);

	printf("Endereço do ponteiro: %p\n", p);

	return 0;
}
