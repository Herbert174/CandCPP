#define _CRT_SECURE_NO_WARNINGS //Necessário para ignorar erro apontado pelo scanf, por ele ter um retorno int de sucesso de leitura, ignorado nessa situação
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>  //Necessário para utilizar o setlocale

//#include "impressao.c"   Compilador já junta todos os arquivos em um unico obj



int main1() {
	setlocale(LC_ALL, "en_US.UTF-8"); //Necessário para o Visual Studio reconhecer o UTF-8 (Acentos como á ç entre outros)

	operacoesBasicasC();

	return 0;
}