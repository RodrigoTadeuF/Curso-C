#include <stdio.h>

/*
 Vetores parte 1

 Array unidimensional
 char nome[50];
 */

int main() {
	// Vetores e Strings
	char nome[50];
	// "asdasudadh"
	printf("Qual o seu nome? ");
	gets(nome);
	printf("Olá %s", nome);

	// Vetores de caracteres
	char letras[26];
	// 'a'
	int contador = 0;
	
	for (int i = 97; i <= 122; i++) {
		letras[contador] = i;
		contador = contador + 1;
	}

	//Impirmindo as letras e seus valores em decimal
	for (int i = 0; i < 26; i++) {
		printf("%d == %c\n", letras[i], letras[i]);
	}

	//char l = 'l';
	//char a = 97;


	// Vetores de inteiros
	int numero[10];

	// Vetores de reais
	float valores[5];

	return 0;
}
