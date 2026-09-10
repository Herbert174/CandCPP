#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define TAM 10      //Definindo constante

void random() {
	srand(time(0));        //Define a seed do rand baseado no tempo atual, para que a seed seja sempre diferente
	int r = rand() % 10;   //Resto da divisão de 10 para pegar um número aleatório de 0 a 9 (10 números)
	printf("Número gerado: %d", r);
}

void randomRange() {
	srand(time(0));

	//Define o número máximo e mínimo gerado aleatóriamente ex. (20 a 5)  Random entre ranges mínimo e máximo
	int randmax = 6;
	int randmin = 1;

	//randmin fora do parentese serve para definir o range minimo (no caso começar do valor de randmin e não 0)
	int r = (rand() % (randmax - randmin + 1)) + randmin;
	printf("Número gerado : %d", r);
}

void execRandom() {
	setlocale(LC_ALL, "en_US.UTF-8");
	srand(time(NULL));
	int randmax = 6;
	int randmin = 1;

	int dado1 = (rand() % (randmax - randmin + 1)) + randmin;
	int dado2 = (rand() % (randmax - randmin + 1)) + randmin;
	int dado3 = (rand() % (randmax - randmin + 1)) + randmin;

	int somadados = dado1 + dado2 + dado3;
	printf("Os dados lançados foram : %d %d e %d a soma deles foi : %d", dado1, dado2, dado3, somadados);
}



void main5() {
	setlocale(LC_ALL, "en_US.UTF-8");
	//random();
	//randomRange();
	execRandom();
}