#include <stdio.h>
#include <string.h>

int tamanho_string(char str[]) {
	int tam = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		tam++;
	}
	return tam;
}

int compara_string(char str1[], char str2[]) {
	int n1 = tamanho_string(str1);
	int n2 = tamanho_string(str2);
	
	if (n1 == n2) {
		return 0;
	}
	
	if (n1 > n2) {
		return n1;
	} else {
		return n2;
	}
	return 0;
}

int copie_caracteres(char str1[], char str2[], int tam) {

	str2[tam] = '\0';
	strncpy(str2, str1, tam);
	
	int tam_str = tamanho_string(str2);
	printf("A palavra é %s, e ela tem %d letras\n", str2, tam_str);
	
	return 0;
}

void caracteres_str(char frase[], char *letra) {
	int i = 0; 
	int contador;
	
	while (frase[i] != '\0') {
		if (frase[i] == *letra) {
			contador++;	
		}
		i++;
	}
	
	printf("%d", contador);
}

void menor_primeiro(char txt1[], char txt2[]) {
	char t1 = tamanho_string(txt1);
	char t2 = tamanho_string(txt2);
	
	if (t2 > t1) {
		printf("Verdadeiro");
	} else {
		printf("Falso");
	}
}

void menor_dentro_maior(char strMenor[], char strMaior[]) {
	char *res;
	res = strstr(strMaior, strMenor);
	
	if (strcmp(res, strMenor) >= 0) {
		printf("Contem a palavra na frase\n");
		
	} else {
		printf("Não contem");
	}
	
	if (res != NULL) {
		printf("Contem %s na frase! ", strMenor);
	}else{
		printf("Não contem %s na frase! ", strMenor);
	}
}

int main() {
	/*
	int x = compara_string("Isaque Veras", "Isaque");
	printf("%d", x);
	*/
	
	/*
	char nome1[12] = "Isaque Veras";
	char nome2[12];
	copie_caracteres(nome1, nome2, 8);
	*/
	
	/*
	char str[20] = "Isaque Veras";
	char *letra = "a";
	
	caracteres_str(str, letra);
	*/
	
	/*
	char txt1[10] = "Casa";
	char txt2[10] = "Veras";
	menor_primeiro(txt1, txt2);
	*/
	
	/*
	char menor[] = "bin";
	char maior[] = "o bin laden e o bingo";
	menor_dentro_maior(menor, maior);
	*/
	
	return 0;
}
