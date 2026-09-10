#define _CRT_SECURE_NO_WARNINGS //Necessário para ignorar erro apontado pelo scanf, por ele ter um retorno int de sucesso de leitura, ignorado nessa situação
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>  //Necessário para utilizar o setlocale

int main1() {
	setlocale(LC_ALL, "en_US.UTF-8"); //Necessário para o Visual Studio reconhecer o UTF-8 (Acentos como á ç entre outros)

	printf("Olá ç ão à \n");

	int a = 33;
	int b = 27;
	printf("A soma de A e B é igual a : %d", a + b);

	printf("\n Escolha um valor para C: ");
	int c = 0;

	/*if (scanf("%d", &c) == 1) {           JEITO CORRETO DE FAZER A TRATATIVA DE RETORNO DO scanf
		printf("Você digitou: %d\n", c);
	}
	else {
		printf("Erro ao ler o número.\n");
	}*/

	if(scanf("%d", &c) == 1)
		printf("O valor escolhido para C foi : %d", c);

	float d = 5.5;
	printf("\nO valor de D é %f \n", d);
	printf("Digite o novo valor de D :");

	if(scanf("%f", &d) == 1)
		printf("O novo valor de D é : %f", d);

	char letra = 'H';
	printf("\nO character de letra é : %c \n", letra);
	printf("Digite um novo character para letra : ");

	if(scanf(" %c", &letra) == 1)                          //Sempre utilizar o espaço para character para evitar erro no buffer (" &c") caso contrario seria preciso
		printf("Novo character de letra é : %c", letra);   //limpar o buffer para fazer a leitura e o fflush que é a função de limpeza não é confiavel

	return 0;
}