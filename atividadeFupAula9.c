#include <stdio.h>

// 1° Questão
int menor(int v[], int tam) {
	int menor = v[0];
	for (int i = 0; i < tam; i++) {
		if (v[i] < menor) {
			menor = v[i];
		}
	}
	return menor;
}

// 2° Questão
int maior(int v1[], int tam1) {
	int maior = v1[0];
	for (int i = 0; i < tam1; i++) {
		if (v1[i] > maior) {
			maior = v1[i];
		}
	}
	return maior;
}

// 3° Questão
int soma_maior_menor(int v[], int tam) {
	return maior(v, tam) + menor(v, tam);
}

// 4° Questão
int sao_iguais(int v1[], int tam1, int v2[], int tam2) {
	if (tam1 == tam2) {
		int valor = 0;
		
		for (int i = 0; i < tam1; i++) {
			if (v1[i] == v2[i]) {
				valor++;
			}
		}
		
		if (valor == tam1) {
			return 1;
		}
	}
	return 0;
}

// 5° Questão
int esta_contido(int v1[], int tam1, int v2[], int tam2) {
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

int main() {
	
	/*
	int a, b, c, d, e;
	printf("Informe o 1° número: \n");
	scanf("%d", &a);
	
	printf("Informe o 2° número: \n");
	scanf("%d", &b);
	
	printf("Informe o 3° número: \n");
	scanf("%d", &c);
	
	printf("Informe o 4° número: \n");
	scanf("%d", &d);
	
	printf("Informe o 5° número: \n");
	scanf("%d", &e);
	
	int m[5] = {a, b, c, d, e};
	int z = maior(m, 5);
	printf("O menor número é: %d", z);
	*/
	
	/*
	int tam = 0;
	printf("Informe o tamanho do Vetor: ");
	scanf("%d", &tam);
	
	int v[tam];
	for (int i = 0; i < tam; i++) {
		scanf("%d", &v[i]);
	}
	
	printf("O menor numero é: \n");
	int z = menor(v, tam);
	printf("%d", z);
	printf("\n");
	
	printf("O maior numero é: \n");
	int w = maior(v, tam);
	printf("%d", w);
	printf("\n");
	
	printf("A soma do menor com o maior é: \n");
	int p = soma_maior_menor(v, tam);
	printf("%d", p);
	*/

	/*
	int v1[5] = {1, 2, 3, 4, 5};
	int v2[5] = {1, 2, 3, 4};
	int z = sao_iguais(v1, 5, v2, 4);
	printf("%d", z);
	*/
	
	int v1[5] = {1, 2, 3, 4, 5};
	int v2[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int w = esta_contido(v1, 5, v2, 8);
	printf("%d", w);
	
}
