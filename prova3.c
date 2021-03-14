#include <stdio.h>
#include <string.h>

char *strrev(char *str){
      char *p1, *p2;
      if (! str || ! *str)
		return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2){
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int buscaBinaria(int vet[], int p, int q, int elem) {
	int res;
	if (p > q) {
		return -1;
	} else {
		res = (p+q)/2;
		
		if (vet[res] == elem) {
			return res;
		} else {
			if (elem < vet[res]) {
				return buscaBinaria(vet, p, res-1, elem);
			} else {
				return buscaBinaria(vet, res+1, q, elem);
			}
		}
		
	}
}

int palavraPalindromo(char *palavra, int tam) {
	char *palavraInvertida = "";
	
	strcpy(palavraInvertida, palavra);
	strrev(palavraInvertida);
	
	if (strcmp(palavra, palavraInvertida) == 0) {
		return 1;
	} else {
		return 0;
	}
}

int strtam(char str[]) {
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		return i;
	}
	
	return 0;
}

char * append(char *stra, char *strb, int max){
	char *res;
	res[max] = strcat(*stra, *strb); 
	printf("%c", res);
}

struct prova {
	float nota[10];
	int peso[10];
};

int mediaPonderada(struct prova p) {
	int media;
	int quanti_pesos;
	for (int i = 0; i < 10; i++) {
		media = media + (p.nota[i] * p.peso[i]);
		quanti_pesos = quanti_pesos + p.peso[i];
	}
	return media = media / quanti_pesos;
}

int main() {
	
	/*
	int vet[4] = {4,2,3,8};
	int p = 1, q = 4;
	int elem = 3;
	int a = buscaBinaria(vet, p, q, elem);
	printf("%d", a);
	*/
	
	
	/*
	char *palavra = "ana";
	int tam = 3;
	int b = palavraPalindromo(palavra, tam);
	printf("%d", b);
	*/
	
	
	/*
	char *a = "Isaque";
	char *b = "Veras";
	
	append(a, b, 10);
	*/
	
	
	/*
	struct prova provas;
	provas.nota[1] = 10;
	provas.peso[1] = 10;
	
	provas.nota[2] = 3;
	provas.peso[2] = 1;
	
	provas.nota[3] = 4;
	provas.peso[3] = 1; 
	
	int c = mediaPonderada(provas);
	printf("%d", c);
	*/

}
