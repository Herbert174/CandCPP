#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void impressao() {
	int a, b, c;
	int resultado;

	printf("Olá digite os 3 números :\n");

	if (scanf("%d %d %d", &a, &b, &c) == 1)
		printf("valores lidos"); //Não é exibido mas estou deixando aqui para o if do scanf não aglobar outro trecho do codigo

	resultado = a * b * c;

	printf("O resultado da multiplicação dos 3 números é : %d", resultado);
}

void leituraEscritaString() {
	printf("Digite uma frase : \n");
	char texto[100];
	fgets(texto, sizeof(texto), stdin); //Maneira de ler uma string que contém espaço na frase

	printf("Frase escrita pelo usuario : ");
	puts(texto);
	//printf("%s", texto);   Printf quando usado com %s também imprime string mesmo contendo espaço na frase
}

int main2() {
	setlocale(LC_ALL, "en_US.UTF-8");

	//impressao();
	leituraEscritaString();
	//system("pause"); //Pausa o programa
	return 0;
}

void operacoesBasicasC() {
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

	if (scanf("%d", &c) == 1)
		printf("O valor escolhido para C foi : %d", c);

	float d = 5.5;
	printf("\nO valor de D é %f \n", d);
	printf("Digite o novo valor de D :");

	if (scanf("%f", &d) == 1)
		printf("O novo valor de D é : %f", d);

	char letra = 'H';
	printf("\nO character de letra é : %c \n", letra);
	printf("Digite um novo character para letra : ");

	if (scanf(" %c", &letra) == 1)                          //Sempre utilizar o espaço para character para evitar erro no buffer (" &c") caso contrario seria preciso
		printf("Novo character de letra é : %c", letra);   //limpar o buffer para fazer a leitura e o fflush que é a função de limpeza não é confiavel
}