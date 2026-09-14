#include <iostream>
#include <string>
#include <locale.h> 

using namespace std;

struct fruta {
	string nome;
	string cor;
};

void utilizandoStructCPP() {
	fruta primeirafruta;

	primeirafruta.nome = "Banana";
	primeirafruta.cor = "Amarelo";

	cout << "Fruta : " << primeirafruta.nome << ", Cor : " << primeirafruta.cor << endl;

	fruta listaFrutas[5];

	listaFrutas[0].nome = "Abacaxi";
	listaFrutas[1].nome = "Melão";
	listaFrutas[2].nome = "Melancia";
	listaFrutas[3].nome = "Maçã";
	listaFrutas[4].nome = "Pêra";

	listaFrutas[0].cor = "Laranja";
	listaFrutas[1].cor = "Amarelo";
	listaFrutas[2].cor = "Verde";
	listaFrutas[3].cor = "Vermelho";
	listaFrutas[4].cor = "Amarelo";

	cout << "Lista de frutas" << endl;

	for (int i = 0; i < 5; i++) {
		cout << "Nome fruta : " << listaFrutas[i].nome << " Cor da fruta : " << listaFrutas[i].cor << endl;
	}
}

void utilizandoStructCPPnaHeap() {
	fruta* primeiraFruta = new fruta;

	primeiraFruta->cor = "Amarela";
	primeiraFruta->nome = "Banana";

	cout << "Fruta : " << primeiraFruta->nome << ", Cor : " << primeiraFruta->cor << endl;

	delete primeiraFruta;

	fruta* listaFrutas = new fruta[3];

	listaFrutas[0].cor = "Vermelho";
	listaFrutas[1].cor = "Laranja";
	listaFrutas[2].cor = "Verde";
	listaFrutas[0].nome = "Maçã";
	listaFrutas[1].nome = "Abacaxi";
	listaFrutas[2].nome = "Melancia";

	for (int i = 0; i < 3; i++) {
		cout << "Nome fruta : " << listaFrutas[i].nome << " Cor : " << listaFrutas[i].cor << endl;
	}

	delete[] listaFrutas;
}

int main14() {
	setlocale(LC_ALL, "en_US.UTF-8");

	//utilizandoStructCPP();
	utilizandoStructCPPnaHeap();

	return 0;
}