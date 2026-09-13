#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 


struct palavra {      //Definindo uma struct
	int ordem;
	char texto[255];
};

typedef struct data {   //Utilizando  o typedef para não precisar escrever sempre o struct quando se referir a data (é a atribuição de um apelido)
	int dia;
	int mes;
	int ano;
}data;

struct aluno {
	int id;
	data nascimento;
};

void utilizandoStruct() {
	struct palavra primeiraPalavra;   //Instanciando uma struct

	primeiraPalavra.ordem = 0;
	strcpy(primeiraPalavra.texto, "Palmeiras campeão mundial");   //Para string (array de char) precisa usar o strcpy para atribuir os valores

	printf("Ordem : %d \nTexto : %s\n", primeiraPalavra.ordem, primeiraPalavra.texto);

	struct palavra listaPalavras[3];  //Instanciando lista de uma struct

	listaPalavras[0].ordem = 1; //Acessando conteudo da lista de struct
	listaPalavras[1].ordem = 2;
	listaPalavras[2].ordem = 3;

	strcpy(listaPalavras[0].texto, "Palmeiras");
	strcpy(listaPalavras[1].texto, "Flamengo");
	strcpy(listaPalavras[2].texto, "Athletico-PR");

	printf("Tabela brasileirão : \n");
	for (int i = 0; i < 3; i++) {
		printf("%d°Posição : %s\n", i + 1, listaPalavras[i].texto);
	}

	printf("Segue o lider");
}

void utilizandoStructEmStruct() {
	struct aluno aluno1;

	aluno1.id = 1;
	aluno1.nascimento.ano = 1997;
	aluno1.nascimento.mes = 11;
	aluno1.nascimento.dia = 9;

	printf("Aluno id : %d | Nascimento : %d/%d/%d", aluno1.id, aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
}

int main13() {
	setlocale(LC_ALL, "en_US.UTF-8");

	//utilizandoStruct();
	utilizandoStructEmStruct();

	return 0;
}