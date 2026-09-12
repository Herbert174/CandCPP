#include <iostream>
#include <string>

using namespace std;

int main3() {
	string palavra;
	string frase;

	cout << "Digite uma palavra " << endl;
	cin >> palavra;
	cout << palavra << endl;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Limpeza completa do buffer ocasionado pelo cin anterior
	//cin.ignore(); funciona na maioria dos casos simples

	cout << "Digite uma frase " << endl;
	getline(cin, frase);
	cout << frase << endl;

	return 0;
}