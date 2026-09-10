#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10      //Definindo constante


void repeticao() {
	int i = 0;
	while (i < 10) {
		printf("%d \n", i);
		i++;
	}

	while (i > -1) {
		printf("%d \n", i);
		i--;
	}

	while (i != 10) {
		printf("Digite 10 :");
		if (scanf("%d", &i) == 1) {}
	}
}

void exec1while() {
	int i = 50;
	while (i > 0) {
		printf("%d \n", i);
		i -= 6;
	}
}

void exec2while() {
	int i = 10;
	int numero;

	printf("Digite um numero : ");
	if (scanf("%d", &numero) == 1) {}

	while (i <= numero) {
		if (i % 2 == 0) {
			printf("%d \n", i);
		}
		i++;
	}
}

void repeticaoFor() {
	for (int i = 0; i <= 10; i++) {
		printf("%d \n", i);
	}

	for (int i = 10; i > 0; i -= 3) {
		printf("%d \n", i);
	}
}

void exec1for() {
	int soma = 0;
	for (int i = 0; i < 10; i++) {
		soma = soma + i;
		printf("%d \n", soma);
	}
}

void exec2for() {
	int resultado = 0;
	int numerotabuada;
	printf("Escolha um numero para a tabuada : ");
	if (scanf("%d", &numerotabuada) == 1) {}
	for (int i = 1; i <= 10; i++) {
		resultado = numerotabuada * i;
		printf("%d x %d = %d \n", numerotabuada, i, resultado);
	}
}

void exec3for() {
	printf("Insira o valor inicial : ");
	int valorinicial;
	if (scanf("%d", &valorinicial) == 1) {}

	printf("Insira o valor final : ");
	int valorfinal;
	if (scanf("%d", &valorfinal) == 1) {}

	printf("Insira o valor do intervalo : ");
	int valorintervalo;
	if (scanf("%d", &valorintervalo) == 1) {}

	for (int i = valorinicial; i <= valorfinal; i += valorintervalo) {
		printf("valor atual : %d\n", i);
	}
}

void constante() {
	printf("%d \n", TAM);

	for (int i = 1; i < TAM; i++) {
		printf("%d \n", i);
	}
}

void exec1AllRepeticao() {
	int i = 10;

	while (i >= 0) {
		printf("%d\n", i);
		i--;
	}
	i = 10;

	do {
		printf("%d\n", i);
		i--;
	} while (i >= 0);

	for (i = 10; i >= 0; i--) {
		printf("%d\n", i);
	}
}

void exec2AllRepeticao() {
	int i = 10;

	while (i <= 20) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
		i++;
	}

	i = 10;

	do {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
		i++;
	} while (i <= 20);

	for (i = 10; i <= 20; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}
}

int numeroprimo(int n) {  //Algoritmo que verifica se número é primo ou não RETORNO 0 = NÃO É PRIMO, RETORNO 1 = NÚMERO PRIMO
	if (n <= 1) return 0;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1; //numero primo
}

void exec3AllRepeticao() {
	int numero = 0;
	printf("Digite um numero : ");
	if (scanf("%d", &numero) == 1) {}
	if (numeroprimo(numero) == 1) {
		printf("Numero é primo");
	}
	else {
		printf("Numero não é primo");
	}
}

void main() {
	setlocale(LC_ALL, "en_US.UTF-8");
	//repeticao();
	//exec1while();
	//exec2while();
	//repeticaoFor();
	//exec1for();
	//exec2for();
	//exec3for();
	//constante();
	//exec1AllRepeticao();
	//exec2AllRepeticao();
	exec3AllRepeticao();
}