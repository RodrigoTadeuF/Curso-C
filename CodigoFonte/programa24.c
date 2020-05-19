#include <stdio.h>
// FILE == arquivo

int main() {
	FILE * arq;

	// fopen("nome_arquivo", forma_abertura)
	// w - abrir arquivo para escrita (se o arquivo já existir, será sobrescrito com um novo zerado)
	// r - abrir o arquivo para leitura (não podemos escrever no arquivo)
	// wa - abrir o arquivo para adição de conteúdo (se o arquivo já existir o conteúdo será adicionado)
	arq = fopen("arquivo.txt", "w");

	// Sempre que a gente finalizar a manipulação de um arquivo, devemos fechá-lo
	fclose(arq);

	return 0;
}
