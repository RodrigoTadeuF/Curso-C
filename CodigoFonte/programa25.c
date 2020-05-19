#include <stdio.h>

int main() {
	FILE *arq;

	arq = fopen("arquivo.txt", "r");

	char c;

	if(arq) {
		while((c = getc(arq)) != EOF) {
			printf("%c", c);
		}
	} else {
		printf("Não achei o arquivo");
	}

	return 0;
}
