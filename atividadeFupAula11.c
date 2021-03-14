#include <stdio.h>
#include <string.h>

int tamanho_string(char str[]) {
	int tam = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		tam++;
	}
	return tam;
}

bool verifica(char *str, char *str1) {
	int n = tamanho_string(str);
	int n1 = tamanho_string(str1);
	
	if (n != n1) {
		return 0;
	}
	
	for (int i = 0; i < n; i++) {
		if (str[i] == str1[i]) {
			return 1;
		}
	}
	return 0;
}

bool minuscula(char str[]) {
	int valor = 0;
	int n = tamanho_string(str);
	
	for (int i = 0; i < n; i++) {
		if (str[i] >= 97 && str[i] <= 122) {
			valor++;
		}
	}
	
	if (valor == n) {
		return 1;
	}
	return 0;

}

bool maiuscula(char str[]) {
	int valor = 0;
	int n = tamanho_string(str);
	for (int i = 0; i < n; i++) {
		if (str[i] >= 65 && str[i] <= 90) {
			valor++;
		}
	}
	
	if (valor == n) {
		return 1;
	}
	
	return 0;
}

bool verifica_espaco(char str[]) {
	int n = tamanho_string(str);
	for (int i = 0; i < n; i++) {
		if (str[i] == ' ') {
			return 1;
		}
	}
	return 0;
}

int compara_string(char str1[], char str2[]) {
	int n = tamanho_string(str1);
	int n1 = tamanho_string(str2);
	
	if (n == n1) {
		return 0;
	}
	
	if (n > n1) {
		return n;
	}
	
	return n1;
}

int main() {


}
