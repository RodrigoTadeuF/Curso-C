#include <stdio.h>

/*
 Tipos de Dados

 Tipos Alfanuméricos:
  - Caracteres;
  - Strings*;

 * Na linguagem C não existe o tipo de dado String.

  String:
  "asdasdasdihnuasdfma";

  Char:
  's';
 */

int main() {
	// Declaração de uma String em C
	char nome[50];

	printf("Qual é o seu nome? ");
	gets(nome);

	printf("Seu nome é %s", nome);

	return 0;
}
