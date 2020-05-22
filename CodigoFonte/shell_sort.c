#include <stdio.h>

void shell_sort(int vetor[], int tam) {
  // Variável auxiliar
  int grupo = 1;

  // Gerar o tamnho do grupo de acordo com o tamnho od vetor
  while(grupo < tam) {
    grupo = 3 * grupo + 1;
  }

  // Varrer o vetor enquanto houver grupos apra ordenar
  while(grupo > 1) {
    // Dividir o grupo em 3 partes
    grupo/= 3;
    // varremos cada grupo
    for(int i = grupo; i < tam; i++) {
      int troca = vetor[i];
      int j = i- grupo;
      // realiza a troca
      while(j >= 0 && troca < vetor[j]) {
        vetor[j + grupo] = vetor[j];
        j -= grupo;
      }
      //realiza a troca
      vetor[j + grupo] = troca;
    }
  }
}

int main() {

	int vetor[6] = {8, 3, 1, 42, 12, 5};

	shell_sort(vetor, 6);

	for(int i = 0; i < 6; i++) {
		printf("%d\n", vetor[i]);
	}

	return 0;
}
