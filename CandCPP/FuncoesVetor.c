#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void imprimeVetor(int* vetor) {
	int tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]);  //Descobre o tamanho do vetor para utiliza-lo no for

	for (int i = 0; i <= tamanhoVetor; i++) {  //Percorre todos os valores do vetor e imprime na tela
		printf("%d\n", vetor[i]);
	}
}

void modificaVetor(int* vetor) {
	int tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]);

	for (int i = 0; i <= tamanhoVetor; i++) {
		vetor[i] += 3;  //Modificando vetor, como um vetor por essencia é um ponteiro, não é necessário a utilização do *
	}
}

int main11() {

	int v[3] = { 1,2,3 };

	imprimeVetor(v);

	modificaVetor(v);
	imprimeVetor(v);

	return 0;
}