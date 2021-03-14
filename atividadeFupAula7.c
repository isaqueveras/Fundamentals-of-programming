#include <stdio.h>

int e_primo(int numero) {
	
	if (numero <= 1) {
		return 0;
	}
	
	for (int i =2; i <= numero / 2; i++) {
		if (numero % i == 0) {
			return 0;
		}
	}
	
	return 1;
}


int conta_primo(int numero) {
	int acomulador = 0;
	for (int i = 0; i <= numero; i++) {
		if (e_primo(i) == 1) {
			acomulador++;
		}
	}
	return acomulador;
}


int nao_primo_menos_primos(int numero) {
	int npri = 0;
	int pri = 0;
	
	for (int i = 1; i <= numero; i++) {
		if (e_primo(i) == 0) {
			npri = npri + i;
		}
		
		if (e_primo(i) == 1) {
			pri = pri + i;
		}
	}
	
	return npri - pri;
}

int soma(int num) {
	int soma = 0;
	for (int i = 0; i <= num; i++) {
		soma = soma + i;
	}
	return soma;
}


int conta_valores500() {
	int acomulador = 0;
	for (int i = 0; i <= 500; i++) {
		if  ((i % 2 != 0) && (i % 3 == 0)) {
			acomulador++;
		}
	}
	return acomulador;
}


int main() {
	
	
	int y = e_primo(4);
	printf("%d", y);
	
	
	/*
	int valor;
	scanf("%d", &valor);
	int y = conta_primo(valor);
	printf("%d", y);
	*/
	
	/*
	int valor;
	scanf("%d", &valor);
	int y = nao_primo_menos_primos(valor);
	printf("%d", y);
	*/
	
	//conta_valores500();
	
	//int b = soma(3);
	//printf("%d", b);
}
