#include <stdio.h>

// ifndef - Diretiva de compilação

#ifndef PI
	#define PI 3.1415
#endif

int main() {

	int valor = 5;

	printf("O valor é: %d\n", valor);

	printf("Pi vale %.4f", PI);

	return 0;
}
