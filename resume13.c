#include <stdio.h>

void preenche_matriz(int mat[20][20]) {
	int linha, coluna;
	for (linha = 0; linha < 20; linha++) {
		for (coluna = 0; coluna < 20; coluna++) {
			mat[linha][coluna] = 1;
		}
	}
}

void preenche_matriz_diagonal(int mat[20][20]) {
	int linha, coluna;
	for (linha = 0; linha < 20; linha++) {
		for (coluna = 0; coluna < 20; coluna++) {
			if (linha == coluna) {
				mat[linha][coluna] = 1;
			} else {
				mat[linha][coluna] = 0;
			}
		}
	}
}

void maior_valor_matriz(int mat[4][4]) {
	int linha, coluna;
	int maior = mat[0][0];
	
	for (linha = 0; linha < 4; linha++) {
		for (coluna = 0; coluna < 4; coluna++) {
			if (mat[linha][coluna] > maior) {
				maior = mat[linha][coluna];
			}
		}
	}
	
	return maior;
}


void troca_valores(int matriz[4][4]) {
	int aux;
	for (int i = 0; int < 4; i++) {
		aux = matriz[0][i];
		matriz[0][i] = matriz[3][i];
		matriz[3][i] = aux;
	}
}

void somar_todos(int matriz[3][3]) {
	int linha, coluna;
	int soma = 0;
	
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			soma = soma + matriz[linha][coluna];
		}
	}
	
	return soma;
}

int main() {
	
	return 0;
}
