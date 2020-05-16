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

	char opcao;

	printf("Informe uma opção: \n");

	printf("a - Saldo da conta.\n");
	printf("b - Extrato da conta.\n");
	printf("c - Limite da conta.\n");
	scanf("%c", &opcao);

	if(opcao == 'a') {
		printf("Seu saldo é....");
	} else if(opcao == 'b') {
		printf("Extrato da conta...");
	} else if(opcao == 'c') {
		printf("Seu limite é...");
	} else {
		printf("Opção inválida...");
	}

	// Gerar um alfabeto completo com um loop
	for(int i = 97; i <= 122; i++) {
		printf("%c\n", i);
	}

	return 0;
}
