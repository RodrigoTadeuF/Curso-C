#include <stdio.h>

// ifdef - Diretiva de compilação

#ifndef PI
	#define PI 3.1415
#endif

int main() {

	int valor = 5;

	printf("O valor é: %d\n", valor);

	printf("Pi vale %.4f", PI);

	#ifdef PI
		printf("O valor de PI é %f\n", PI);
	#endif


	return 0;
}
