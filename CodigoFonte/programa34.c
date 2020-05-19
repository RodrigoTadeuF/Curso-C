#include <stdio.h>
#include <string.h>

// A Union separa e utiliza apenas o espaço da maior variável.
union pessoa {
  char nome[100]; // = 1 byte *100 = 100 bytes
  int idade; // 4 bytes
};

int main() {
  
  union pessoa pes;

  strcpy(pes.nome, "Rodrigo Tadeu");
  printf("Dados de %d\n", pes.idade);

  pes.idade = 21;
  printf("Ele tem %d anos\n", pes.idade);

  printf("A variável 'pes' está ocupando %ld bytes em memória", sizeof(pes));

  return 0;
}