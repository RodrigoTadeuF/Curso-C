#include <stdio.h>

/*
 Operações Matemáticas

 Somar (+)
 Subtrair (-)
 Multiplicar (*)
 Dividir (/)
 Elevar ao quadrado x * x
 Módulo (resto da divisão) %
 */

int main() {

	int num1, num2;
	float res;

	printf("Informe o primeiro número: ");
	scanf("%d", &num1);

	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	//soma
	res = num1 + num2;
	printf("A soma é %d\n", (int)res);

	//subtracao
	res = num1 - num2;
	printf("A subtração é %d\n", (int)res);

	//multiplicação
	res = num1 * num2;
	printf("A multiplicação é %d\n", (int)res);

	//divisão
	res = (float)num1 / (float)num2;  //cast
	printf("A divisão é %f\n", res);

	//potencia
	res = num1 * num1;
	printf("A multiplicação é %d\n", (int)res);

	//modulo
	if(num1 % 2 == 0){
		printf("Par\n");
	} else {
		printf("Impar\n");
	}

}
