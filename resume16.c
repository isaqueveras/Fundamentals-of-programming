#include <stdio.h>

int fatorial(int x) {
	int resultado;
	if (x == 0) {
		resultado = 1;
	} else {
		resultado = x * fatorial(x - 1); 
	}
	return resultado;
}

int soma_1_a_n(int n) {
	return (n <= 1) ? n : (n+soma_1_a_n(n-1));
}

float potencia(float b, int e) {
	return (e == 0) ? 1 : (e == 1) ? b : b * potencia(b , e - 1);
}

float serie(float n) {
	if (n == 1) {
		return 1;
	}
	
	return (1/n) + serie(n-1);
}

int main() {
	
	/*
	int num;
	printf("Informe um numero: ");
	scanf("%d", &num);
	int i = fatorial(num);
	printf("%d", i);
	*/
	
	/*
	int num, result;
	printf("Informe um numero: ");
	scanf("%d", &num);
	result = soma_1_a_n(num);
	printf("O fatorial é %d", result);
	*/
	
	
	/*
	int resultado, expoente;
	float base;
	printf("Informe a base: ");
	scanf("%f", &base);
	
	printf("Informe o expoente: ");
	scanf("%d", &expoente);
	
	resultado = potencia(base, expoente);
	printf("Resultado: %d", resultado);
	*/
	
	float num, result;
	printf("Informe um numero: ");
	scanf("%f", &num);
	result = serie(num);
	printf("O resultado da série é %f", result);
	
}
