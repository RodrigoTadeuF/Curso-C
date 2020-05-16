#include <stdio.h>

/*
 Tipos de Dados

 Booleanos (Verdadeiro/Falso) true/false

 Na linguagem C, não existe um tipo de dado boolean

 Mas...

 A linguagem C, reconhece o valor 0 como Falso (false)
 e Qualquer valor diferente de 0 como Verdadeiro (true)
 */

int main() {

	int booleano = 1;

	if(booleano) {
		printf("Verdadeiro");
	} else {
		printf("False");
	}

	return 0;
}
