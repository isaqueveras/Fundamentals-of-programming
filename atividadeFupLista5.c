#include <stdio.h>

// 1° Questão
void passar_valor(int v1[], int v2[], int tam) {
	for (int i = 0; i < tam; i++) {
		v2[i] = v1[i];
		printf("%d \n", v2[i]);
	}
}

// 2° Questão
int soma(int v1[], int tam1) {
	int soma;
	for (int i; i < tam1; i++) {
		soma = soma + v1[i];
	}
	return soma;
}

// 3° Questão
int existe_no_vetor(int v1[], int tam1, int v2[], int tam2) {
	int cont = 0;
	for(int i = 0; i < tam1; i++){
		for(int j = 0; j < tam2; j++){
			if(v1[i] == v2[j]){
				cont++;
			}
		}
	} if(cont == tam1){
		return 1;
	}
	return 0;
}

// 4° Questão
void inverteOsValores(int vetor[], int p1, int p2){
	for(int i = 5; i >= 0; i--){
		if ((vetor[i] >= p1) && (vetor[i] <= p2)) {
			printf("%d\n", vetor[i]);
		}
	}
}

// 5° Questão
void troca_os_valores(int v1[], int v2[]) {
	int ve1[5], ve2[5];
	for (int i = 0; i < 5; i++) {
		ve2[i] = v1[i];
		ve1[i] = v2[i];
		printf("V1: %d; V2:%d\n", ve1[i], ve2[i]);
	}
}

// 6° Questão
int media(int notas[], int quant) {
	int soma, media;
	for(int i; i < quant; i++){
		soma = soma + notas[i];
	}
	
	return media = soma / quant;
}


int main() {
	
	// 1° Questão
	/*
	int v1[4] = {2, 4, 9, 3};
	int v2[4];
	passar_valor(v1, v2, 4);
	*/
	
	// 2° Questão
	/*
	int vetor[4] = {3,5,2,2};
	int s = soma(vetor, 4);
	printf("%d", s);
	*/
	
	// 3° Questão
	/*
	int v1[5] = {1, 2, 3, 4, 5};
	int v2[5] = {1, 2, 3, 4, 5};
	
	int x = existe_no_vetor(v1, 5, v2, 5);
	printf("%d", x);
	*/
	
	// 4° Questão
	/*
	int v1[5] = {10, 20, 30, 40, 50};
	inverteOsValores(v1, 10, 40);
	*/
	
	// 5° Questão
	/*
	int v1[5] = {2,3,4,7,8};
	int v2[5] = {7,5,6,8,4};
	troca_os_valores(v1, v2);
	*/
	
	// 6° Questão
	int notas[5] = {8, 6, 9, 5, 7};
	int n = media(notas, 5);
	printf("%d", n);
	
	return 0;
}
