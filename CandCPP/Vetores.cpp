#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main7() {
	vector<int> vetor(3);  //Guarda posições na memoria para o vetor, necessário quando o mesmo já não é iniciado com seus valores setados
	vector<int> vetor1{ 10,20,30 }; //Outra forma já iniciando com seus valores iniciais

	vetor[0] = 10;   //Setando valores nos endereços do vetor
	vetor[1] = 20;
	vetor[2] = 30;

	for (int i = 0; i < vetor.size(); i++) {
		cout << vetor[i] << endl;
	}
	

	vector<vector<int>> matriz(3, vector<int>(3)); //Inicializa matriz definindo 3 linhas e 3 colunas de memoria
	matriz[0][0] = 10;
	matriz[0][1] = 50;
	matriz[0][2] = 20;
	matriz[1][0] = 30;
	matriz[1][1] = 40;
	matriz[1][2] = 60;

	//cout << matriz[1][2];

	vector<vector<int>> matriz1 = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	//matriz1[2][2] = 73;  Alterando a ultima posição da matriz

	for (const auto& linha : matriz1) {     //for (iterador : array) é um for do c++ mais limpo sem necessidade da sintaxe antiga do for
		for (int elemento : linha) {        //o const auto& iterador serve para evitar que o c++ faça cópias desnecessárias na memória
			cout << elemento << endl;       //e deixando o código mais rápido
		}
	}
	return 0;
}