#include <stdio.h>

/*
 Aula sobre funções
 main -> principal

 Estrutura das funções:
   - Tipo de retorno
   - Nome
   - Parâmetros de entrada (opcional)
   - Implementação
   - Retorno (opcional)
*/

void mensagem() {
  printf("Bem vindo");
}

int soma(int num1, int num2) {
  return num1 + num2;
}

void proximo_char(char caractere) {
  printf("%c", caractere+1);
}

int main() {
  printf("Olá...");
  return 0;
}