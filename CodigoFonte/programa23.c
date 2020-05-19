#include <stdio.h>

int main() {
	/*
	   0   1   2   3   4
	 ---------------------
	 |   |   |   |   |   |
	 ---------------------
	 */

	int valores[5] = {1, 2, 3, 4, 5};

	for(int i = 0; i < 5; i++) {
		printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i]));
	}

	printf("O array valores possui %ld bytes\n", sizeof(valores));

	printf("valores[0] vale %d e seu endereço de memória é %p\n", valores[0], valores[0]);
	printf("*(valores) vale %d, e o seu enderço de memória vale %p\n", *(valores), (*valores));

	printf("*(valores+1) vale %d e o seu endereço de memória vale %p\n", *(valores+1), *(valores+1));

	return 0;
}
