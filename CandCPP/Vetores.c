#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define LINHA 2
#define COLUNA 3

#define LINHA1 2
#define COLUNA1 2

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

void invertendoLinhaMatriz() {
	int matriz[LINHA1][COLUNA1];

	printf("Digite os números da matriz : \n");   //Recebe e guarda os valores recebidos pelo usuario na matriz
	for (int i = 0; i < LINHA1; i++) {
		for (int j = 0; j < COLUNA1; j++) {
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}

	int copiaMatriz[LINHA1][COLUNA1];

	for (int i = 0; i < LINHA1; i++) {         //Copia a matriz para copiaMatriz
		for (int j = 0; j < COLUNA1; j++) {
			copiaMatriz[i][j] = matriz[i][j];
		}
	}

	for (int i = 0; i < COLUNA1; i++) {       //Inverte o conteudo da linha 1 pela linha 0 da matriz utilizando a copia como referencia
		matriz[1][i] = copiaMatriz[0][i];
		matriz[0][i] = copiaMatriz[1][i];
	}

	/*matriz[0][0] = copiaMatriz[1][0];
	matriz[0][1] = copiaMatriz[1][1];
	matriz[1][0] = copiaMatriz[0][0];
	matriz[1][1] = copiaMatriz[0][1];*/

	for (int i = 0; i < LINHA1; i++) {         //Exibe o conteúdo da matriz já atualizado
		for (int j = 0; j < COLUNA1; j++) {
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}
}

void main6() {
	setlocale(LC_ALL, "en_US.UTF-8");
	//calculandoMedia();
	//varrendoMatriz();
	invertendoLinhaMatriz();
}