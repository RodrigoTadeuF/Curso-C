#include <stdio.h>

/*
Matrizes - parte 2
*/

int main() {

 	// Matriz de inteiros
	int numero[2][2];
  numero[0][0] = 1;
  numero[0][1] = 2;
  numero[1][0] = 3;
  numero[1][1] = 4;

	// Matriz de reais
	float valores[5][5];

  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("numeros[%d][%d] vale %d\n", i, j, numero[i][j]);
    }
  }


  return 0;

}