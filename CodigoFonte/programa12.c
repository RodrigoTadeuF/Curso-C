#include <stdio.h>

//Vetores - parte 2

int main() {

  	// Vetores de inteiros
	int numero[5]; // 0...4
  numero[0] = 1;
  numero[1] = 3;
  numero[2] = 5;
  numero[3] = 7;
  numero[4] = 9;

	// Vetores de reais
	float valores[5]; //0...4
  for(int i = 0; i < 5; i++){
    valores[i] = (float)numero[i] / 2;
  }

  for(int i = 4; i >= 0; i--) {
    printf("%.2f\n", valores[i]);
  }


  return 0;
}