#include <stdio.h>
#include <iostream>
#include <cmath>


struct numeros {
	int a;
	int b;
};

int soma(struct numeros n) {
	return n.a + n.b;
}

int maiorNumero(struct numeros n) {
	if (n.a > n.b) {
		return n.a;
	}
	return n.b;
}



struct Vetor {
	int V[10];
	int tamanho;
};


int maiorElemento(struct Vetor a) {
	int elem = a.V[0];
	for (int i = 0; i < a.tamanho; i++) {
		if (a.V[i] > elem) {
			elem = a.V[i];
		}
	}
	return elem;
}

struct numeros2 {
	float a;
	float b;
	char operador;
}

int calcular (struct numeros2 n) {
	float aux = 0;
	
	if (m.operador == '+') {
		aux = n.a + n.b;
	}
	
	if (m.operador == '-') {
		aux = n.a - n.b;
	}
	
	if (m.operador == '*') {
		aux = n.a * n.b;
	}
	
	if (m.operador == '/') {
		aux = n.a / n.b;
	}
	
	return aux;
}

int main() {
	
	/*
	struct numeros teste;
	teste.a = 10;
	teste.b = 5;
	
	int v = soma(teste);
	printf("%d", v);
	*/
	
	
	return 0;
}
