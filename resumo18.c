#include <stdio.h>

// 1° Questão
void incrementa(int *N, int num) {
	*N = *N + num;
}

// 2° Questão
void swap(int *A, int *B) {
	int aux = *A;
	*A = *B;
	*B = aux;
}

// 3° Questão
int *retorna(int *vet, int tam, int elem) {
	for (int i = 0; i < tam; i++) {
		if (vet[i] == elem) {
			return &vet[i];
		}
	}
	return NULL;
}

// 4° Questão
int tamanho(int *inicio, int *fim) {
	int tam = 0;
	while (inicio != fim) {
		tam++;
		inicio++;
	}
	return tam+1;
}


int main() {
	
	return 0;
}
