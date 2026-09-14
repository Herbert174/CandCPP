#define _CRT_SECURE_NO_WARNINGS 
#include <fstream>
#include <string>
#include <iostream>
#include <filesystem>
#include <locale.h>
#include <sstream>
#include <vector>

using namespace std;

int criandoArquivo(string caminhoArquivo) {
	if (filesystem::exists(caminhoArquivo)) {
		ofstream arquivo;
		arquivo.open(caminhoArquivo, ios_base::app);
		if (!arquivo.is_open()) {
			cout << "Erro ao abrir o arquivo!" << endl;
			return 0; //Erro ao abrir o arquivo
		}
		arquivo.close();
		cout << "Arquivo já existe!" << endl;
	}
	else {
		ofstream arquivo;
		arquivo.open(caminhoArquivo);
		if (!arquivo.is_open()) {
			cout << "Erro ao abrir o arquivo!" << endl;
			return 0; //Erro ao abrir o arquivo
		}
		arquivo.close();
		cout << "Arquivo criado!" << endl;
	}
	
	return 1;
}

int apagandoArquivo(string caminhoArquivo) {
	if (filesystem::remove(caminhoArquivo))
		cout << "Arquivo apagado com sucesso!\n" << endl;
	else {
		cout << "Erro : Arquivo não existe ou não pôde ser apagado." << endl;
		return 0;
	}
	return 1;
}

int escrevendoArquivo(string caminhoArquivo, string texto) {
	ofstream arquivo;
	arquivo.open("Texto.txt", ios_base::app);
	if (!arquivo.is_open()) {
		cout << "Erro ao abrir o arquivo!" << endl;
		return 0; //Erro ao abrir o arquivo
	}
	arquivo << texto;
	arquivo << "\n";
	arquivo.close();
	return 1;
}

string lendoArquivo(string caminhoArquivo) {
	ifstream arquivo(caminhoArquivo);  //instanciando ifstream para ler arquivos no c++
	if (!arquivo.is_open()) {
		cout << "Erro ao abrir o arquivo!" << endl;
	}
	// 2. Lê todo o conteúdo do arquivo usando um stringstream
	stringstream buffer;
	buffer << arquivo.rdbuf();

	// 3. Guarda o conteúdo na variável string
	string conteudo = buffer.str();
	arquivo.close();
	return conteudo;
}

void imprimindoArquivo(string caminhoArquivo) {
	ifstream arquivo(caminhoArquivo);  //instanciando ifstream para ler arquivos no c++
	string linha;
	if (!arquivo.is_open()) {
		cout << "Erro ao abrir o arquivo!" << endl;
		return;
	}
	while (getline(arquivo, linha)) {  //getline lê linha por linha de um arquivo, mesmo tendo espaço e guarda em uma variavel
		cout << linha << endl;
	}

	arquivo.close();
}

int limpandoArquivo(string caminhoArquivo) {
	if (filesystem::exists(caminhoArquivo)) {
		ofstream arquivo;
		arquivo.open(caminhoArquivo);
		if (!arquivo.is_open()) {
			cout << "Erro ao abrir o arquivo!" << endl;
			return 0; //Erro ao abrir o arquivo
		}
		arquivo.close();
		cout << "Arquivo limpo!" << endl;
	}
	else {
		cout << "Arquivo não encontrado!" << endl;
		return 0;
	}

	return 1;
}

int editarArquivo(string caminhoArquivo, string alteracao, int linha) {
	vector<string> linhas;
	string linhaAtual;

	//Lendo o arquivo para salvar no vetor e poder fazer a alteração desejada pelo usuario

	ifstream arquivoLeitura(caminhoArquivo);   //Instanciando arquivo de leitura
	if (arquivoLeitura.is_open()) {
		while (getline(arquivoLeitura, linhaAtual)) {  //Lê linha por linha do arquivo e guarda em linha atual
			linhas.push_back(linhaAtual);  //Adiciona linha atual ao vetor linhas no final atual do arquivo
		}
		arquivoLeitura.close();
	}else{
		cout << "Erro ao abrir o arquivo!" << endl;
		return 0; //Erro ao abrir o arquivo
	}

	//Alterando vetor que contém o conteúdo do arquivo lido, adicionando as alterações desejadas pelo usuario

	if (linhas.size() >= 2) {  //Verifica se o arquivo possui mais de 1 linha
		// linhas.begin() + linha (escolhida pelo usuario) aponta para a posição desejada
		linhas.insert(linhas.begin() + (linha - 1), alteracao);
	}
	else {
		linhas.push_back(alteracao); //Se o arquivo tiver menos de 2 linhas adiciona no final do arquivo
	}

	ofstream arquivoEscrita(caminhoArquivo);
	if (arquivoEscrita.is_open()) {
		for (const string& linha : linhas) {
			arquivoEscrita << linha << endl;
		}
		arquivoEscrita.close();
		cout << "Arquivo alterado e salvo com sucesso!" << endl;
	}
	else {
		cout << "Erro ao salvar as alterações no arquivo." << endl;
		return 0;
	}

	return 1;
}

int main() {
	setlocale(LC_ALL, "en_US.UTF-8");
	//criandoArquivo("Textoteste.txt");
	//apagandoArquivo("Textoteste.txt");
	//escrevendoArquivo("Texto.txt", "Palmeiras vai ganhar tudo esse ano");
	//cout << lendoArquivo("Texto.txt");
	//imprimindoArquivo("Texto.txt");
	//limpandoArquivo("Texto.txt");
	//editarArquivo("Texto.txt", "Palmeiras primeiro campeão mundial!", 1);

	return 0;
}