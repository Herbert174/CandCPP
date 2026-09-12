#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void limpaTela() {
	system("CLS");  // Função para limpar a tela
}

int main() {
	int a;
	
	printf("Digite um valor para A : ");
	scanf("%d", &a);

	limpaTela();
	printf("Valor de A : %d", a);

	return 0;
}