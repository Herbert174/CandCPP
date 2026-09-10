#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define LINHA 2
#define COLUNA 3

void calculandoMedia() {

	printf("Qual será o tamanho do vetor : ");
	int tamanho;
	if(scanf("%d", &tamanho) == 1){}
	printf("Tamanho escolhido : %d \n", tamanho);

	float* valores;  //Definindo valores como vetor com *

	valores = (float*)malloc(tamanho * sizeof(float));  //Alocando dinamicamente o tamanho da memoria do vetor, com base no usuario

	float mediaValores;

	//Para saber o tamanho de um vetor estático em C, você deve dividir o tamanho total 
	//do vetor em bytes pelo tamanho de um único elemento, usando o operador

	//int tamanhoVetor = sizeof(valores) / sizeof(valores[0]);  //Calculo para chegar no tamanho de um vetor estatico

	for (int i = 0; i < tamanho; i++) {
		printf("Escolha o valor : ");
		if (scanf("%f", &valores[i]) == 1) {}
	}

	float valoratual = 0;
	for (int i = 0; i < tamanho; i++) {
		valoratual += valores[i];
	}

	mediaValores = valoratual / tamanho;

	printf("A media entre esses valores é : %.2f", mediaValores);
}

void varrendoMatriz() {
	int matriz[LINHA][COLUNA];

	printf("Digite os numeros da matriz \n");

	for (int i = 0; i < LINHA; i++) {
		for (int j = 0; j < COLUNA; j++) {
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < LINHA; i++) {
		for (int j = 0; j < COLUNA; j++) {
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
}

void main4() {
	setlocale(LC_ALL, "en_US.UTF-8");
	//calculandoMedia();
	varrendoMatriz();
}