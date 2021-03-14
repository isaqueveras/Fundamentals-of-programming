#include <stdio.h>

// 1° Questão
int fibonacci(int num) {
	if (num < 3) {
		return 1;
	} else {
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}

// 2° Questão
int enesimo_termo_serie(int num) {
	if (num < 3) {
		return 1;
	} else {
		return enesimo_termo_serie(num - 2) + enesimo_termo_serie(num - 3);
	}
}

// 3° Questão
void passar_valor_para_outra_matrize(int m[4]){
	int r[4];
	for (int i = 0; i < 4; i++) {
		r[i] = m[i];
		printf("%d ", r[i]);
	}
}

// 4° Questão
int soma_elementos(int m[4]) {
	int soma;
	for (int i = 0; i < 4; i++) {
		soma = soma + m[i];
	}
	return soma;
}

// Função principal
int main() {

	/*
	int num;
	printf("Informe um número: ");
	scanf("%d", &num);
	int a = enesimo_termo_serie(num);
	printf("%d", a);
	*/
	
	/*
	int m[4] = {2,5,8,10};
	passar_valor_para_outra_matrize(m);
	*/
	
	int m[4] = {2,5,10,0};
	int a = soma_elementos(m);
	printf("%d", a);
	
	return 0;
}
