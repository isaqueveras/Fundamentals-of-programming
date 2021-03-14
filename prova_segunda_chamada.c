#include <stdio.h>
#include <string.h>

/*  
	função que conta quantos caracteres
	tem em uma string 
*/
int tamanho_string(char str[]) {
	int tam = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		tam++;
	}
	return tam;
}

// 2° Questão
// Não deu tempo de terminar :(
void eliminar_repetidos(int v[]) {
	int cont = 0;
	for (int i = 0; i < 4; i++) {
		if (v[i] == v[i]) {
			cont++;
		}
	}
	printf("%d ", cont);
}

// 3° Questão
int ha_espaco(char str[]) {
	int string = tamanho_string(str);
	for (int i = 0; i < string; i++) {
		if (str[i] == ' ') {
			return 1;
		}
	}
	return 0;
}

// 4° Questão
int anagrama(char str1[], char str2[]) {
	int cont = 0;
	int n1 = tamanho_string(str1);
	int n2 = tamanho_string(str2);
	
	if (n1 == n2) {
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < n2; j++) {
				if (str1[i] == str2[j]) {
					cont++;
					str2[j] = 0;
					break;
				}
			}
		}
		
		if (cont == n1) {
			return 1;
		} else {
			return 0;
		}
		
	} else {
		return 0;
	}
	
}

// 5° Questão
int maior_valor_matriz(int mat[4][4]){
	int linha, coluna;
	int posicaoLinha = 0,posicaoColuna = 0;
	int maior = mat[0][0];
	for(linha = 0; linha < 4; linha++){
		for(coluna = 0; coluna < 4; coluna++){
			if(mat[linha][coluna] > maior){
				maior = mat[linha][coluna];
				posicaoLinha = linha;
				posicaoColuna = coluna;
			}
		}
	}
	printf("Posição na Linha: %d\n", posicaoLinha);
	printf("Posição na Coluna: %d\n", posicaoColuna);
	printf("Maior numero: %d\n", maior);
	return 0;
}

// 6° Questão
int bingo(int v[], int m[4][4]) {
	int linha, coluna, cont = 0;
	for (linha = 0; linha < 4; linha++) {
		for (coluna = 0; coluna < 4; coluna++) {
			for (int i = 0; i < 16; i++) {
				if (v[i] == m[linha][coluna]) {
					cont++;
					break;
				}
			}
		}
	}
	return cont;
}


int main() {
	
	int str[4] = {1,6,6,1};
	eliminar_repetidos(str);
	
	
	/*
	char str[20] = "Isaque Veras";
	int espaco = ha_espaco(str);
	printf("%d", espaco);
	*/
	
	/*
	char str1[] = "AMOR";
	char str2[] = "ROMA";
	
	int b = anagrama(str1, str2);
	printf("%d", b);
	*/
	
	/*
	int v1[4][4] = {{0,0,0,0,}, {0,5,5,2}, {0,2,5,4}, {0,9,5,6}};
	int m = maior_valor_matriz(v1);
	printf("%d", m);
	*/
	
	/*
	int v[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,69};
	int m[4][4] = {{1,1,1,1}, {2,3,4,5}, {30,30,36,69}, {20,20,20,20}};
	int s = bingo(v, m);
	printf("%d", s);
	*/
	
	
	return 0;
}
