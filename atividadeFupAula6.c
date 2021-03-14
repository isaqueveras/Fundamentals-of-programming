#include <stdio.h>

int main() {
	int fatorial, res;
	scanf("%d", &res);
	
	for (fatorial = 1; res > 1; res = res -1) {
		fatorial = fatorial * res;
	}
	printf("Fatorial: %d", fatorial);
	
	int numero, resultado = 0;
	scanf("%d", &numero);
	
	for (int i = 2; i <= numero / 2; i++) {
		if (numero % i == 0) {
			resultado++;
			break;
		}
	}
	 
	if (resultado == 0) {
		printf("%d é primo\n", numero);
	} else {
		printf("%d não é primo\n", numero);
	}

	for (int i = 0; i <= 1000; i++) {
		if ((i % 2 == 0) && (i % 5 == 0)) {
			printf("O Numero %d e %d é multiplo de 2 e de 5 \n", i, i);
		}
	}
	
	int k, n;
	float h = 0;
	scanf("%d", &n);
	for (k = n; k >= 1; k = k - 1) h = h + 1.0 / k;
	printf("%8.4f\n", h);
    
	int base, expoente;
	int res = 1;
	
	scanf("%d", &base);
	scanf("%d", &expoente);
	
	while (expoente > 0) {
		res = res * base;
		expoente--;
	}
	
	printf("%d", res);
	
	int valor, soma = 0, resultado, i;
	scanf("%d",&valor);

	for(i=1; soma < valor; i+=2)
		soma += i;

  resultado = ((i+1) / 2) - 1;
    
	if((resultado*resultado) == valor) printf("O numero %d é um quadrado perfeito", valor);
	else printf("O numero %d não é um quadrado perfeito", valor);
	
	int num, sequencia = 1, contador= 1, enesimo;
	scanf("%d", &num);
	
	while (contador <= num) {	
		sequencia = (sequencia*2) + 1;
		contador++;

		if(contador == num)
			enesimo = sequencia;
	}
	
	printf("O enesimo termo é: %d", enesimo);
	
	return 0;
}
