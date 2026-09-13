#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mostraSomaMaisDez(int numero) {
	return numero + 10;
}

void SomaMaisDez(int* numero) {
	*numero += 10;
}

int main10() {

	int a = 5;

	printf("%d \n", a);

	a = mostraSomaMaisDez(a); //Maneira de alterar valor utilizando valor da função sem necessidade de usar ponteiro. Pois a alteração é no mesmo escopo

	printf("%d \n", a);

	SomaMaisDez(&a);

	printf("%d \n", a);

	return 0;
}