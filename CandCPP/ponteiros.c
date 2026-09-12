#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main8() {
	setlocale(LC_ALL, "en_US.UTF-8");
	int a = 20;

	printf("Valor de A : %d \n", a);

	printf("Endereço de A : %d \n", &a);

	//Variaveis armazenam valores
	//Ponteiros armazenam posições na memória

	printf("Digite o nome valor de A : ");
	scanf("%d", &a);

	printf("Novo valor de A : %d \n", a);

	int b = 10;

	//Declarando variavel como ponteiro * criamos uma variavel que armazena posições na memória e não conteúdos
	int* ponteiro;

	ponteiro = &b;

	printf("Valor de B : %d \n", b);

	//Acessando o valor armazenado na memória apontada com o * podemos ler e alterar seu valor
	*ponteiro = 40;

	//B nesse caso é alterado pois o endereço da mémoria de B foi acessado, então mesmo B não tendo 
	//explicitamente sido chamado tem seu conteúdo alterado pelo ponteiro

	printf("Valor de B : %d \n", b);

	printf("Valor de Ponteiro : %d \n", *ponteiro);

	return 0;
}