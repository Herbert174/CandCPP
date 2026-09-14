#define _CRT_SECURE_NO_WARNINGS 
#include <fstream>
#include <string>
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void criandoArquivosCPP() {
	ofstream arquivo;  //instanciando ofstream para escrever arquivos no c++
	arquivo.open("Texto.txt", ios_base::app);  //ios_base::app faz com que o arquivo mantenha o conteúdo anterior ao abrir o arquivo
	//lendoArquivo.open("Texto.txt");    //Abre o arquivo limpando conteúdo anterior
	arquivo << "Escrevendo uma linha no arquivo\n";
	arquivo.close();
}

void lendoImprimindoArquivosCPP() {
	ifstream arquivo("Texto.txt");  //instanciando ifstream para ler arquivos no c++
	string linha;

	while (getline(arquivo, linha)) {  //getline lê linha por linha de um arquivo, mesmo tendo espaço e guarda em uma variavel
		cout << linha << endl;
	}

	arquivo.close();
}

void limpandoArquivoCPP() {
	ofstream arquivo;
	arquivo.open("Texto.txt");

	arquivo << "";    //Limpa todo o conteúdo presente no arquivo
	arquivo.close();
}

void lendoUsuarioEscrevendoNoArquivoCPP() {
	string texto;

	cout << "Digite uma frase : ";
	getline(cin, texto);

	ofstream arquivo;
	arquivo.open("Texto.txt", ios_base::app);  //ios_base::app para manter o conteúdo anterior ao abrir o arquivo, equivalente ao "a" do C

	arquivo << texto << endl;
}

void lendoImprimindoArquivosC() {
	int c;

	FILE* arquivo;
	arquivo = fopen("Texto.txt", "r");

	if (arquivo) {
		while ((c = getc(arquivo)) != EOF) {  //EOF recebido de getc é a flag que recupera se o arquivo chegou ao final
			printf("%c", c);  //Imprime characters lidos no arquivo
		}
		fclose(arquivo);  //Fecha o arquivo
	}
}

void criandoArquivosC() {
	FILE* arquivo;
	arquivo = fopen("Texto.txt", "w");  // abrir um arquivo com "w" criará o arquivo se não existir e apagará todo conteudo anterior se o arquivo já existir
	fprintf(arquivo, "Escrevendo uma linha no arquivo\n");
	fclose(arquivo);
}

void escrevendoArquivosC() {
	FILE* arquivo;
	arquivo = fopen("Texto.txt", "a");  // abrir um arquivo com "a" permitirá adicionar conteúdo sem apagar o anteriormente escrito
	fprintf(arquivo, "Escrevendo uma linha no arquivo\n");
	fclose(arquivo);
}

void lendoGuardandoStringArquivoC() {
	int c;
	char conteudoTexto[255]; //Criando vetor de chars ("string")

	FILE* arquivo;
	arquivo = fopen("Texto.txt", "r");

	if (arquivo) {
		int cont = 0;
		while ((c = getc(arquivo)) != EOF) {  //EOF recebido de getc é a flag que recupera se o arquivo chegou ao final
			conteudoTexto[cont] = c;  //Guardando cada caracter lido do arquivo na string
			cont++;

		}
		fclose(arquivo);  //Fecha o arquivo
	}

	/*for (int i = 0; i < strlen(conteudoTexto); i++) {
		printf("%c", conteudoTexto[i]);
	}*/
	printf("%s", conteudoTexto);
}

void limpandoArquivoC() {
	FILE* arquivo;
	arquivo = fopen("Texto.txt", "w");
	fclose(arquivo);
}

void lendoUsuarioEscrevendoNoArquivoC() {
	char texto[255];
	FILE* arquivo;
	arquivo = fopen("Texto.txt", "a");

	printf("Digite uma frase: ");
	fgets(texto, sizeof(texto), stdin); //lê string de usuario e guarda em texto

	fprintf(arquivo, "%s", texto); //grava string no arquivo

	fclose(arquivo);
}

int main15() {
	setlocale(LC_ALL, "en_US.UTF-8");

	//criandoArquivosCPP();
	//lendoImprimindoArquivosC();
	//lendoGuardandoStringArquivoC();
	//lendoImprimindoArquivosCPP();
	//limpandoArquivoCPP();
	//limpandoArquivoC();
	//criandoArquivosC();
	//escrevendoArquivosC();
	//lendoUsuarioEscrevendoNoArquivoC();
	lendoUsuarioEscrevendoNoArquivoCPP();

	return 0;
}

