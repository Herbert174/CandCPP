#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

void alocandoMemoriaC() {
	printf("Qual será o tamanho do vetor : ");
	int tamanho;
	if (scanf("%d", &tamanho) == 1) {}
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

	printf("A media entre esses valores é : %.2f \n", mediaValores);
	free(valores); //Liberando a memória alocada para valores
}

void alocandoMemoriaCMatriz() {
	int linhas = 3, colunas = 3;
	int** matriz;
	int valor = 10;

	matriz = (int**)malloc(linhas * sizeof(int*));  //Alocando memoria para cada linha da matriz

	if (matriz == NULL) { //Verifica se matriz conseguiu ser alocada, em caso de falha para a função
		return;
	}
	

	for (int i = 0; i < linhas; i++) {
		matriz[i] = (int*)malloc(colunas * sizeof(int)); //Alocando memoria para cada coluna da matriz
		if (matriz[i] == NULL)
			return;
	}

	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			valor += 1;
			matriz[i][j] = valor;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < linhas; i++) {
		free(matriz[i]);  //Liberando memoria alocada de cada linha (espaço das colunas)
	}
	free(matriz);  //Liberando memoria alocada de cada vetor (espaço das linhas)
}

void alocandoMemoriaCPP() {
	int tamanho;
	cout << "Qual será o tamanho do vetor : ";
	cin >> tamanho;
	cout << endl;

	int* vetor = new int[tamanho];  //Alocando memoria para o vetor
	
	cout << "Insira os valores do vetor : ";   //Percorrendo vetor para alterar valores
	for (int i = 0; i < tamanho; i++) {
		cout << "Valor de " << i << " ";
		cin >> vetor[i];
	}
	cout << endl;

	for (int i = 0; i < tamanho; i++) {        //Percorrendo vetor para ler valores
		cout << "Valor de " << vetor[i] << " ";
		cout << endl;
	}

	cout << endl;
	delete[] vetor;    //Liberando memoria
	vetor = nullptr;                          //Alocação manual de memória só deve ser usada quando a stack não tiver memoria suficiente para atender a demanda
}                                             //Sendo necessário usar o new para alocar na heap e fazer a operação necessária

void alocandoMemoriaCPPMatriz() {
	int linhas = 3, colunas = 3;
	int** matriz;
	int valor = 10;

	matriz = (int**)new int*[linhas];   //Alocando na matriz que é um ponteiro de um ponteiro a quantidade de ponteiros (linhas) necessário
	if (matriz == NULL)   //Verifica se matriz conseguiu ser alocada, em caso de falha para a função
		return;

	for (int i = 0; i < linhas; i++) {
		matriz[i] = (int*)new int[colunas]; //Alocando memoria para cada coluna da matriz
		if (matriz[i] == NULL)
			return;
	}

	for (int i = 0; i < linhas; i++) {
		for (int j = 0; j < colunas; j++) {
			valor += 1;
			matriz[i][j] = valor;
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < linhas; i++) {
		delete[] matriz[i];  //Liberando memoria alocada de cada linha (espaço das colunas)
		//matriz[i] = nullptr;
	}
	delete[] matriz;  //Liberando memoria alocada de cada vetor (espaço das linhas)
	//matriz = nullptr;
}

int main12() {
	setlocale(LC_ALL, "en_US.UTF-8");
	cout << "São Paulo é filho do Palmeiras" << endl;
	//alocandoMemoriaC();
	//alocandoMemoriaCPP();
	//alocandoMemoriaCMatriz();
	alocandoMemoriaCPPMatriz();

	return 0;
}