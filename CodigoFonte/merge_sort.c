#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2, int fim2) {
  // vetor temporário para o merge
  int temp[50];
  // Variáveis auxiliares
  int i, j, k;
  
  //Inicio do primeiro grupo
  i = inicio1;

  // inicio do segundo grupo
  j = inicio2;
  k = 0;

  // Enquanto tiver elementos em ambos os grupos...
  while(i <= fim1 && j <= fim2) {
    // Faz a ordenação de acordo com cada grupo
    if(vetor[i] < vetor[j]) {
      temp[k++] = vetor[i++];
    } else {
      temp[k++] = vetor[j++];
    }
  }

  // Copiar os elementos restantes do primeiro grupo
  while(i <= fim1) {
    temp[k++] = vetor[i++];
  }

  while(j <= fim2) {
    temp[k++] = vetor[j++];
  }

  // Transfere os elementos do vetor temporário para o original
  for(i = inicio1, j = 0; i<= fim2; i++, j++) {
    vetor[i] = temp[j];
  }
}

void merge_sort(int vetor[], int inicio, int fim) {
  if (inicio < fim) {
    // calcular o meio do vetor
    int meio = (inicio + fim) / 2;

    //recursão esquerda
    merge_sort(vetor, inicio, fim);

    //recursão direita
    merge_sort(vetor, meio + 1, fim);

    //faz o merge com os dois grupos de vetores ordenados
    merge(vetor, inicio, meio, meio + 1, fim);
  }
}
 
int main() {

	int vetor[6] = {8, 3, 1, 42, 12, 5};

	merge_sort(vetor, 0, 6 - 1);

	for(int i = 0; i < 6; i++) {
		printf("%d\n", vetor[i]);
	}

	return 0;
}
