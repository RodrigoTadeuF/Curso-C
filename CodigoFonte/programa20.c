#include <stdio.h>

void incrementa (int* valor) {
  printf("Antes de incrementar\n");
  printf("O contador vale %d\n", (*valor));
  printf("O endereço de memória é %d\n", valor);

  printf("Depois de incrementar\n");
  valor++;
  printf("O contador vale %d\n", ++(*valor));
  printf("O endereço de memória é %d\n", valor);
}

int main() {
  // Quando declaramos uma variável, a linguagem C
  // aloca um espaço em memória para colocar este valor
  int contador = 10;
  
  printf("Antes de incrementar\n");
  printf("O contador vale %d", contador);
  printf("O endereço de memória é %d\n", &contador);

  incrementa(&contador);

  printf("Depois de incrementar\n");
  printf("O contador vale %d\n", contador);
  printf("O endereço de memória é %d\n", &contador);

  return 0;
}