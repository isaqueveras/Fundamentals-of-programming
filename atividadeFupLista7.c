#include <stdio.h>

int m[4][4], n[4][4], r[4][4];

void matriz_simetrica(int mat[4][4]) {
	int linha, coluna;
	
	for (linha = 0; linha < 4; linha++) {
		for (coluna = 0; coluna < 4; coluna++) {
			if (mat[linha] == mat[coluna] && mat[coluna] == mat[linha]) {
				printf("Mat[%d][%d]\n", linha, coluna);
			}
		}
	}
}

void somar_matrizes(int m[4][4], int n[4][4]){
	int linha, coluna;
	int r[4][4];

	for (linha = 0; linha < 4; linha++) {
		for (coluna = 0; coluna < 4; coluna++) {
			r[linha][coluna] = m[linha][coluna] + n[linha][coluna];
		}
	}
	
	for (linha = 0; linha < 4; linha++) {
		for (coluna = 0; coluna < 4; coluna++) {
			printf("%d\t", r[linha][coluna]);
		}
		printf("\n");
	}

}

void multiplica_matriz(int mat[3][3], int a) {
	int linha, coluna, V[3][3];
	
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			V[linha][coluna] = mat[linha][coluna] * a;
		}
	}
	
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%d\t", V[linha][coluna]);
		}
		printf("\n");
	}
	
}

void preenche_matriz_diagonal(int mat[20][20]) {
	int linha, coluna;
	
	for (linha = 0; linha < 20; linha++) {
		for (coluna = 0; coluna < 20; coluna++) {
			if (linha == coluna) {
				mat[linha][coluna] = 1;
			}else {
				mat[linha][coluna] = 0;
			}
		}
	}
	
	
	for (linha = 0; linha < 20; linha++) {
		for (coluna = 0; coluna < 20; coluna++) {
			printf("[%d]", mat[linha][coluna]);
		}
		printf("\n");
	}
}

int menor_da_matriz(int mat[8][8]) {
	int menor = mat[0][0];
	int linha, coluna;
	for (linha = 0; linha < 8; linha++) {	
		for (coluna = 0; coluna < 8; coluna++) {
			if (mat[linha][coluna] < menor) {
				menor = mat[linha][coluna];
			}
		}
	}
	
	return printf("%d", menor);
}

int main() {
	//int mat[4][4];
	//matriz_simetrica(mat);
	
	//int M[4][4] = {{2,5,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}};
	//int N[4][4] = {{2,7,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}}; 
	//somar_matrizes(M,N);
	
	//int matriz[3][3] = {{2,5,7}, {2,4,8}, {20,56,34}};
	//multiplica_matriz(matriz, 2);
	
	//int mat[20][20];
	//preenche_matriz_diagonal(mat);
	
	int mat[8][8] = { {2,2,3,4,5,6,7,8},{1,1,1,1,1,1,1,1},{2,2,2,2,2,2,2,2},{3,3,3,3,3,3,3,3},{4,4,4,4,4,4,4,4},{5,5,5,5,5,5,5,5},{6,6,6,6,6,6,6,6},{7,7,7,7,7,7,7,7} };
	menor_da_matriz(mat);
	
	return 0;
}
