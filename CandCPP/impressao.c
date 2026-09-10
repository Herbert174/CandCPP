#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main2() {
	setlocale(LC_ALL, "en_US.UTF-8");

	int a, b, c;
	int resultado;

	printf("Olá digite os 3 números :\n");

	if(scanf("%d %d %d", &a, &b, &c) == 1)
		printf("valores lidos"); //Não é exibido mas estou deixando aqui para o if do scanf não aglobar outro trecho do codigo

	resultado = a * b * c;

	printf("O resultado da multiplicação dos 3 números é : %d", resultado);

	//system("pause"); //Pausa o programa
	return 0;
}