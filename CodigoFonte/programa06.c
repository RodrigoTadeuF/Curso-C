#include <stdio.h>

/*
 Tipos de Dados

 Tipos Numéricos:
  - Inteiros;
  - Reais.
 */

int main() {

	//Inteiro
	int nota1, nota2; //1, 2, ... 99... 700

	//Real
	float media; // 1.5, 15.14, 3.14
	//double outraMedia; // 23.4, 1.2345123

	printf("Qual a primeira nota? ");
	scanf("%d", &nota1);

	printf("Qual a segunda nota? ");
	scanf("%d", &nota2);

	media = (nota1 + nota2) / 2;

	printf("Sua média é %.2f", media);


	return 0;
}
